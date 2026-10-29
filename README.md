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
verified is left alone. The downloads (about 3.5 GB) are kept in
`toolchain/downloads/`, so a rerun fetches nothing; delete that directory
once the trees are built if you want the space back. `make` checks that the
four compiler executables exist before it starts.

| Directory | What | Used for | Size |
|---|---|---|---|
| `msvc-7.10-3077/` | Microsoft Visual C++ .NET 2003 (7.1) command-line tools: `bin/` (`cl.exe`, back end `c2.dll` 13.10.3077, `link.exe` 7.10.3077, `lib.exe`, `ml.exe`, `rc.exe`, the PDB writer and the `msvcr71`/`msvcp71` DLLs they run on), `include/`, `lib/` (CRT), `atlmfc/` (ATL 7.1, MFC 7.1 static and DLL libraries) and `PlatformSDK/` (`include/`, `lib/`) | Contract J.A.C.K.: every Monolith binary of it (their Rich headers name 13.10.3077 throughout) | 235 MB |
| `msvc-6.00-9782/` | Microsoft Visual C++ 6.0 SP6 command-line tools, portable layout: `VC98/` (`Bin/CL.EXE`, back end `C2.DLL` 12.00.9782, `LINK.EXE`, `LIB.EXE`, headers, CRT and MFC libraries) and `Common/MSDev98/Bin/` (`RC.EXE`) | the default compiler (game DLLs, `NOLF.exe`, `sres.dll`), and the linker, librarian and resource compiler for everything but `ltmsg.dll` | 176 MB |
| `msvc-6.00-8966/` | Visual C++ 6.0 SP5 compiler (`BIN/cl.exe` 12.00.8804, back end `c2.dll` 12.00.8966), linker and librarian, with its own `INCLUDE/`, `LIB/`, `MFC/` | NOLF2's game DLLs, launcher and dedicated server (their Rich headers name C++ build 8966) | 132 MB |
| `msvc-6.00-8447/` | Visual C++ 6.0 SP3 compiler (`BIN/cl.exe`, back end `c2.dll` 12.00.8447) with its own `INCLUDE/`, `LIB/`, `MFC/` | `server.dll`, `lithtech.exe`, the lithshared libraries (`CL_REV=8447`); the C runtime (`libcmt.lib`) the engine images link | 131 MB |
| `msvc-6.00-8168/` | Visual C++ 6.0 RTM compiler (`BIN/cl.exe`, back end 12.00.8168) with its own `INCLUDE/`, `LIB/`, `MFC/` | headers and libraries for the Intel compiler (`d3d.ren`); all of `ltmsg.dll` (compiler, `libcmt.lib`, `link.exe` with its `cvtres.exe` 5.00.1720); the old iostream library (`libcimt.lib`) the game DLLs and `NolfServ.exe` link | 131 MB |
| `msvc-6.00-9044/` | Visual C++ 6.0 SP5 with the Processor Pack: the `msvc-6.00-8966` tree with the pack's back end (`BIN/c2.dll` 13.00.9044, which emits build 9044), MASM 6.15 (`BIN/ml.exe`, `h2inc.exe`) and the SSE/SSE2/3DNow! intrinsic headers (`xmmintrin.h`, `emmintrin.h`, `mm3dnow.h`, ...) | candidates for testing, not used by the build | 133 MB |
| `dxsdk-8.1/` | Microsoft DirectX 8.1 SDK (October 2001): `include/`, `lib/` and `DXReadme.txt` | NOLF2's launcher (`d3d8.h`, `d3d8.lib`) and the DirectInput 8 headers of the game DLLs | 17 MB |
| `maxsdk-3.0/` | 3ds Max 3 SDK: `include/`, `lib/` (`MAX_RELEASE` 3000, API 7) | talon: the LithTech 3ds Max plug-ins' `*30` builds (AvP2 Tools Update 2) | 6.7 MB |
| `maxsdk-4.0/` | 3ds Max 4 SDK, from the 4.2 SDK: `include/`, `lib/` (`MAX_RELEASE` 4000, API 8) | talon: the 3ds Max plug-ins' `*40` builds | 8.0 MB |
| `maya-3.0-devkit/` | Maya 3.0 developer kit: `include/`, `lib/` (`MAYA_API_VERSION` 300) | talon: the LithTech Maya plug-ins' `*30` builds | 7.3 MB |
| `maya-4.0-devkit/` | Maya 4.0 developer kit: `include/`, `lib/` (`MAYA_API_VERSION` 400) | talon: the Maya plug-ins' `*40` builds | 7.5 MB |
| `icl-4.0/` | Intel C/C++ Compiler 4.0 for Windows (build 99100): `BIN/icl.exe` and its companions, `INCLUDE/`, `LIB/` | `d3d.ren` | 5.4 MB |
| `icl-4.5/` | Intel C/C++ Compiler 4.5 (build 00015), same layout | candidates for testing, not used by the build | 6.4 MB |
| `icl-5.0.1/` | Intel C++ Compiler 5.0.1 for 32-bit applications (build 010525Z), same layout | candidates for testing, not used by the build | 14 MB |
| `icl-6.0.078/` | Intel C++ Compiler 6.0 for 32-bit applications (build 020321Z), same layout | candidates for testing, not used by the build | 26 MB |
| `icl-8.0.046/` | Intel C++ Compiler 8.0 (build 20040211Z), same layout | candidates for testing, not used by the build | 29 MB |
| `icl-9.0.022/` | Intel C++ Compiler 9.0 (build 20050809Z), same layout | candidates for testing, not used by the build | 37 MB |
| `directmusic-5.3.1.904/` | Microsoft DirectMusic from DirectX 9.0c: `dmband`, `dmcompos`, `dmime`, `dmloader`, `dmscript`, `dmstyle`, `dmsynth`, `dmusic`, `dswave`.dll, with `SHA256SUMS`. File versions 5.3.1.904 (`dmime`, `dmusic`) and 5.3.0.900 (the rest); the directory is named after the newest | not a compiler: the modern build installs them in the game directory, renamed `ms_<name>.dll`, so the music plays under Wine and Proton without winetricks (nolfsrc `src/modern/directmusic/README.md`) | 0.7 MB |

About 1,080 MB in all.

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
| `msvc-7.10-3077` | Visual Studio .NET 2003 Professional, May 2003: Disc 1 ([archive.org](https://archive.org/details/X09-46364), a 7z of a raw MDF image; `fetch.sh` reads its 2,448-byte sectors as a plain ISO) and Disc 2 ([archive.org](https://archive.org/details/microsoft-visual-studio-.-net-2003-professional-disc-2), an ISO). `Vc7/{bin,include,lib,atlmfc}` lie uncompressed on the discs (Disc 2 adds `mfc71.lib` and the other MFC DLL import libraries, and `msobj71.dll`); `mspdb71.dll` is `Common7/IDE`'s, `msvcr71.dll` and `msvcp71.dll` `Win/System`'s. The Platform SDK setup installs under `Vc7/PlatformSDK` comes from the merge-module cabinets stored in `vs_setup.msi`, placed by `msi.py`; its `Include`/`include` and `Lib`/`lib` directories are lower-cased. Only the tools the build needs are kept from `bin/`. Under Wine, the C++ front end needs the native runtime DLLs beside it: with Wine's builtin `msvcp71` it never finishes. |
| `msvc-6.00-8168` | `VC98/{BIN,INCLUDE,LIB,MFC/INCLUDE,MFC/LIB}` and `COMMON/MSDEV98/BIN/MSPDB60.DLL` from Visual Studio 6.0 Enterprise, Disc 1 ([archive.org](https://archive.org/details/visualstudiov60enterpriseedition_199807)); names lower-cased, and the 17 `INCLUDE/` files the disc keeps under 8.3 names (`xception`, `algrithm`, `evntcpts.h`, ...) given the long names VC6 setup installs them as (`exception`, `algorithm`, `eventcpts.h`, ...). |
| `msvc-6.00-8447` | The 8168 tree with Service Pack 3's English `vc98/` files laid over it ([archive.org](https://archive.org/details/msvs6sp3)). The pressed SP3 disc lacks the new back end: it comes from the Internet/Core edition of SP3 on the August 1999 TechNet disc ([archive.org](https://archive.org/details/ms-technet-tnsb9908)), whose `msvcep.dll` is what SP3 setup installs as `c2.dll`. |
| `msvc-6.00-8966` | The 8447 tree (copied when it is already here and verified, built otherwise) with Visual Studio 6.0 Service Pack 5's `vc98/` files laid over it, from the cumulative SP5 package ([archive.org](https://archive.org/details/vs6sp5)): `VS6sp51.cab` and the cabinets it continues into. Like the TechNet SP3, the package carries its new back end beside the cabinets as `msvcep.dll`, installed as `c2.dll`. Its compiler, linker, CRT and MFC files match the hashes [second-impressions/msvc-compilers](https://github.com/second-impressions/msvc-compilers) checks its 8966 image against. |
| `dxsdk-8.1` | `DXSDK/include`, `DXSDK/lib` and `DXSDK/DXReadme.txt` from the DirectX 8.1 SDK's full download, `dx81sdk_full.exe` ([archive.org](https://archive.org/details/dx81sdk_full)), a self-extracting zip; names as shipped. |
| `maxsdk-3.0` | `Max3sdk/Include` and `Max3sdk/lib` from `Max3sdk.zip` in archive.org's [3D Studio Max SDKs](https://archive.org/details/3d-studio-max-sdks); folder names lower-cased, files as shipped. Its Character Studio headers (`phyexp.h`, `bipexp.h`) are not in it. |
| `maxsdk-4.0` | No copy of the 4.0 SDK has turned up: `maxsdk/Include` and `maxsdk/Lib` of the 4.2 SDK ([archive.org](https://archive.org/details/maxsdk-4.2.0.85), `maxsdk.zip`), which keeps 4.0's plug-in API (`MAX_API_NUM` 8; 4.x plug-ins are binary compatible), with `plugapi.h`'s `MAX_RELEASE` put back from 4200 to 4.0's 4000, the value a plug-in's `LibVersion()` reports. No Character Studio headers either. |
| `maya-3.0-devkit` | The "Developer Include Files" and "Developer Libraries" file groups of the InstallShield cabinet (`MAYA/DATA1.CAB`) on the Maya 3.0 Unlimited Windows CD ([archive.org](https://archive.org/details/maya_30)), as `include/` and `lib/`. |
| `maya-4.0-devkit` | The same file groups of the Maya 4.0 Windows CD's `DATA1.CAB` ([archive.org](https://archive.org/details/maya40)). |
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

## Wanted: the C runtime of Visual C++ 6.0 SP4

The game DLLs (`CShell.dll`, `Object.lto`), `NOLF.exe` and `NolfServ.exe`
link a static C runtime (`libcmt.lib`) whose C objects the retail images'
Rich headers count as cl **12.00.8797** (`CShell.dll`: ×152, `Object.lto`:
×124, `NOLF.exe`: ×138, `NolfServ.exe`: ×158). No tree here has it:
`libcmt.lib`'s objects are 8168 in `msvc-6.00-8168` and `msvc-6.00-8447`,
8047 in `msvc-6.00-8966` and 9782 in `msvc-6.00-9782` (`tools/compid.py`
reads them). Build 8797 falls between SP3 (8447) and SP5 (8966/8047), so
the likely source is Visual C++ 6.0 **Service Pack 4**'s `VC98/LIB/libcmt.lib`
(not yet confirmed: no copy of SP4 has been examined). Until it is found
these images link SP6's (`msvc-6.00-9782`), which differs from the retail
one in the runtime's own code and data but in none of Monolith's.

If you have Visual C++ 6.0 SP4 (`vs6sp4.exe`, or its `vc98` files), please
open an issue on this repository.

## Thanks

The way the two versioned VC6 trees are rebuilt from the original
Microsoft media -- which discs, which files, and where the SP3 and SP5 back ends hide
-- comes from
[second-impressions/msvc-compilers](https://github.com/second-impressions/msvc-compilers).
