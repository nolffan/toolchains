# toolchain/ -- the compilers (not in the repository)

The build runs the original 2000-era Windows compilers under Wine, inside
the build container. They are not redistributable, so this directory is
gitignored except for this file, `fetch.sh` and `msi.py`, which assemble it
from public copies of the original media:

```sh
make toolchain                          # every tree, in the build container
make shell  # then: bash toolchain/fetch.sh icl-4.0      (just one tree)
            #       bash toolchain/fetch.sh --force ...  (rebuild a tree)
```

Each download is checked against a pinned SHA-256, and each finished tree
against a digest of every file in it, so the result is byte-for-byte the
toolchain this source was matched with. A tree that is already present and
verified is left alone. The downloads (about 2.7 GB) are kept in
`toolchain/downloads/`, so a rerun fetches nothing; delete that directory
once the trees are built if you want the space back. `make` checks that the
four compiler executables exist before it starts.

| Directory | What | Used for | Size |
|---|---|---|---|
| `msvc-6.00-9782/` | Microsoft Visual C++ 6.0 SP6 command-line tools, portable layout: `VC98/` (`Bin/CL.EXE`, back end `C2.DLL` 12.00.9782, `LINK.EXE`, `LIB.EXE`, headers, CRT and MFC libraries) and `Common/MSDev98/Bin/` (`RC.EXE`) | the default compiler (game DLLs, `NOLF.exe`, `ltmsg.dll`, `sres.dll`), and the linker, librarian and resource compiler for everything | 176 MB |
| `msvc-6.00-8966/` | Visual C++ 6.0 SP5 compiler (`BIN/cl.exe` 12.00.8804, back end `c2.dll` 12.00.8966), linker and librarian, with its own `INCLUDE/`, `LIB/`, `MFC/` | NOLF2's game DLLs, launcher and dedicated server (their Rich headers name C++ build 8966) | 132 MB |
| `msvc-6.00-8447/` | Visual C++ 6.0 SP3 compiler (`BIN/cl.exe`, back end `c2.dll` 12.00.8447) with its own `INCLUDE/`, `LIB/`, `MFC/` | `server.dll`, `lithtech.exe`, the lithshared libraries (`CL_REV=8447`) | 131 MB |
| `msvc-6.00-8168/` | Visual C++ 6.0 RTM compiler (`BIN/cl.exe`, back end 12.00.8168) with its own `INCLUDE/`, `LIB/`, `MFC/` | headers and libraries for the Intel compiler (`d3d.ren`) | 131 MB |
| `dxsdk-8.1/` | Microsoft DirectX 8.1 SDK (October 2001): `include/`, `lib/` and `DXReadme.txt` | NOLF2's launcher (`d3d8.h`, `d3d8.lib`) and the DirectInput 8 headers of the game DLLs | 17 MB |
| `icl-4.0/` | Intel C/C++ Compiler 4.0 for Windows (build 99100): `BIN/icl.exe` and its companions, `INCLUDE/`, `LIB/` | `d3d.ren` | 5.4 MB |
| `icl-4.5/` | Intel C/C++ Compiler 4.5 (build 00015), same layout | candidates for testing, not used by the build | 6.4 MB |
| `icl-5.0.1/` | Intel C++ Compiler 5.0.1 for 32-bit applications (build 010525Z), same layout | candidates for testing, not used by the build | 14 MB |
| `icl-6.0.078/` | Intel C++ Compiler 6.0 for 32-bit applications (build 020321Z), same layout | candidates for testing, not used by the build | 26 MB |
| `icl-8.0.046/` | Intel C++ Compiler 8.0 (build 20040211Z), same layout | candidates for testing, not used by the build | 29 MB |
| `icl-9.0.022/` | Intel C++ Compiler 9.0 (build 20050809Z), same layout | candidates for testing, not used by the build | 37 MB |
| `directmusic-5.3.1.904/` | Microsoft DirectMusic from DirectX 9.0c: `dmband`, `dmcompos`, `dmime`, `dmloader`, `dmscript`, `dmstyle`, `dmsynth`, `dmusic`, `dswave`.dll, with `SHA256SUMS`. File versions 5.3.1.904 (`dmime`, `dmusic`) and 5.3.0.900 (the rest); the directory is named after the newest | not a compiler: the modern build installs them in the game directory, renamed `ms_<name>.dll`, so the music plays under Wine and Proton without winetricks (nolfsrc `src/modern/directmusic/README.md`) | 0.7 MB |

About 710 MB in all.

Which revision built which retail binary, and the evidence for each, is in
[`COMPILERS.md`](COMPILERS.md).

`build/env.sh` is the one place these paths are spelled; it fails with a
clear message if `msvc-6.00-9782` is missing, and `run_icl` does the same for
`icl-4.0`. The revisions are not interchangeable: each binary is compiled
with the revision its original was built with, and a different one produces
different (though working) code.

## Where each tree comes from

| Tree | Source |
|---|---|
| `msvc-6.00-8168` | `VC98/{BIN,INCLUDE,LIB,MFC/INCLUDE,MFC/LIB}` and `COMMON/MSDEV98/BIN/MSPDB60.DLL` from Visual Studio 6.0 Enterprise, Disc 1 ([archive.org](https://archive.org/details/visualstudiov60enterpriseedition_199807)); names lower-cased, and the 17 `INCLUDE/` files the disc keeps under 8.3 names (`xception`, `algrithm`, `evntcpts.h`, ...) given the long names VC6 setup installs them as (`exception`, `algorithm`, `eventcpts.h`, ...). |
| `msvc-6.00-8447` | The 8168 tree with Service Pack 3's English `vc98/` files laid over it ([archive.org](https://archive.org/details/msvs6sp3)). The pressed SP3 disc lacks the new back end: it comes from the Internet/Core edition of SP3 on the August 1999 TechNet disc ([archive.org](https://archive.org/details/ms-technet-tnsb9908)), whose `msvcep.dll` is what SP3 setup installs as `c2.dll`. |
| `msvc-6.00-8966` | The 8447 tree (copied when it is already here and verified, built otherwise) with Visual Studio 6.0 Service Pack 5's `vc98/` files laid over it, from the cumulative SP5 package ([archive.org](https://archive.org/details/vs6sp5)): `VS6sp51.cab` and the cabinets it continues into. Like the TechNet SP3, the package carries its new back end beside the cabinets as `msvcep.dll`, installed as `c2.dll`. Its compiler, linker, CRT and MFC files match the hashes [second-impressions/msvc-compilers](https://github.com/second-impressions/msvc-compilers) checks its 8966 image against. |
| `dxsdk-8.1` | `DXSDK/include`, `DXSDK/lib` and `DXSDK/DXReadme.txt` from the DirectX 8.1 SDK's full download, `dx81sdk_full.exe` ([archive.org](https://archive.org/details/dx81sdk_full)), a self-extracting zip; names as shipped. |
| `msvc-6.00-9782` | The portable VC6 SP6 tree at [github.com/itsmattkc/MSVC600](https://github.com/itsmattkc/MSVC600), pinned to commit `001c4baf`. |
| `icl-4.0` | Intel's evaluation release ([archive.org](https://archive.org/details/intel-c-compilers)): the RAR holds an InstallShield setup whose `data1.cab` has the compiler's file groups (`Compiler_Bin_Files`, `Compiler_Include_files`, `Compiler_Lib_files_*`, and `Msvcrt.dll`). The evaluation's licence check is disabled by one byte, as the archive's own `$ICL.COM` describes: `icl.exe` offset `0xA8D0`, `0x55` -> `0xC3`. `icl.exe.orig` is the unmodified file. It runs against `msvc-6.00-8168`'s headers and libraries. |
| `icl-4.5` | The evaluation installer `c45eval.exe` from the "Программисту 2001" compilation CD, disc 2 ([archive.org](https://archive.org/details/programmer-2001-disc-2)), fetched alone from inside the ISO. It unpacks like 4.0's (`compiler/icc/data1.cab`). The 30-day trial is one call in `icl.exe`'s `main` (offset `0x205A`), which also builds the evaluation watermark that `mcpcom` would embed in every object (`-mP2OPT_embed_string=`); it becomes `mov al,1` (`e8 d1 78 00 00` -> `b0 01 90 90 90`), so neither happens. The patch on the CD (`crack.exe`) is not used: it jumps over the argument parser too, and its compiler sees no files. `icl.exe.orig` is the unmodified file. |
| `icl-5.0.1` | The IA-32 compiler cabinet (`compiler/icl/data1.cab`) of the 5.0.1 release from the "C++ Последние версии" compilation CD ([archive.org](https://archive.org/details/latest-versions-of-c)), fetched alone from inside the ISO and unpacked like 4.0's, with the release's licence file (`WINDOW~1.LIC`) in `BIN/` as `intel.lic`; `icl.exe` is unmodified. 5.0.1 is the free update that replaces 5.0 when installed; 5.0 itself is still wanted. |
| `icl-6.0.078` | The x86 package of the 6.0.078 release ([archive.org](https://archive.org/details/intel-c-compilers)): `msi.py` reads the package's tables to place each file from `Data.Cab` where setup would install it, and `Intel/Compiler60/IA32/{Bin,Include,Lib}` become `BIN/INCLUDE/LIB`. The FLEXlm licence check is one call in `icl.exe`, which the release's own patcher (`Crack/crk-ic60078.exe`) replaces: offset `0x4063`, `e8 88 9c 00 00` -> `90 90 90 33 c0`. `icl.exe.orig` is the unmodified file. |
| `icl-8.0.046` | The IA32 package inside `W_CC_PC_8.0.046.exe` of the 8.0.046 release ([archive.org](https://archive.org/details/intel-c-compilers)), unpacked the same way from `Intel/CPP/Compiler80/Ia32`. FLEXlm reads licence files from the compiler's own `BIN/`, so the release's `intel.lic` is there; `icl.exe` is unmodified. |
| `icl-9.0.022` | The IA32 compiler package of the 9.0.022 release ([archive.org](https://archive.org/details/intel-c-compilers)), unpacked the same way from `Intel/Compiler/C++/9.0/IA32`, with the release's `Crack/intel_TBE.lic` in `BIN/`; `icl.exe` is unmodified. |
| `directmusic-5.3.1.904` | `dxnt.cab` inside Microsoft's February 2010 DirectX End-User Runtime redistributable, `directx_feb2010_redist.exe` (SHA-256 `f6d191e89a963d7cca34f169d30f49eab99c1ed3bb92da73ec43617caaa1e93f`, the file winetricks' DirectMusic verbs use; [download.microsoft.com](https://download.microsoft.com/download/E/E/1/EE17FF74-6C45-4575-9CF4-7FC2597ACD18/directx_feb2010_redist.exe), [archive.org](https://web.archive.org/web/20100205000000id_/https://download.microsoft.com/download/E/E/1/EE17FF74-6C45-4575-9CF4-7FC2597ACD18/directx_feb2010_redist.exe)): `cabextract -F dxnt.cab` on the redistributable, then `cabextract -L -F <name>.dll dxnt.cab`. Unmodified. |

## Wanted: Intel C++ 5.0

The original Intel C++ 5.0 release (before the 5.0.1 update held here) is
missing from this toolchain, as are any other 4.5 builds than 00015. NOLF
and NOLF2 may have been built with one of them, and that cannot be ruled out
until they have been tried: byte-matching needs the exact compiler.

If you have one -- original media, an evaluation release, or an installed
copy -- please open an issue on this repository. Matching the
binaries needs the compiler itself (`icl.exe` and its companions), its
headers and its libraries.

## Thanks

The way the two versioned VC6 trees are rebuilt from the original
Microsoft media -- which discs, which files, and where the SP3 and SP5 back ends hide
-- comes from
[second-impressions/msvc-compilers](https://github.com/second-impressions/msvc-compilers).
