# Which compiler built what

Every retail PE carries a Rich header -- a linker-written inventory of the
tool builds that produced its objects (`python3 tools/richhdr.py <image>`
dumps it). This file maps each binary to the compiler revision its evidence
names, and to the directory here that provides it. Where a revision has been
*proven* by byte-matching, it says so; everything else is the header's own
testimony.

## The toolchains

| Directory | Driver banner | c2.dll (back end) | Era |
|---|---|---|---|
| `msvc-7.10-3077/` | 13.10.3077 | **13.10.3077** | VS.NET 2003 RTM |
| `msvc-6.00-8168/` | 12.00.8168 | **12.00.8168** | VC6 RTM |
| `msvc-6.00-8447/` | 12.00.8168 | **12.00.8447** | VC6 SP3 |
| `msvc-6.00-8966/` | 12.00.8804 | **12.00.8966** | VC6 SP5 |
| `msvc-6.00-9044/` | 12.00.8804 | **13.00.9044** (Rich: build 9044) | VC6 SP5 + Processor Pack |
| `msvc-6.00-9782/` | 12.00.8804 | **12.00.9782** | VC6 SP6 (the default) |
| `icl-4.0/` | Intel C/C++ 4.0 build 99100 | -- | 1999 |
| `icl-4.5/` | Intel C/C++ 4.5 build 00015 | -- | 2000 |
| `icl-5.0.1/` | Intel C++ 5.0.1 build 010525Z | -- | 2001 |
| `icl-6.0.078/` | Intel C++ 6.0 build 020321Z | -- | 2002 |
| `icl-8.0.046/` | Intel C++ 8.0 build 20040211Z | -- | 2004 |
| `icl-9.0.022/` | Intel C++ 9.0 build 20050809Z | -- | 2005 |

The driver banner lies: `cl.exe` is often an older stub in front of newer
compiler DLLs. The **c2.dll version is the one the Rich header records** and
the one that decides codegen -- check it, not the banner. `build/env.sh`
selects with `CL_REV=8168|8447` (unset: `msvc-6.00-9782`); `build/engine.sh` pins
`server.dll` and `lithtech.exe` to 8447, `build/libs.sh` pins the lithshared
libraries to 8447, and `d3d.ren` is built with `run_icl`. `toolchain/README.md`
says where each tree comes from.

SP5's back end (`msvc-6.00-8966`) was also tried against the engine
binaries and the launcher and matched nothing the held revisions do not.
The Processor Pack's (`msvc-6.00-9044`, a 13.00 file version on a build-9044
back end) has not been tried against them yet.

## A second, exact oracle: `@comp.id`

The Rich header is a per-image inventory, so on a mixed-revision image it
says which revisions are present, not which object used which. Static
libraries have something better. Every object MSVC emits carries an absolute
symbol named `@comp.id` whose low sixteen bits are the compiler's *build*
number, and a `.lib` keeps its objects' symbol tables intact -- so for a
library the attribution is exact, per object, with no inference at all:

```sh
python3 tools/compid.py out/shipped/*.lib     # the source release's libraries
```

Every object in every retail lithshared library reads `0x0b20ff` -- build
**8447** (`0x0a20ff` on the C objects in GameSpyClientMgr: same build, C
rather than C++). The same tool reads an object we compile, which is the
quickest way to confirm that a `CL_REV` override actually took effect.

## The binaries

| Binary | Rich header cl objects | Built here with | Status of the attribution |
|---|---|---|---|
| `server.dll` | C 8168 ×146 · C++ 8168 ×8 · C++ **8447** ×95 | **8447, /O1** (one file `/Os`) | **Proven**: switching to 8447 matched `DoStartWorld` and `DistSqr` outright, regressed nothing, and made the retail varargs-cleanup merging reproducible. Eight C++ objects and the C code are 8168; no reconstructed file has yet preferred it. `/O1` (not `/O2`) and no `/GX` are proven by the code itself (memory-operand compares, `pop` for cleanup, `push`/`pop` for small constants; no EH frames). |
| `lithtech.exe` | C 8168 ×155 · C++ 8168 ×8 · C++ **8447** ×155 · C 8799 ×1 | **8447, /O2** (a few files with their own flags) | **Proven**: `/O2` matches 479 functions where `/O1` matches 37. Switching the whole shared source set from 8168 to 8447 matched five more functions, and rebuilding each shared file at 8168 one at a time moved the total for none of them. One stray C object wants 8799, which nobody has. |
| `d3d.ren` | C 8168 ×109 · C++ 8168 ×8 · C++ 8447 ×3 | **Intel C/C++ 4.0**, per-file flag groups | **Proven** (below). The Microsoft rows are the static CRT and linked-in library code: a Rich header only records Microsoft tools. |
| `NOLF.exe` | C **8797** ×138 · C++ 8797 ×10 · C++ **8569** ×42 · C++ 8168 ×4 · C++ 8799 ×10 | `msvc-6.00-9782`; the right ones are **not held** | The launcher wants post-SP4 builds (8797, 8799; 8569 is the MFC) that nobody has. Every revision tried -- 9782, 8168, 8447, 8966 -- matches exactly the same launcher functions, so none of them is secretly the right one and the remaining nears are not a flag question either. |
| `ltmsg.dll` | C 8168 ×23 · C++ 8168 ×2 | **`msvc-6.00-8168`**: compiler, `libcmt.lib` and linker | **Proven**: every byte but four is the retail file's. Its resources, its CRT and the C runtime's own default `DllMain` (no `DllMain` of Monolith's: the extra C object), linked by VC6's first linker, whose `cvtres.exe` 5.00.1720 is the Rich header's "masm 1720" row (later linkers bring 5.00.1736, "1735"). Left over: the time stamp, and two `KERNEL32` imports (`HeapCreate`, `GetCommandLineA`) in each other's IAT slots, which no held linker, library or link order reproduces. |
| lithshared libraries | (no Rich header; `@comp.id` on every object: **8447**) | **8447** (`build/libs.sh`) | **Proven exactly**, per object, by `@comp.id`. |
| `CShell.dll` / `Object.lto` / `CRes.dll` | (not recovered) | `msvc-6.00-9782` | Built from Monolith's released source; not yet scored by `make progress`. |

## The C runtime

Code of Monolith's is only half of an image: the static C runtime is the
rest, and the Rich header names its build too (the C rows, mostly).

| Binary | Its `libcmt.lib` (C objects) | Linked here with |
|---|---|---|
| `lithtech.exe`, `server.dll`, `d3d.ren` | 8168 | `msvc-6.00-8447`'s (SP3: 8168 objects, without SP6's `__MSVCRT_HEAP_SELECT` heap selection and its `GetVersionExA` / `GetEnvironmentVariableA` imports); `d3d.ren` Intel 4.0's `libmmt.lib` first, as the retail one did (its `floor.c`, `modf.c`, `support.c` SCCS idents) |
| `ltmsg.dll` | 8168 | `msvc-6.00-8168`'s |
| `CShell.dll`, `Object.lto`, `NOLF.exe`, `NolfServ.exe` | **8797** (likely SP4), not held | `msvc-6.00-9782`'s, except the old iostream library, `libcimt.lib` (8168 in every held tree but SP6's, which adds an `__InitLock` class): `msvc-6.00-8168`'s. Wanted: `toolchains/README.md` |

## Notes

* A revision mismatch shows up as instruction-equivalent nears with
  block-layout, cleanup-batching or scheduling deltas. Before hunting source
  shapes for one of those, check this table and try the binary's own
  revision -- `DoStartWorld` sat as a documented near and fell to a compiler
  switch in one build.
* The reverse also happens: several nears once *blamed* on revision variance
  (`UpdateObjects`' retire block, `sm_RemoveObjectFromSky`'s `lea`,
  `GetPacket`'s back edge) reproduce under **no** held revision and are
  source-shape questions. Attribution requires testing, not inference.

## d3d.ren: Intel C/C++ 4.0

`d3d.ren` is the one engine binary not built with Microsoft's compiler. It is
**Intel C/C++ for Win32**, and three independent lines of evidence agree.

**1. Its math library is Intel's, byte for byte.** `d3d.ren` carries three
SCCS `what(1)` idents; Intel 4.0's `libm.lib` carries the same three with
identical versions and timestamps:

    @(#)floor.c    1.4.7.1  08/28/98 14:05:29
    @(#)modf.c     1.3.7.1  08/28/98 14:06:01
    @(#)support.c  1.4.7.1  08/28/98 14:06:25

No Microsoft library contains a single SCCS ident (VC 5.0, 5.1, 6.0 RTM and
SP6 were all checked).

**2. It emits the two fingerprints no MSVC produces.** A small test file
compiled with icl gives the multi-byte lea-nop padding between functions (all
three encodings, `8d 76 00`, `8d bc 27 ...`, `8d b4 26 ...`) and the
four-byte `mov 0x4(%esp),%eax` register-passing shim. `d3d.ren` is the only
module of the retail install containing either; cl produces neither at any
revision or flag setting.

**3. It reproduces the retail code exactly.** `d3d_Start3D` is byte-identical
under `icl 4.0 /O2`, **including the compiler's own 15 bytes of trailing
lea-nop alignment padding**, which the retail image carries at the same
place. `/O2` for icl is `/Gfsy /Ob1gyti`. (At `/O1` the same function comes
out 57 bytes against the retail 65: `/O1` and `/Os` share tail exits where
the retail build duplicates them. That gap first looked like a compiler
*version* problem; it was the flag, plus two guards in the source that had
to be one `||`.)

The renderer is a mixed build: its translation units do not share one flag
set, and our file boundaries are invented, so each file's flags are
*measured* -- `/O2` or `/Os`, `/Qip` (interprocedural register calling
between functions of one file), `/Qip_no_inlining`, `/Oi-` (CRT intrinsics
called, not expanded), `/Qrcd` (fast float-to-int conversion), `/Qsfalign16`,
`/G5`. The groups are at the top of `build/engine.sh`; new files join a group
by their name (`w<N>_*_<flags>.cpp`), and `build/engine.sh d3d-one <file>`
compiles a file with its group's flags.

The evaluation release of icl 4.0 that `toolchain/fetch.sh` assembles has
its licence check disabled by one byte, as the archive's own `$ICL.COM`
documents (`toolchain/README.md`). It runs against `msvc-6.00-8168`'s headers
and libraries, which `run_icl` puts on its paths.

`icl-4.5`, `icl-5.0.1`, `icl-6.0.078`, `icl-8.0.046` and `icl-9.0.022` are
held for testing; no build target uses them. None of 6.0, 8.0 or 9.0 built
`d3d.ren`: their `libm.lib` carries no SCCS idents at all. 4.5 and 5.0.1
have not been tried against it yet.

**Not held: the original Intel C++ 5.0** (5.0.1 replaces it). NOLF and NOLF2
may have been built with it, and that cannot be ruled out until it has been
tried. If you have it, see "Wanted" in `toolchain/README.md`.

## Contract J.A.C.K.: Visual C++ .NET 2003

Every Monolith binary of Contract J.A.C.K. 1.1 (`Lithtech.exe`,
`server.dll`, `ContractJack.exe`, `ContractJackServer.exe`, `GameSpy.dll`,
`SndDrv.dll`, `ltmsg.dll`, `CShell.dll`, `Object.lto`, `ClientFx.fxd`,
`CRes.dll`, `SRes.dll`) has a Rich header whose compiler rows are all
13.10.3077: product 0x5f (C) and 0x60 (C++), with link 7.10.3077 (0x5a),
cvtres (0x5e, 3052) and masm 7.10 (0x0f) -- `msvc-7.10-3077`. The rows at
builds 2067 and 2179 (0x5d, 0x69) are the import and startup objects of
`msvcrt.lib` itself: a test program linked here carries the same ones.
`Lithtech.exe` adds VC 7.0-era objects (0x1c/0x1d, build 9178) and masm
6.14 (8444) from a statically linked library, and `SndDrv.dll` one VC6
object (8168) from another, as NOLF2's did.
