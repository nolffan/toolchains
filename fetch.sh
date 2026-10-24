#!/usr/bin/env bash
# Assemble toolchain/ from public copies of the original compiler media.
#
#   bash toolchain/fetch.sh [--force] [msvc-5.00-7303] [msvc-7.10-3077] [msvc-6.00-9782] [msvc-6.00-8168] [msvc-6.00-8447]
#                           [msvc-6.00-8966] [msvc-6.00-9044] [dxsdk-8.1] [icl-4.0] [icl-4.5] [icl-5.0.1] [icl-6.0.078]
#                           [icl-8.0.046] [icl-9.0.022] [directmusic-5.3.1.904]
#
# `make toolchain` runs this in the build container, which has every tool it
# needs (curl, bsdtar, 7z, cabextract, unar, unshield, python3). With no names
# it builds every tree. A tree that is already present and matches its
# digest is left alone; one that does not match is an error unless --force.
#
# Downloads (about 3.5 GB) are verified by SHA-256 and kept in
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
VS6SP5_URL='https://archive.org/download/vs6sp5/vs6sp5.exe'
VS6SP5_SHA=10a834041223ad21181c0e87c0a90930d976498556af2e8f959a044101e6a604
# Visual C++ 5.0 Enterprise Edition CD 1 (1997) and Visual Studio 97 Service
# Pack 3 (December 1997), for LithRez 1.00 (1998, link 5.10.7303).
VC50D1_URL='https://archive.org/download/microsoft-visual-cpp-5.0-enterprise/microsoft-visual-c%2B%2B-5.0-enterprise-edition-cd1.iso'
VC50D1_SHA=b570a6733f4bd50af4b01594c063294d0808ac2708d66daa34ce176c673c981a
VS97SP3_URL='https://archive.org/download/vs97sp3/vs97sp3.zip'
VS97SP3_SHA=bd47cf619297b3d4b27b5a5fe60d9c0df09b1519e0e7e2c8ea8a09cf98cf882c
VCPP5_URL='https://archive.org/download/vcpp5/vcpp5.exe'
VCPP5_SHA=96817df1bb0cb58e5b1d0fbcc5b993a63548182add1fbff66365401203ecfb6c
# Visual Studio .NET 2003 Professional (May 2003), the two discs as archive.org
# holds them: Disc 1 a 7z of a raw (2448-byte sector) MDF image, Disc 2 a plain
# ISO from another dump.
VS71D1_URL='https://archive.org/download/X09-46364/2003-05_X09-46364_X09-17449_VSPROD1.7z'
VS71D1_SHA=ef23e22c458e509e5427851f06adecdb7472ff4369de573388326083b87aa6e3
VS71D2_URL='https://archive.org/download/microsoft-visual-studio-.-net-2003-professional-disc-2/Microsoft%20Visual%20Studio%20.NET%202003%20Professional%20-%20Disc%202.iso'
VS71D2_SHA=75a818e81ea1609da61f2916a74548e0448fd85787245b67f3acc5805461ae17
DXSDK81_URL='https://archive.org/download/dx81sdk_full/dx81sdk_full.exe'
DXSDK81_SHA=73f6791e0ae7f8a1d74f71d8ebe517a79c0cbf03fd344424696fd7a3816d2d02
# The February 2010 DirectX End-User Runtime redistributable (the one
# winetricks' DirectMusic verbs use), from the Wayback Machine's copy of
# Microsoft's download.
DXFEB2010_URL='https://web.archive.org/web/20100205000000id_/https://download.microsoft.com/download/E/E/1/EE17FF74-6C45-4575-9CF4-7FC2597ACD18/directx_feb2010_redist.exe'
DXFEB2010_SHA=f6d191e89a963d7cca34f169d30f49eab99c1ed3bb92da73ec43617caaa1e93f
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
# Intel C/C++ 4.5 and 5.0.1 come from two Russian compilation CDs; archive.org
# serves single files out of their ISOs, so only the compiler is downloaded.
ICL45_DIR='https://archive.org/download/programmer-2001-disc-2/%D0%9F%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%81%D1%82%D1%83%202001%20%D0%B4%D0%B8%D1%81%D0%BA%202.iso/C/Intel%20C%20Plus%20Plus%20Compiler%20v4.5'
ICL45_URL="$ICL45_DIR/c45eval.exe"
ICL45_SHA=0dcfa923f636507043353f1c30df39050978f58b9be705857a3e263653e14a45
ICL5_DIR='https://archive.org/download/latest-versions-of-c/C%2B%2B%20%D0%9F%D0%BE%D1%81%D0%BB%D0%B5%D0%B4%D0%BD%D0%B8%D0%B5%20%D0%B2%D0%B5%D1%80%D1%81%D0%B8%D0%B8.iso/Cpp/INTEL%20C%2B%2B%20COMPILER%20v5.0115'
ICL5_CAB_URL="$ICL5_DIR/compiler/icl/data1.cab"
ICL5_CAB_SHA=7164806eb89e115e96872b6167ae62e43ee13b00b4aa37e55608ac5a21969d9c
ICL5_HDR_URL="$ICL5_DIR/compiler/icl/data1.hdr"
ICL5_HDR_SHA=1a8e0f5cce8694ef209296cb55fc5decd2a0bff07548513718fc06cc4d6d81bb
ICL5_LIC_URL="$ICL5_DIR/WINDOW~1.LIC"
ICL5_LIC_SHA=c7af001728c3e53c6e945120fb80ba347d9cd78a697a2a2776419f45bd7d09ad
# A portable VC6 SP6 tree, pinned to one commit. GitHub does not promise that
# its generated tarballs are byte-stable, so the archive itself is not
# pinned; the extracted tree is, by its digest below.
MSVC600_COMMIT=001c4bafdcf2ef4b474d693acccd35a91e848f40
MSVC600_URL="https://codeload.github.com/itsmattkc/MSVC600/tar.gz/$MSVC600_COMMIT"

# --- the finished trees: SHA-256 over `sha256sum` of every file, sorted -----
declare -A TREE_SHA=(
    [msvc-5.00-7303]=181bee181a6da9391e3ed02e466db83b038db242642ef53f46e094bc7f340567
    [msvc-7.10-3077]=566e648d62eca82c7a035a2eb3cdcc8467480a02e4d905784dfb55eda5d7ce6f
    [msvc-6.00-9782]=78ff2ccc2c2c5f9e38cb0155811672b0a4de56f1e673ef779442ce4e89d93edb
    [msvc-6.00-8168]=17b81cd04ffa07047450a2f6c706f51f76b1610f30835e12e25d0b742b2c986a
    [msvc-6.00-8447]=a395f322bc376675f232fdf54d127b38f40383571715e968ecf7343bebf2890e
    [msvc-6.00-8966]=43aa462a12e7dfc72055ee8253a11a995d8c092f61a2ccc2985bb1150d39a3ca
    [msvc-6.00-9044]=41ba040bfa329c9d33d780b38cf99b2b976e05391961e702ff879c247ec59793
    [dxsdk-8.1]=f086a340ad92e84b0e28325088c47247ae4048467e5cee6208cb396028c17df8
    [icl-4.0]=0355308ba40347b1ec7d75ffc46736735b5230a25c27aa9e5f4f6e399a6bb8f7
    [icl-4.5]=c7e45803afa919a8b256e6050c92cb1021e98c11b59e416e72f05a25126fdbab
    [icl-5.0.1]=2f050e98b9985a39652b167a6b7fa853cc9dddc7b048775e7778af24fc46650f
    [icl-6.0.078]=9cbdd9f09e77bf65bf4f64246df57147b1f83dbc2b7bdae546a1a8af24a2633c
    [icl-8.0.046]=733c6bbded14217994057c2eb50d5e3832c43f5466f2da6b4b0976f98929db4d
    [icl-9.0.022]=161d54d0cec4b79dbc0022763f6bc00df4d2bf314679aa61bef78c2d130a991c
    [directmusic-5.3.1.904]=f9ebf333a683b7c9e7df7b94ab7351a38a8f5e1eab72468899d6be199623a1be
)
ALL=(msvc-5.00-7303 msvc-7.10-3077 msvc-6.00-9782 msvc-6.00-8168 msvc-6.00-8447 msvc-6.00-8966 msvc-6.00-9044 dxsdk-8.1 icl-4.0 icl-4.5 icl-5.0.1 icl-6.0.078 icl-8.0.046 icl-9.0.022 directmusic-5.3.1.904)

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

# Visual C++ 5.0 SP3 (cl/c2 11.00.7303, link 5.10.7303): CD 1's DevStudio/VC
# command-line tools, headers and libraries, with the PDB writer from
# SharedIDE, Service Pack 3's English compiler and linker (VC/BIN) and its
# shared msdis100.dll and mspdb50.dll laid over them, and msvcp50.dll (which
# SP3's msdis100.dll needs) from VC/REDIST. SP3's cabinet set begins inside
# vssp3_1.exe.
build_500() {
    local out="$1" x="$WORK/vc5" f
    fetch vc50-cd1.iso "$VC50D1_URL" "$VC50D1_SHA"
    fetch vs97sp3.zip "$VS97SP3_URL" "$VS97SP3_SHA"
    mkdir -p "$x/sp3" "$out"
    bsdtar -xf "$DL/vc50-cd1.iso" -C "$x" DEVSTUDIO/VC/BIN DEVSTUDIO/VC/INCLUDE DEVSTUDIO/VC/LIB \
        DEVSTUDIO/SHAREDIDE/BIN/MSPDB50.DLL DEVSTUDIO/VC/REDIST/MSVCP50.DLL
    chmod -R u+w "$x"
    for f in BIN INCLUDE LIB; do mv "$x/DEVSTUDIO/VC/$f" "$out/$f"; done
    cp "$x/DEVSTUDIO/SHAREDIDE/BIN/MSPDB50.DLL" "$x/DEVSTUDIO/VC/REDIST/MSVCP50.DLL" "$out/BIN/"
    bsdtar -xf "$DL/vs97sp3.zip" -C "$x/sp3"
    python3 - "$x/sp3/vssp3_1.exe" "$x/sp3/VSSP3_1.cab" <<'PY'
import struct, sys
d = open(sys.argv[1], 'rb').read()
i = d.find(b'MSCF')
while i >= 0:
    n = struct.unpack_from('<I', d, i + 8)[0]
    if 0 < n <= len(d) - i:
        open(sys.argv[2], 'wb').write(d[i:i + n]); break
    i = d.find(b'MSCF', i + 1)
PY
    for f in 2 3 4 5 6 7 8 9; do mv "$x/sp3/vssp3_$f.cab" "$x/sp3/VSSP3_$f.cab"; done
    cabextract -q -d "$x/sp3/x" "$x/sp3/VSSP3_1.cab"
    for f in c1.dll c1xx.dll c2.exe cvpack.exe link.exe; do
        cp "$x/sp3/x/VS97_SP3/enu/vc/bin/$f" "$out/BIN/$(echo $f | tr a-z A-Z)"
    done
    for f in msdis100.dll mspdb50.dll; do
        cp "$x/sp3/x/VS97_SP3/all/shared/bin/$f" "$out/BIN/$(echo $f | tr a-z A-Z)"
    done
    chmod -R u+w "$out"
    lowercase "$out/BIN" "$out/INCLUDE" "$out/LIB"
    rm -rf "$x"
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
# VC6 SP5 (front end 12.00.8804, back end c2 12.00.8966): the SP3 tree with
# Service Pack 5's VC98 files laid over it. SP5 is cumulative and carries its
# new back end the way the TechNet SP3 does, as msvcep.dll beside the
# cabinets, which setup installs as VC98/BIN/C2.DLL. A verified SP3 tree
# already here is copied rather than built again.
build_8966() {
    local out="$1" x="$WORK/sp5" d
    if [ -d "$TC/msvc-6.00-8447" ] && [ "$(tree_sha "$TC/msvc-6.00-8447")" = "${TREE_SHA[msvc-6.00-8447]}" ]; then
        cp -a "$TC/msvc-6.00-8447" "$out"
    else
        build_8447 "$out"
    fi
    fetch VS6SP5.exe "$VS6SP5_URL" "$VS6SP5_SHA"
    mkdir -p "$x/pkg" "$x/files"
    cabextract -q -d "$x/pkg" "$DL/VS6SP5.exe"
    [ -f "$x/pkg/msvcep.dll" ] || die "the SP5 package has no msvcep.dll"
    (cd "$x/pkg" && cabextract -q -d "$x/files" VS6sp51.cab)
    chmod -R u+w "$x"
    lowercase "$x/files"
    [ -d "$x/files/vc98/bin" ] || die "the SP5 package has no vc98/bin"
    for d in "${VC_DIRS[@]}"; do
        d=$(printf '%s' "$d" | tr '[:upper:]' '[:lower:]')
        cp -a "$x/files/vc98/$d/." "$out/${d^^}/"
    done
    long_names "$out/INCLUDE"
    cp "$x/pkg/msvcep.dll" "$out/BIN/c2.dll"
    chmod -R u+w "$out"
    rm -rf "$x"
}

# VC6 Processor Pack (back end c2 build 9044, file version 13.00.9044): the
# SP5 tree with the pack's VC98 files laid over it where its vcpp.inf puts
# them -- c2.dll and MASM 6.15 (ml.exe, h2inc.exe) in BIN/, the SSE/SSE2/3DNow!
# intrinsic headers in INCLUDE/, two of them renamed from their 8.3 names. Its
# CRT source (align.c), samples and documentation are left out. A verified
# SP5 tree already here is copied rather than built again.
build_9044() {
    local out="$1" x="$WORK/vcpp" f
    if [ -d "$TC/msvc-6.00-8966" ] && [ "$(tree_sha "$TC/msvc-6.00-8966")" = "${TREE_SHA[msvc-6.00-8966]}" ]; then
        cp -a "$TC/msvc-6.00-8966" "$out"
    else
        build_8966 "$out"
    fi
    fetch vcpp5.exe "$VCPP5_URL" "$VCPP5_SHA"
    mkdir -p "$x"
    cabextract -q -d "$x" "$DL/vcpp5.exe"
    chmod -R u+w "$x"
    for f in c2.dll ml.exe ml.err h2inc.exe h2inc.err; do
        [ -f "$x/$f" ] || die "the Processor Pack has no $f"
        cp "$x/$f" "$out/BIN/"
    done
    for f in dvec.h fpieee.h fvec.h ivec.h malloc.h mm3dnow.h mmintrin.h \
             emmint_1.h:emmintrin.h xmmint_1.h:xmmintrin.h; do
        [ -f "$x/${f%%:*}" ] || die "the Processor Pack has no ${f%%:*}"
        cp "$x/${f%%:*}" "$out/INCLUDE/${f#*:}"
    done
    chmod -R u+w "$out"
    rm -rf "$x"
}

# Visual C++ .NET 2003 (cl/c2 13.10.3077, link 7.10.3077): the command-line
# tools, headers and libraries a VS.NET 2003 install puts in Vc7/, laid out
#   bin/  include/  lib/  atlmfc/include/  atlmfc/lib/
#   PlatformSDK/include/  PlatformSDK/lib/
# with the PDB writer (mspdb71.dll, msobj71.dll) beside cl.exe, and the
# C/C++ runtime DLLs the tools run on (msvcr71.dll, msvcp71.dll, which setup
# puts in system32): with Wine's own, the C++ front end never finishes. Most of Vc7/
# lies uncompressed on the discs (Disc 2 adds the MFC DLL import libraries,
# mfc71.lib and its kin, and msobj71.dll); the Platform SDK that setup installs under
# Vc7/PlatformSDK is in merge-module cabinets stored inside vs_setup.msi,
# which msi.py maps to their install paths. Names are as installed; the
# Platform SDK's directories, which the package spells both Include and
# include, are lower-cased.
VC71_BIN=(cl.exe c1.dll c1xx.dll c2.dll link.exe lib.exe ml.exe rc.exe rcdll.dll
          cvtres.exe dumpbin.exe editbin.exe nmake.exe undname.exe bscmake.exe atlprov.dll)
iso_raw2448() {
    # A raw image of 2448-byte sectors (2352 + subchannel) -> 2048-byte ISO.
    python3 -I -c '
import sys
with open(sys.argv[1], "rb") as f, open(sys.argv[2], "wb") as o:
    while True:
        s = f.read(2448)
        if not s:
            break
        o.write(s[16:2064] if s[15] == 1 else s[24:2072])
' "$1" "$2"
}
build_7103077() {
    local out="$1" x="$WORK/vs71" vc='Program Files/Microsoft Visual Studio .NET 2003'
    local f key cab path rel top
    fetch VSPROD1.7z "$VS71D1_URL" "$VS71D1_SHA"
    fetch VSPROD2.iso "$VS71D2_URL" "$VS71D2_SHA"
    mkdir -p "$x/d1" "$x/d2" "$x/msi" "$x/cab" "$out/bin" "$out/PlatformSDK"
    7z x -y -o"$x" "$DL/VSPROD1.7z" '*/image/VSPROD1.mdf' >/dev/null
    iso_raw2448 "$x"/*/image/VSPROD1.mdf "$x/d1.iso"
    rm -rf "$x"/2003-05_*
    7z x -y -o"$x/d1" "$x/d1.iso" "$vc/Vc7/include" "$vc/Vc7/lib" "$vc/Vc7/bin" \
        "$vc/Vc7/atlmfc/include" "$vc/Vc7/atlmfc/lib" \
        "$vc/Common7/IDE/mspdb71.dll" Win/System/msvcr71.dll Win/System/msvcp71.dll \
        vs_setup.msi >/dev/null
    7z x -y -o"$x/d2" "$DL/VSPROD2.iso" "$vc/Vc7/atlmfc/lib" "$vc/Common7/IDE/msobj71.dll" >/dev/null
    for f in "${VC71_BIN[@]}"; do
        [ -f "$x/d1/$vc/Vc7/bin/$f" ] || die "Disc 1 has no Vc7/bin/$f"
        cp "$x/d1/$vc/Vc7/bin/$f" "$out/bin/"
    done
    cp "$x/d1/$vc/Common7/IDE/mspdb71.dll" "$x/d2/$vc/Common7/IDE/msobj71.dll" \
       "$x/d1/Win/System/msvcr71.dll" "$x/d1/Win/System/msvcp71.dll" "$out/bin/"
    mv "$x/d1/$vc/Vc7/include" "$x/d1/$vc/Vc7/lib" "$x/d1/$vc/Vc7/atlmfc" "$out/"
    cp -a "$x/d2/$vc/Vc7/atlmfc/lib/." "$out/atlmfc/lib/"
    7z x -y -o"$x/msi" "$x/d1/vs_setup.msi" >/dev/null
    python3 -I "$TC/msi.py" "$x/msi" >"$x/files"
    while IFS=$'\t' read -r key cab path; do
        case "${path,,}" in
            "${vc,,}/vc7/platformsdk/include/"*|"${vc,,}/vc7/platformsdk/lib/"*) ;;
            *) continue ;;
        esac
        [ -n "$cab" ] || die "PlatformSDK file $path is not in a cabinet"
        if [ ! -d "$x/cab/$cab" ]; then
            mkdir -p "$x/cab/$cab"
            cabextract -q -d "$x/cab/$cab" "$x/msi/$cab"
        fi
        rel="${path:$(( ${#vc} + 17 ))}"          # past .../Vc7/PlatformSDK/
        top="${rel%%/*}"
        rel="${top,,}/${rel#*/}"
        mkdir -p "$out/PlatformSDK/$(dirname "$rel")"
        cp "$x/cab/$cab/$key" "$out/PlatformSDK/$rel"
    done <"$x/files"
    chmod -R u+w "$out"
    rm -rf "$x"
}

# The DirectX 8.1 SDK (October 2001): its include/ and lib/ as shipped, and
# its readme. The download is a self-extracting zip whose DXSDK/ folder is
# the SDK's install tree.
build_dxsdk81() {
    local out="$1" x="$WORK/dx81"
    fetch dx81sdk_full.exe "$DXSDK81_URL" "$DXSDK81_SHA"
    mkdir -p "$x" "$out"
    7z x -y -o"$x" "$DL/dx81sdk_full.exe" \
        DXF/DXSDK/include DXF/DXSDK/lib DXF/DXSDK/DXReadme.txt >/dev/null
    mv "$x/DXF/DXSDK/include" "$x/DXF/DXSDK/lib" "$x/DXF/DXSDK/DXReadme.txt" "$out/"
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

# Intel C/C++ 4.5 (build 00015): the evaluation release, c45eval.exe, a
# self-extracting archive around an InstallShield setup laid out as 4.0's.
# The 30-day trial is one call in icl.exe's main, whose result decides
# whether to go on; it also builds the watermark that is passed to mcpcom
# as -mP2OPT_embed_string= and embedded in every object. Replacing the call
# (offset 0x205A) with mov al,1 drops both, as a licensed copy would. (The
# patch distributed with it, crack.exe, jumps over the argument parser as
# well and leaves a compiler that sees no files.)
build_icl45() {
    local out="$1" x="$WORK/icl45"
    fetch icl-4.5-c45eval.exe "$ICL45_URL" "$ICL45_SHA"
    mkdir -p "$x/setup" "$x/files" "$out/BIN" "$out/INCLUDE" "$out/LIB"
    7z x -y -o"$x/setup" "$DL/icl-4.5-c45eval.exe" >/dev/null
    unshield -d "$x/files" x "$x/setup/compiler/icc/data1.cab" >/dev/null
    local f="$x/files"
    cp "$f"/Compiler_Bin_Files/* "$f"/Compiler_Bin_Files_\(shared\)/* \
       "$f"/Shared_DLLs/Msvcrt.dll "$out/BIN/"
    cp "$f"/Compiler_Include_files/* "$out/INCLUDE/"
    cp "$f"/Compiler_Lib_files_\(shared\)/* "$out/LIB/"
    local icl="$out/BIN/icl.exe"
    [ "$(stat -c %s "$icl")" = 167936 ] || die "icl.exe is not the expected 167,936 bytes"
    [ "$(od -An -tx1 -j $((0x205A)) -N5 "$icl" | tr -d ' ')" = e8d1780000 ] \
        || die "icl.exe: unexpected bytes at 0x205A"
    cp "$icl" "$icl.orig"
    printf '\xb0\x01\x90\x90\x90' | dd of="$icl" bs=1 seek=$((0x205A)) conv=notrunc status=none
    chmod -R u+w "$out"
    rm -rf "$x"
}

# Intel C++ 5.0.1 (build 010525Z): the IA-32 compiler's InstallShield cabinet
# from the 5.0.1 release, laid out as 4.0's, with the release's licence file
# (WINDOW~1.LIC on the disc) in BIN/ as intel.lic: FLEXlm finds it there.
build_icl5() {
    local out="$1" x="$WORK/icl5"
    fetch icl-5.0.1-data1.cab "$ICL5_CAB_URL" "$ICL5_CAB_SHA"
    fetch icl-5.0.1-data1.hdr "$ICL5_HDR_URL" "$ICL5_HDR_SHA"
    fetch icl-5.0.1.lic "$ICL5_LIC_URL" "$ICL5_LIC_SHA"
    mkdir -p "$x/cab" "$x/files" "$out/BIN" "$out/INCLUDE" "$out/LIB"
    cp "$DL/icl-5.0.1-data1.cab" "$x/cab/data1.cab"
    cp "$DL/icl-5.0.1-data1.hdr" "$x/cab/data1.hdr"
    unshield -d "$x/files" x "$x/cab/data1.cab" >/dev/null
    local f="$x/files"
    cp "$f"/Compiler32_Bin_Files/* "$f"/Compiler32_Bin_Files_\(shared\)/* \
       "$f"/Shared_DLLs/Msvcrt.dll "$out/BIN/"
    cp "$f"/Compiler32_Include_files/* "$out/INCLUDE/"
    cp "$f"/Compiler32_Lib_files_\(shared\)/* "$out/LIB/"
    cp "$DL/icl-5.0.1.lic" "$out/BIN/intel.lic"
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

# Microsoft DirectMusic (file versions 5.3.1.904 and 5.3.0.900), not a
# compiler: nolfsrc's modern build installs it in the game directory so the
# music plays under Wine and Proton without winetricks. The nine DLLs as
# dxnt.cab inside the February 2010 redistributable holds them, unmodified,
# and SHA256SUMS of them, which the build checks before installing them.
DIRECTMUSIC_DLLS=(dmband.dll dmcompos.dll dmime.dll dmloader.dll dmscript.dll
                  dmstyle.dll dmsynth.dll dmusic.dll dswave.dll)
build_directmusic() {
    local out="$1" x="$WORK/dmusic" f
    fetch directx_feb2010_redist.exe "$DXFEB2010_URL" "$DXFEB2010_SHA"
    mkdir -p "$x" "$out"
    # (both cabinets carry a few bytes of padding after their last block,
    # which cabextract warns about; the tree digest checks what comes out)
    cabextract -q -d "$x" -F dxnt.cab "$DL/directx_feb2010_redist.exe" 2>/dev/null
    [ -f "$x/dxnt.cab" ] || die "the redistributable has no dxnt.cab"
    for f in "${DIRECTMUSIC_DLLS[@]}"; do
        cabextract -q -d "$out" -L -F "$f" "$x/dxnt.cab" 2>/dev/null
        [ -f "$out/$f" ] || die "dxnt.cab has no $f"
    done
    (cd "$out" && sha256sum "${DIRECTMUSIC_DLLS[@]}" >SHA256SUMS)
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
        msvc-5.00-7303) build_500 "$tmp" ;;
        msvc-7.10-3077) build_7103077 "$tmp" ;;
        msvc-6.00-9782) build_9782 "$tmp" ;;
        msvc-6.00-8168) build_8168 "$tmp" ;;
        msvc-6.00-8447) build_8447 "$tmp" ;;
        msvc-6.00-8966) build_8966 "$tmp" ;;
        msvc-6.00-9044) build_9044 "$tmp" ;;
        dxsdk-8.1)      build_dxsdk81 "$tmp" ;;
        icl-4.0)        build_icl4 "$tmp" ;;
        icl-4.5)        build_icl45 "$tmp" ;;
        icl-5.0.1)      build_icl5 "$tmp" ;;
        icl-6.0.078)    build_icl6 "$tmp" ;;
        icl-8.0.046)    build_icl8 "$tmp" ;;
        icl-9.0.022)    build_icl9 "$tmp" ;;
        directmusic-5.3.1.904) build_directmusic "$tmp" ;;
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
        -h|--help) sed -n '2,17p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
        msvc-5.00-7303|msvc-7.10-3077|msvc-6.00-9782|msvc-6.00-8168|msvc-6.00-8447|msvc-6.00-8966|msvc-6.00-9044|dxsdk-8.1|icl-4.0|icl-4.5|icl-5.0.1|icl-6.0.078|icl-8.0.046|icl-9.0.022|directmusic-5.3.1.904)
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
