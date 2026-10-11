#!/usr/bin/env bash
# Assemble toolchain/ from public copies of the original compiler media.
#
#   bash toolchain/fetch.sh [--force] [msvc-6.00-9782] [msvc-6.00-8168] [msvc-6.00-8447]
#                           [icl-4.0] [icl-6.0.078] [icl-8.0.046] [icl-9.0.022]
#
# `make toolchain` runs this in the build container, which has every tool it
# needs (curl, bsdtar, 7z, cabextract, unar, unshield, python3). With no names
# it builds every tree. A tree that is already present and matches its
# digest is left alone; one that does not match is an error unless --force.
#
# Downloads (about 2.4 GB) are verified by SHA-256 and kept in
# toolchain/downloads/ so a rerun fetches nothing; delete that directory once
# the trees are built if you want the space back. Every finished tree is
# checked against a digest of its full contents (every file's SHA-256), so
# what you get is byte-for-byte the toolchain this source was matched with.
set -euo pipefail

TC="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
DL="$TC/downloads"
WORK="$TC/.work"
FORCE=0

# --- the media -------------------------------------------------------------
VS6RTM_URL='https://archive.org/download/visualstudiov60enterpriseedition_199807/Visual%20Studio%20v6.0%20Enterprise%20Edition%20%28Disc%201%29%28X03-78941%29%28Microsoft%20Corporation%29%28August%201998%29.iso'
VS6RTM_SHA=fbcc23765fd3377b8e05f4c1f90151e2f7b3c928b1d4f2595242c92ebe99fab8
VS6SP3_URL='https://archive.org/download/msvs6sp3/Microsoft%20Visual%20Studio%206.0%20Service%20Pack%203.iso'
VS6SP3_SHA=92122f31beb62d99eb6a0545f5af0366caaa940b46515cd393ca15fe03741814
TECHNET_URL='https://archive.org/download/ms-technet-tnsb9908/TNSB9908.iso'
TECHNET_SHA=f3eefbd0b7d7958a44ef63c2bb28bcf75ef8d5adcd2e65082f54fb399004a928
# The Intel compilers, as collected at archive.org/details/intel-c-compilers.
ICL_ITEM='https://archive.org/download/intel-c-compilers'
ICL_URL="$ICL_ITEM/ICL.ver.4.0%20%28trial%20%26%20patch%29.English.rar"
ICL_SHA=2a62ca821286df3d62be22482cd5241bac846efb5ca98635101f416f09a0d85b
ICL6_URL="$ICL_ITEM/Intel%20C%2B%2B%20Compiler.ver.6.0.078.English.zip"
ICL6_SHA=a716606db12b219ba7710ccc4040e18f954a5e820c7ee05898e887afce510b08
ICL8_URL="$ICL_ITEM/Intel%20C%2B%2B%20Compiler.ver.8.0.046.English.zip"
ICL8_SHA=0f03ac30d5c09410e197583212178bb84ff958013a69f761e5be361784620437
ICL9_URL="$ICL_ITEM/Intel%20C%2B%2B%20Compiler.ver.9.0.022.English.zip"
ICL9_SHA=914b82108181c1cf56a76ddb64c178ded66045c4013cd577e86a662b7e143dfa
# A portable VC6 SP6 tree, pinned to one commit. GitHub does not promise that
# its generated tarballs are byte-stable, so the archive itself is not
# pinned; the extracted tree is, by its digest below.
MSVC600_COMMIT=001c4bafdcf2ef4b474d693acccd35a91e848f40
MSVC600_URL="https://codeload.github.com/itsmattkc/MSVC600/tar.gz/$MSVC600_COMMIT"

# --- the finished trees: SHA-256 over `sha256sum` of every file, sorted -----
declare -A TREE_SHA=(
    [msvc-6.00-9782]=78ff2ccc2c2c5f9e38cb0155811672b0a4de56f1e673ef779442ce4e89d93edb
    [msvc-6.00-8168]=17b81cd04ffa07047450a2f6c706f51f76b1610f30835e12e25d0b742b2c986a
    [msvc-6.00-8447]=a395f322bc376675f232fdf54d127b38f40383571715e968ecf7343bebf2890e
    [icl-4.0]=0355308ba40347b1ec7d75ffc46736735b5230a25c27aa9e5f4f6e399a6bb8f7
    [icl-6.0.078]=9cbdd9f09e77bf65bf4f64246df57147b1f83dbc2b7bdae546a1a8af24a2633c
    [icl-8.0.046]=733c6bbded14217994057c2eb50d5e3832c43f5466f2da6b4b0976f98929db4d
    [icl-9.0.022]=161d54d0cec4b79dbc0022763f6bc00df4d2bf314679aa61bef78c2d130a991c
)
ALL=(msvc-6.00-9782 msvc-6.00-8168 msvc-6.00-8447 icl-4.0 icl-6.0.078 icl-8.0.046 icl-9.0.022)

die() { echo "toolchain: $*" >&2; exit 1; }

tree_sha() {
    (cd "$1" && find . -type f -print0 | LC_ALL=C sort -z | xargs -0 sha256sum) \
        | sha256sum | cut -c1-64
}

# fetch FILE URL [SHA256]: download into downloads/ unless already there (and valid).
fetch() {
    local dest="$DL/$1" url="$2" sha="${3:-}"
    if [ -f "$dest" ] && { [ -z "$sha" ] || echo "$sha  $dest" | sha256sum -c --status; }; then
        echo "   have    $1"
        return
    fi
    mkdir -p "$DL"
    echo "   fetch   $1"
    curl --fail --location --retry 5 --retry-all-errors --connect-timeout 30 \
        --continue-at - --progress-bar --output "$dest.part" "$url" \
        || die "download failed: $url"
    if [ -n "$sha" ] && ! echo "$sha  $dest.part" | sha256sum -c --status; then
        rm -f "$dest.part"
        die "$1: SHA-256 mismatch (expected $sha)"
    fi
    mv -f "$dest.part" "$dest"
}

# Lower-case every name below the given directories, so a service-pack overlay
# replaces a file instead of creating a second copy that differs only in case.
lowercase() {
    local path name lower
    while IFS= read -r -d '' path; do
        name=$(basename "$path")
        lower=$(printf '%s' "$name" | tr '[:upper:]' '[:lower:]')
        [ "$name" = "$lower" ] || mv "$path" "$(dirname "$path")/$lower"
    done < <(find "$@" -depth -mindepth 1 -print0)
}

VC_DIRS=(BIN INCLUDE LIB MFC/INCLUDE MFC/LIB)

# The discs keep some of VC98/INCLUDE under 8.3 names, which VC6 setup
# renames as it installs; without <exception>, <new> and the whole STL fail
# to compile. Each pair is byte-identical to the long-named file of an
# installed VC6 (msvc-6.00-9782).
INCLUDE_LONG_NAMES=(
    algrithm:algorithm      fctional:functional     stdxcept:stdexcept
    streambf:streambuf      strstrem:strstream      xception:exception
    evncptsi.c:eventcpts_i.c                        evntcpts.h:eventcpts.h
    mtsevnts.h:mtsevents.h  mtsevt_i.c:mtsevents_i.c
    mtxadm_i.c:mtxadmin_i.c oledbspc.hh:oledb11spec.hh
    scrddt_i.c:scarddat_i.c scrmgr_i.c:scardmgr_i.c scrsrv_i.c:scardsrv_i.c
    sdkprbld.mak:sdkpropbld.mak                     sspsdl_i.c:sspsidl_i.c
)
long_names() {
    local p
    for p in "${INCLUDE_LONG_NAMES[@]}"; do
        [ ! -f "$1/${p%%:*}" ] || mv -f "$1/${p%%:*}" "$1/${p#*:}"
    done
}

# VC6 RTM (cl/c2 12.00.8168): VC98's command-line tools, headers, CRT and MFC
# libraries from Disc 1, plus the PDB writer from Common.
build_8168() {
    local out="$1" x="$WORK/rtm"
    fetch VS6RTM.iso "$VS6RTM_URL" "$VS6RTM_SHA"
    mkdir -p "$x" "$out/MFC"
    bsdtar -xf "$DL/VS6RTM.iso" -C "$x" \
        VC98/BIN VC98/INCLUDE VC98/LIB VC98/MFC/INCLUDE VC98/MFC/LIB \
        COMMON/MSDEV98/BIN/MSPDB60.DLL
    local d
    for d in "${VC_DIRS[@]}"; do mv "$x/VC98/$d" "$out/$d"; done
    cp "$x/COMMON/MSDEV98/BIN/MSPDB60.DLL" "$out/BIN/"
    chmod -R u+w "$out"
    lowercase "${VC_DIRS[@]/#/$out/}"
    long_names "$out/INCLUDE"
    rm -rf "$x"
}

# VC6 SP3 (back end c2 12.00.8447): the RTM tree with Service Pack 3's English
# VC98 files laid over it. The pressed SP3 disc lacks the new back end; the
# Internet/Core edition of SP3 on the August 1999 TechNet disc carries it as
# msvcep.dll, which SP3 setup installs as VC98/BIN/C2.DLL.
build_8447() {
    local out="$1" x="$WORK/sp3" d
    build_8168 "$out"
    fetch VS6SP3.iso "$VS6SP3_URL" "$VS6SP3_SHA"
    fetch TNSB9908.iso "$TECHNET_URL" "$TECHNET_SHA"
    mkdir -p "$x/pressed" "$x/technet" "$x/core"
    7z x -y -o"$x/pressed" "$DL/VS6SP3.iso" \
        'enu/vc98/bin/*' 'enu/vc98/include/*' 'enu/vc98/lib/*' \
        'enu/vc98/mfc/include/*' 'enu/vc98/mfc/lib/*' >/dev/null
    7z x -y -o"$x/technet" "$DL/TNSB9908.iso" 'VSTUDIO/SP3/*' >/dev/null
    cabextract -q -d "$x/core" "$x/technet/VSTUDIO/SP3/VS6SP3_1.EXE"
    [ -f "$x/core/msvcep.dll" ] || die "the TechNet SP3 package has no msvcep.dll"
    chmod -R u+w "$x"
    lowercase "$x/pressed/enu/vc98"
    for d in "${VC_DIRS[@]}"; do
        d=$(printf '%s' "$d" | tr '[:upper:]' '[:lower:]')
        cp -a "$x/pressed/enu/vc98/$d/." "$out/${d^^}/"
    done
    long_names "$out/INCLUDE"
    cp "$x/core/msvcep.dll" "$out/BIN/c2.dll"
    chmod -R u+w "$out"
    rm -rf "$x"
}

# VC6 SP6 (c2 12.00.9782) as a portable Common/ + VC98/ tree.
build_9782() {
    local out="$1" x="$WORK/9782"
    fetch "MSVC600-$MSVC600_COMMIT.tar.gz" "$MSVC600_URL"
    mkdir -p "$x"
    tar -xzf "$DL/MSVC600-$MSVC600_COMMIT.tar.gz" -C "$x"
    mv "$x/MSVC600-$MSVC600_COMMIT" "$out"
    rm -rf "$x"
}

# Intel C/C++ 4.0 (build 99100), the evaluation release: a RAR holding the
# InstallShield setup (COMPEVAL.EXE, a self-extracting archive) whose
# data1.cab has the compiler's file groups.
build_icl4() {
    local out="$1" x="$WORK/icl"
    fetch ICLv.4.0.rar "$ICL_URL" "$ICL_SHA"
    mkdir -p "$x/setup" "$x/files" "$out/BIN" "$out/INCLUDE" "$out/LIB"
    unar -q -o "$x/rar" "$DL/ICLv.4.0.rar" >/dev/null
    7z x -y -o"$x/setup" "$x/rar/ICL4.INS/COMPEVAL.EXE" >/dev/null
    unshield -d "$x/files" x "$x/setup/data1.cab" >/dev/null
    local f="$x/files"
    cp "$f"/Compiler_Bin_Files/* "$f"/Compiler_Bin_Files_\(shared\)/* \
       "$f"/Shared_DLLs/Msvcrt.dll "$out/BIN/"
    cp "$f"/Compiler_Include_files/* "$out/INCLUDE/"
    cp "$f"/Compiler_Lib_files_\(non-shared\)/* "$f"/Compiler_Lib_files_\(shared\)/* "$out/LIB/"
    # The evaluation's licence check is one function; the archive's own
    # $ICL.COM names the byte that turns it into an immediate return
    # (offset 0xA8D0, push ebp -> ret). The original is kept beside it.
    local icl="$out/BIN/icl.exe"
    [ "$(stat -c %s "$icl")" = 151041 ] || die "icl.exe is not the expected 151,041 bytes"
    [ "$(od -An -tx1 -j $((0xA8D0)) -N1 "$icl" | tr -d ' ')" = 55 ] \
        || die "icl.exe: unexpected byte at 0xA8D0"
    cp "$icl" "$icl.orig"
    printf '\xc3' | dd of="$icl" bs=1 seek=$((0xA8D0)) conv=notrunc status=none
    chmod -R u+w "$out"
    rm -rf "$x"
}

# msi_tree MSI CAB PREFIX OUT: unpack what a Windows Installer package installs
# below PREFIX (a path from its TARGETDIR, matched without regard to case)
# into OUT, upper-casing the first directory below PREFIX (Bin -> BIN) to
# give icl-4.0's BIN/INCLUDE/LIB layout. msi.py reads the package's tables:
# Wine's msiexec cannot do an administrative install (msiexec /a).
msi_tree() {
    local msi="$1" cab="$2" prefix="${3,,}/" out="$4" x="$WORK/msi"
    local key path head rest top dst
    rm -rf "$x"
    mkdir -p "$x/streams" "$x/cab"
    7z x -y -o"$x/streams" "$msi" >/dev/null
    cabextract -q -d "$x/cab" "$cab"
    python3 -I "$TC/msi.py" "$x/streams" >"$x/files"
    while IFS=$'\t' read -r key _ path; do
        head="${path:0:${#prefix}}"
        [ "${head,,}" = "$prefix" ] || continue
        rest="${path:${#prefix}}"
        case "$rest" in */*) ;; *) continue ;; esac
        top="${rest%%/*}"
        dst="$out/${top^^}/${rest#*/}"
        mkdir -p "$(dirname "$dst")"
        cp "$x/cab/$key" "$dst"
    done <"$x/files"
    rm -rf "$x"
}

# Intel C++ 6.0 (build 020321Z): the IA32 package of the 6.0.078 CD. Its
# FLEXlm licence check is one call in icl.exe; the release's own patcher
# (Crack/crk-ic60078.exe, PatchFX) replaces it at file offset 0x4063 with
# nop;nop;nop;xor eax,eax -- "licence obtained". The original is kept beside it.
build_icl6() {
    local out="$1" x="$WORK/icl6" d
    fetch icl-6.0.078.zip "$ICL6_URL" "$ICL6_SHA"
    mkdir -p "$x"
    bsdtar -xf "$DL/icl-6.0.078.zip" -C "$x" '6.0.078/x86/*'
    d="$x/6.0.078/x86"
    msi_tree "$d/Intel(R) C++ Compiler 6.0.msi" "$d/Data.Cab" Intel/Compiler60/IA32 "$out"
    local icl="$out/BIN/icl.exe"
    [ "$(stat -c %s "$icl")" = 688128 ] || die "icl.exe is not the expected 688,128 bytes"
    [ "$(od -An -tx1 -j $((0x4063)) -N5 "$icl" | tr -d ' ')" = e8889c0000 ] \
        || die "icl.exe: unexpected bytes at 0x4063"
    cp "$icl" "$icl.orig"
    printf '\x90\x90\x90\x33\xc0' | dd of="$icl" bs=1 seek=$((0x4063)) conv=notrunc status=none
    chmod -R u+w "$out"
    rm -rf "$x"
}

# Intel C++ 8.0 (build 20040211Z, package W_CC_PC_8.0.046): the IA32 package
# inside the self-extracting W_CC_PC_8.0.046.exe. FLEXlm finds a licence file
# in the compiler's own BIN/, so the release's intel.lic goes there.
build_icl8() {
    local out="$1" x="$WORK/icl8" d
    fetch icl-8.0.046.zip "$ICL8_URL" "$ICL8_SHA"
    mkdir -p "$x/sfx"
    bsdtar -xf "$DL/icl-8.0.046.zip" -C "$x" 8.0.046/W_CC_PC_8.0.046.exe 8.0.046/intel.lic
    7z x -y -o"$x/sfx" "$x/8.0.046/W_CC_PC_8.0.046.exe" >/dev/null
    d="$x/sfx/IA32"
    msi_tree "$d/Intel(R) C++ Compiler 8.0.msi" "$d/Data1.cab" Intel/CPP/Compiler80/Ia32 "$out"
    cp "$x/8.0.046/intel.lic" "$out/BIN/"
    chmod -R u+w "$out"
    rm -rf "$x"
}

# Intel C++ 9.0 (build 20050809Z): the IA32 compiler package of 9.0.022, with
# the release's intel_TBE.lic in BIN/ as for 8.0.
build_icl9() {
    local out="$1" x="$WORK/icl9" d
    fetch icl-9.0.022.zip "$ICL9_URL" "$ICL9_SHA"
    mkdir -p "$x"
    bsdtar -xf "$DL/icl-9.0.022.zip" -C "$x" '9.0.022/IA32/Compiler/IA32/*' 9.0.022/IA32/Crack/intel_TBE.lic
    d="$x/9.0.022/IA32/Compiler/IA32"
    msi_tree "$d/Intel(R) C++ Compiler 9.0.msi" "$d/Data1.cab" Intel/Compiler/C++/9.0/IA32 "$out"
    cp "$x/9.0.022/IA32/Crack/intel_TBE.lic" "$out/BIN/"
    chmod -R u+w "$out"
    rm -rf "$x"
}

build() {
    local name="$1" dest="$TC/$1" tmp="$WORK/out-$1" got
    if [ -e "$dest" ]; then
        got=$(tree_sha "$dest")
        if [ "$got" = "${TREE_SHA[$name]}" ]; then
            echo "== $name: present and verified"
            return
        fi
        [ "$FORCE" = 1 ] || die "$name exists but does not match (rerun with --force to rebuild it)"
    fi
    echo "== $name"
    rm -rf "$tmp"
    case "$name" in
        msvc-6.00-9782) build_9782 "$tmp" ;;
        msvc-6.00-8168) build_8168 "$tmp" ;;
        msvc-6.00-8447) build_8447 "$tmp" ;;
        icl-4.0)        build_icl4 "$tmp" ;;
        icl-6.0.078)    build_icl6 "$tmp" ;;
        icl-8.0.046)    build_icl8 "$tmp" ;;
        icl-9.0.022)    build_icl9 "$tmp" ;;
    esac
    got=$(tree_sha "$tmp")
    [ "$got" = "${TREE_SHA[$name]}" ] \
        || die "$name: the assembled tree does not match (digest $got); left in ${tmp#$TC/}"
    rm -rf "$dest"
    mv "$tmp" "$dest"
    echo "   verified $name ($(du -sh "$dest" | cut -f1))"
}

targets=()
for a in "$@"; do
    case "$a" in
        --force) FORCE=1 ;;
        -h|--help) sed -n '2,16p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
        msvc-6.00-9782|msvc-6.00-8168|msvc-6.00-8447|icl-4.0|icl-6.0.078|icl-8.0.046|icl-9.0.022)
            targets+=("$a") ;;
        *) die "unknown argument: $a (try --help)" ;;
    esac
done
[ ${#targets[@]} -gt 0 ] || targets=("${ALL[@]}")

for tool in curl sha256sum bsdtar 7z cabextract unar unshield python3; do
    command -v "$tool" >/dev/null || die "$tool is required (make toolchain runs this in the build container, which has it)"
done
mkdir -p "$WORK"
for t in "${targets[@]}"; do build "$t"; done
rmdir "$WORK" 2>/dev/null || true
echo "== toolchain ready"
