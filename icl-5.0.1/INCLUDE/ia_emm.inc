.686
.xmm

; INTEL CORPORATION CONFIDENTIAL INFORMATION
;
; This software is supplied under the terms of the Intel Pre-Release
; Program and License Agreement previously executed by your company and
; Intel, and may only be used, copied, or disclosed in accordance with
; the terms of that agreement.  Notwithstanding the above, Intel may
; also provide third party software hereunder which may be subject to
; and used in accordance with any additional terms and conditions
; included with such software.
;
; Copyright (c) 2000 Intel Corporation. 


; This macro package requires an assembler vesion 6.14.8365 or later.

; Please use XMMWORD and not DWORD (OWORD does not work) for 128 bit data 
; in Streaming SIMD Extensions 2 instructions. After getting a real
; assembler you will just have to add the line "XMMWORD	TEXTEQU	<OWORD>"
; to your code.

; For the macro file we will use:
;     F3 0F 6F ==> F3 0F 27		(movdqu		xmm1, xmm2/m128)
;     F3 0F 7F ==> F3 0F 37		(movdqu		xmm2/m128, xmm1)
;     F2 0F 70 ==> F2 0F D0		(pshuflw	xmm1, xmm2/m128)
;     F3 0F 70 ==> F3 0F D0		(pshufhw	xmm1, xmm2/m128)
;     66 ALL MMX(tm) Technology opcodes ==> F0 ALL MMX opcodes

; The MMX_66 flag is used to diferentiate between the pre-silicon version and
; the post silicon version.  POST_SILICON is the default.
; Set the PRE_SILICON flag to get the correct assembly for pre silicon.
IFDEF	PRE_SILICON
	MMX_66		= 0F0h
ELSE
	MMX_66		= 066h
ENDIF

; Some instructions have the same mnemonic in Streaming SIMD Extensions 2
; instructions and in Pentium(r) III Processor instructions.
; in order to use those instructions you must add the prefix "e_" to
; the opcodes. for example : psubq --> e_psubq.
; For your convenience, 128bit integer instructions have an e_ alias,
; even if the same mnemonics does not exist in previous architectures.

; maskmovdqu  paddsb      pcmpgtb     pmulhw      psrad       psubusw
; movd        paddsw      pcmpgtd     pmullw      psraw       psubw
; movdqa      paddusb     pcmpgtw     pmuludq     psrld       punpckhbw
; movdqu      paddusw     pextrw      por         psrldq      punpckhdq
; movntdq     paddw       pinsrw      psadbw      psrlq       punpckhqdq
; movq        pand        pmaddwd     pshufd      psrlw       punpckhwd
; packssdw    pandn       pmaxsw      pshufhw     psubb       punpcklbw
; packsswb    pavgb       pmaxub      pshuflw     psubd       punpckldq
; packuswb    pavgw       pminsw      pslld       psubq       punpcklqdq
; paddb       pcmpeqb     pminub      pslldq      psubsb      punpcklwd
; paddd       pcmpeqd     pmovmskb    psllq       psubsw      pxor
; paddq       pcmpeqw     pmulhuw     psllw       psubusb

; There are 2 instructions that have the same mnemonic in Streaming SIMD
; Extensions 2 instructions and instructions in previous processors.
; Those instructions - movsd and cmpsd were given the mnemonics
; movsd1 and compsd1 in order to differentiate them from the older (and
; different in action) movsd and cmpsd.



MM2WORD		TEXTEQU <QWORD>		; used only by the compiler, obsolete
MMWORD		TEXTEQU	<QWORD>		; used only by the compiler, obsolete
XMMWORD		TEXTEQU	<DWORD>		; 128 bit memory operands for xmm regs inst

opc_Movd_ld			= 06EH
opc_Movd_st			= 07EH
opc_Packssdw		= 06BH
opc_Packsswb		= 063H
opc_Packuswb		= 067H
opc_Paddb			= 0FCH
opc_Paddd			= 0FEH
opc_Paddsb			= 0ECH
opc_Paddsw			= 0EDH
opc_Paddusb			= 0DCH
opc_Paddusw			= 0DDH
opc_Paddw			= 0FDH
opc_Pand			= 0DBH
opc_Pandn			= 0DFH
opc_Pslldq			= 073H
opc_Psrldq			= 073H
opc_Pcmpeqb			= 074H
opc_Pcmpeqd			= 076H
opc_Pcmpeqw			= 075H
opc_Pcmpgtb			= 064H
opc_Pcmpgtd			= 066H
opc_Pcmpgtw			= 065H
opc_Pmaddwd			= 0F5H
opc_Pmulhw			= 0E5H
opc_Pmullw			= 0D5H
opc_Por				= 0EBH
opc_PSHimd			= 072H
opc_PSHimq			= 073H
opc_PSHimw			= 071H
opc_Pslld			= 0F2H
opc_Psllq			= 0F3H
opc_Psllw			= 0F1H
opc_Psrad			= 0E2H
opc_Psraw			= 0E1H
opc_Psrld			= 0D2H
opc_Psrlq			= 0D3H
opc_Psrlw			= 0D1H
opc_Psubb			= 0F8H
opc_Psubd			= 0FAH
opc_Psubsb			= 0E8H
opc_Psubsw			= 0E9H
opc_Psubusb			= 0D8H
opc_Psubusw			= 0D9H
opc_Psubw			= 0F9H
opc_Punpcklbw		= 060H
opc_Punpckldq		= 062H
opc_Punpcklwd		= 061H
opc_Punpckhbw		= 068H
opc_Punpckhdq		= 06AH
opc_Punpckhwd		= 069H
opc_Pxor			= 0EFH
opc_Movupd_ld       = 010H
opc_Movsd_ld        = 010H
opc_Movupd_st       = 011H
opc_Movsd_st        = 011H
opc_Movlpd_ld       = 012H
opc_Movlpd_st       = 013H
opc_Unpcklpd        = 014H
opc_Unpckhpd        = 015H
opc_Movhpd_ld       = 016H
opc_Movhpd_st       = 017H
opc_Movapd_ld       = 028H
opc_Movapd_st       = 029H
opc_Cvtpi2pd        = 02aH
opc_Cvtsi2sd        = 02aH
opc_Cvttpd2pi       = 02cH
opc_Cvttsd2si       = 02cH
opc_Cvtsd2si        = 02dH
opc_Cvtpd2pi		= 02DH
opc_Cvtdq2ps		= 05BH
opc_Cvtps2dq		= 05BH
opc_Cvttps2dq		= 05BH
opc_Cvtdq2pd		= 0E6H
opc_Cvtpd2dq		= 0E6H
opc_Cvttpd2dq		= 0E6H
opc_Movmskpd        = 050H
opc_Sqrtpd          = 051H
opc_Sqrtsd          = 051H
opc_Andpd           = 054H
opc_Andnpd          = 055H
opc_Orpd            = 056H
opc_Xorpd           = 057H
opc_Addpd           = 058H
opc_Addsd           = 058H
opc_Mulpd           = 059H
opc_Mulsd           = 059H
opc_Cvtps2pd        = 05aH
opc_Cvtss2sd        = 05aH
opc_Cvtpd2ps        = 05aH
opc_Cvtsd2ss        = 05aH
opc_Subpd           = 05cH
opc_Subsd           = 05cH
opc_Minpd           = 05dH
opc_Minsd           = 05dH
opc_Divpd           = 05eH
opc_Divsd           = 05eH
opc_Maxpd           = 05fH
opc_Maxsd           = 05fH
opc_Punpcklqdq      = 06cH
opc_Punpckhqdq      = 06dH
opc_Movdqa_ld       = 06fH
opc_Movdqa_st       = 07fH
opc_Movdq2q			= 0D6H
opc_Movq2dq			= 0D6H

opc_Movq_st			= 0D6H

IFNDEF	PRE_SILICON
	opc_Movdqu_ld       = 06fH
	opc_Movdqu_st       = 07fH
	opc_Pshufhw         = 070H
	opc_Pshuflw         = 070H
	opc_Ucomisd         = 02eH
	opc_Comisd          = 02fH
	opc_Movq_ld         = 07EH
ELSE
	opc_Movdqu_ld		= 027H
	opc_Movdqu_st       = 037H
	opc_Pshufhw         = 0D0H
	opc_Pshuflw         = 0D0H
	opc_Ucomisd         = 03eH
	opc_Comisd          = 03fH
	opc_Movq_ld         = 0D6H
ENDIF

opc_Pshufd          = 070H
opc_Cmppd           = 0c2H
opc_Cmpsd           = 0c2H
opc_Pinsrw          = 0c4H
opc_Pextrw          = 0c5H
opc_Shufpd          = 0c6H
opc_Paddq           = 0d4H
opc_Pmovmskb        = 0d7H
opc_Pminub          = 0daH
opc_Pmaxub          = 0deH
opc_Pavgb           = 0e0H
opc_Pavgw           = 0e3H
opc_Pmulhuw         = 0e4H
opc_Movntq          = 0e7H
opc_Movntdq         = 0e7H
opc_Movnti			= 0c3H
opc_Movntpd         = 02bH
opc_Pminsw          = 0eaH
opc_Pmaxsw          = 0eeH
opc_Pmuludq         = 0f4H
opc_Psadbw          = 0f6H
opc_Maskmovdqu      = 0f7H
opc_Psubq           = 0fbH
opc_Movhlps			= 012H
opc_Movlhps			= 016H
opc_Clflush			= 0AEH
opc_Lfence			= 0AEH
opc_Mfence			= 0AEH

MMX2INT macro arg1:req
    if @SizeStr(arg1) NE 3
        EXITM <arg1>
    endif
    if @InStr(1,arg1,<mm>) NE 1
        if @InStr(1,arg1,<MM>) NE 1
            EXITM <arg1>
        endif
    endif
    if @InStr(1,arg1,<mm0>) EQ 1
        EXITM <eax>
    elseif @InStr(1,arg1,<mm1>) EQ 1
        EXITM <ecx>
    elseif @InStr(1,arg1,<mm2>) EQ 1
        EXITM <edx>
    elseif @InStr(1,arg1,<mm3>) EQ 1
        EXITM <ebx>
    elseif @InStr(1,arg1,<mm4>) EQ 1
        EXITM <esp>
    elseif @InStr(1,arg1,<mm5>) EQ 1
        EXITM <ebp>
    elseif @InStr(1,arg1,<mm6>) EQ 1
        EXITM <esi>
    elseif @InStr(1,arg1,<mm7>) EQ 1
        EXITM <edi>
    elseif @InStr(1,arg1,<MM0>) EQ 1
        EXITM <eax>
    elseif @InStr(1,arg1,<MM1>) EQ 1
        EXITM <ecx>
    elseif @InStr(1,arg1,<MM2>) EQ 1
        EXITM <edx>
    elseif @InStr(1,arg1,<MM3>) EQ 1
        EXITM <ebx>
    elseif @InStr(1,arg1,<MM4>) EQ 1
        EXITM <esp>
    elseif @InStr(1,arg1,<MM5>) EQ 1
        EXITM <ebp>
    elseif @InStr(1,arg1,<MM6>) EQ 1
        EXITM <esi>
    elseif @InStr(1,arg1,<MM7>) EQ 1
        EXITM <edi>
    endif
    EXITM <arg1>
endm

INT2MMX macro arg1:req
    if @SizeStr(arg1) NE 3
        EXITM <arg1>
    endif
    if @InStr(1,arg1,<eax>) EQ 1
        EXITM <mm0>
    elseif @InStr(1,arg1,<ecx>) EQ 1
        EXITM <mm1>
    elseif @InStr(1,arg1,<edx>) EQ 1
        EXITM <mm2>
    elseif @InStr(1,arg1,<ebx>) EQ 1
        EXITM <mm3>
    elseif @InStr(1,arg1,<esp>) EQ 1
        EXITM <mm4>
    elseif @InStr(1,arg1,<ebp>) EQ 1
        EXITM <mm5>
    elseif @InStr(1,arg1,<esi>) EQ 1
        EXITM <mm6>
    elseif @InStr(1,arg1,<edi>) EQ 1
        EXITM <mm7>
    elseif @InStr(1,arg1,<EAX>) EQ 1
        EXITM <mm0>
    elseif @InStr(1,arg1,<ECX>) EQ 1
        EXITM <mm1>
    elseif @InStr(1,arg1,<EDX>) EQ 1
        EXITM <mm2>
    elseif @InStr(1,arg1,<EBX>) EQ 1
        EXITM <mm3>
    elseif @InStr(1,arg1,<ESP>) EQ 1
        EXITM <mm4>
    elseif @InStr(1,arg1,<EBP>) EQ 1
        EXITM <mm5>
    elseif @InStr(1,arg1,<ESI>) EQ 1
        EXITM <mm6>
    elseif @InStr(1,arg1,<EDI>) EQ 1
        EXITM <mm7>
	endif
    EXITM <arg1>
endm

XMM2INT macro arg1:req
    if @SizeStr(arg1) NE 4
        EXITM <arg1>
    endif
    if @InStr(1,arg1,<xmm>) NE 1
        if @InStr(1,arg1,<XMM>) NE 1
            EXITM <arg1>
        endif
    endif
    if @InStr(1,arg1,<xmm0>) EQ 1
        EXITM <eax>
    elseif @InStr(1,arg1,<xmm1>) EQ 1
        EXITM <ecx>
    elseif @InStr(1,arg1,<xmm2>) EQ 1
        EXITM <edx>
    elseif @InStr(1,arg1,<xmm3>) EQ 1
        EXITM <ebx>
    elseif @InStr(1,arg1,<xmm4>) EQ 1
        EXITM <esp>
    elseif @InStr(1,arg1,<xmm5>) EQ 1
        EXITM <ebp>
    elseif @InStr(1,arg1,<xmm6>) EQ 1
        EXITM <esi>
    elseif @InStr(1,arg1,<xmm7>) EQ 1
        EXITM <edi>
    elseif @InStr(1,arg1,<XMM0>) EQ 1
        EXITM <eax>
    elseif @InStr(1,arg1,<XMM1>) EQ 1
        EXITM <ecx>
    elseif @InStr(1,arg1,<XMM2>) EQ 1
        EXITM <edx>
    elseif @InStr(1,arg1,<XMM3>) EQ 1
        EXITM <ebx>
    elseif @InStr(1,arg1,<XMM4>) EQ 1
        EXITM <esp>
    elseif @InStr(1,arg1,<XMM5>) EQ 1
        EXITM <ebp>
    elseif @InStr(1,arg1,<XMM6>) EQ 1
        EXITM <esi>
    elseif @InStr(1,arg1,<XMM7>) EQ 1
        EXITM <edi>
    endif
    EXITM <arg1>
endm

XMM2MM macro arg1:req
	if @SizeStr(arg1) NE 4
		EXITM <arg1>
	endif
	if @InStr(1,arg1,<xmm>) NE 1
		if @InStr(1,arg1,<XMM>) NE 1
			EXITM <arg1>
		endif 
	endif
    if @InStr(1,arg1,<xmm0>) EQ 1
        EXITM <mm0>
    elseif @InStr(1,arg1,<xmm1>) EQ 1
        EXITM <mm1>
    elseif @InStr(1,arg1,<xmm2>) EQ 1
        EXITM <mm2>
    elseif @InStr(1,arg1,<xmm3>) EQ 1
        EXITM <mm3>
    elseif @InStr(1,arg1,<xmm4>) EQ 1
        EXITM <mm4>
    elseif @InStr(1,arg1,<xmm5>) EQ 1
        EXITM <mm5>
    elseif @InStr(1,arg1,<xmm6>) EQ 1
        EXITM <mm6>
    elseif @InStr(1,arg1,<xmm7>) EQ 1
        EXITM <mm7>
    elseif @InStr(1,arg1,<XMM0>) EQ 1
        EXITM <mm0>
    elseif @InStr(1,arg1,<XMM1>) EQ 1
        EXITM <mm1>
    elseif @InStr(1,arg1,<XMM2>) EQ 1
        EXITM <mm2>
    elseif @InStr(1,arg1,<XMM3>) EQ 1
        EXITM <mm3>
    elseif @InStr(1,arg1,<XMM4>) EQ 1
        EXITM <mm4>
    elseif @InStr(1,arg1,<XMM5>) EQ 1
        EXITM <mm5>
    elseif @InStr(1,arg1,<XMM6>) EQ 1
        EXITM <mm6>
    elseif @InStr(1,arg1,<XMM7>) EQ 1
        EXITM <mm7>
    endif
    EXITM <arg1>
endm

EXT0	TEXTEQU	<EAX>
EXT1	TEXTEQU	<ECX>
EXT2	TEXTEQU	<EDX>
EXT3	TEXTEQU	<EBX>
EXT4	TEXTEQU	<ESP>
EXT5	TEXTEQU	<EBP>
EXT6	TEXTEQU	<ESI>
EXT7	TEXTEQU	<EDI>
EXTB0	TEXTEQU	<AL>
EXTB1	TEXTEQU	<CL>
EXTB2	TEXTEQU	<DL>
EXTB3	TEXTEQU	<BL>


mmx_op   macro   op:req, dst:req, src:req
        local   x, y
x:
        movq	src, dst
y:
        org     x+1
        byte    op
        org     y
endm

xmm_op	macro	op:req, dst:req, src:req
		local	x, y
x:
		movaps	dst, src
y:
		org		x+1
		byte	op
		org		y
endm

xmm64_op	macro	op:req, dst:req, src:req
		local	x, y
x:
		movq	XMM2MM(src), XMM2MM(dst)
y:
		org		x+1
		byte	op
		org		y
endm

xmm_op_66  macro   op:req, dst:req, src:req
        local   x, y
x:
        nop
		movaps	dst, src
y:
        org     x
        byte    MMX_66, 0Fh, op
        org     y
endm

xmm_imm   macro   op:req, op_imm:req, op_ext:req, dst:req, src:req
        local   x, y
IF (OPATTR(src)) AND 00000100y ; constant
x:
        lock cmpxchg XMM2INT(dst),op_ext
		byte	src
y:
        org     x
        byte    MMX_66, 0Fh, op_imm  
        org     y
ELSE
x:
        lock cmpxchg   XMM2INT(src), XMM2INT(dst)
y:
        org     x
        byte    MMX_66, 0Fh, op   
        org     y
ENDIF
endm

; Note that this macro does not change the prefix to a pre-silicon value
; as it is not required for psrldq and pslldq
xmm_imm1    macro   op_imm:req, op_ext:req, dst:req, src:req
        local   x, y
IF (OPATTR(src)) AND 00000100y ; constant
x:
        lock cmpxchg XMM2INT(dst),op_ext
		byte	src
y:
        org     x
        byte    66h, 0Fh, op_imm  
        org     y
ELSE
.err "Src must be constant"
ENDIF
endm

xmm_ld_st_movd   macro   op:req, dst:req, src:req
        local   x, y

IF (OPATTR(XMM2INT(dst))) AND 00010000y ; register
	if @SizeStr(dst) NE 4
x:
        lock cmpxchg   dst, XMM2INT(src)
y:
        org     x
        byte    MMX_66, 0Fh, op&_st 
        org     y
	ELSE
x:
        lock cmpxchg   XMM2INT(src), XMM2INT(dst)
y:
        org     x
        byte    MMX_66, 0Fh, op&_ld 
        org     y
	ENDIF
ELSE
x:
        lock cmpxchg   dst, XMM2INT(src)
y:
        org     x
        byte    MMX_66, 0Fh, op&_st 
        org     y
ENDIF
endm

xmm_ld_st_pref   macro   op:req,dst:req, src:req, pref:req
        local   x, y

IF (OPATTR(XMM2INT(dst))) AND 00010000y ; register
x:
        lock cmpxchg   XMM2INT(src), XMM2INT(dst)
y:
        org     x
        byte    pref, 0Fh, op&_ld 
        org     y
ELSE
x:
        lock cmpxchg   dst, XMM2INT(src)
y:
        org     x
        byte    pref, 0Fh, op&_st 
        org     y
ENDIF
endm

; to be used with m64 parametters
xmm64_ld_st_pref   macro   op:req,dst:req, src:req, pref:req
        local   x, y

IF (OPATTR(XMM2INT(dst))) AND 00010000y ; register
x:
        nop
		movq   XMM2MM(src), XMM2MM(dst)
y:
        org     x
        byte    pref,0Fh, op&_ld 
        org     y
ELSE
x:
        nop
		movq   XMM2MM(dst), XMM2MM(src)
y:
        org     x
        byte    pref,0Fh, op&_st 
        org     y
ENDIF
endm

xmm_imm_pref	macro	op:req, dst:req, src:req,imm:req, pref:req
        local   x, y
x:
        lock cmpxchg   XMM2INT(src),XMM2INT(dst)
        byte	imm 
y:
        org     x
        byte    pref,0Fh,op  
        org     y
endm

xmm64_imm_pref	macro	op:req, dst:req, src:req,imm:req, pref:req
        local   x, y
x:
		nop
		movq	XMM2MM(src),XMM2MM(dst)
        byte	imm 
y:
        org     x
        byte    pref,0Fh,op  
        org     y
endm

; to be used with m64 parametters
xmm64_op_pref	macro	op:req, dst:req, src:req, pref:req
        local   x, y
x:
        nop
		movq	XMM2MM(src),XMM2MM(dst)
y:
        org     x
        byte    pref ,0Fh, op  
        org     y
endm

; to be used with m64 parametters and a register
xmm64reg_op_pref	macro	op:req, dst:req, src:req, pref:req
        local   x, y
x:
        nop
		movq	XMM2MM(src), INT2MMX(dst)
y:
        org     x
        byte    pref ,0Fh, op  
        org     y
endm

xmm_op_pref	macro	op:req, dst:req, src:req, pref:req
        local   x, y
x:
        lock cmpxchg   XMM2INT(src),XMM2INT(dst) 
y:
        org     x
        byte    pref ,0Fh, op  
        org     y
endm

xmm_movq   macro   op:req, dst:req, src:req, pref_ld:req, pref_st
        local   x, y
IF (OPATTR(XMM2INT(dst))) AND 00010000y ; register
IFDEF PRE_SILICON
x:
        movq src, dst
y:
        org     x+1
        byte    op&_ld
        org     y
ELSE
x:
		nop
		movq src, dst
y:
		org		x
		byte	pref_ld, 0Fh, op&_ld
		org		y
ENDIF
ELSE
x:
		nop
		movq dst, src
y:
		org		x
		byte	pref_st, 0Fh, op&_st
		org		y
ENDIF
endm

xmm_to_mm_pref	macro	op:req, dst:req, src:req, pref:req
        local   x, y
x:
        lock cmpxchg   XMM2INT(src), MMX2INT(dst)
y:
        org     x
        byte    pref, 0Fh, op  
        org     y
endm

mm_to_xmm_pref	macro	op:req, dst:req, src:req, pref:req
        local   x, y
x:
        nop
		movq	src, XMM2MM(dst)
y:
        org     x
        byte    pref, 0Fh, op  
        org     y
endm

xmm2mm_reg_pref   macro   op:req, dst:req, src:req, pref:req
        local   x, y
IF (OPATTR(MMX2INT(dst))) AND 00010000y ; registers
   IF (OPATTR(XMM2INT(src))) AND 00010000y ; also register
x:
        lock cmpxchg   XMM2INT(src), MMX2INT(dst)
y:
        org     x
        byte    pref, 0Fh, op
        org     y
   ELSE
	   .ERR <illegal operands. both operands should be registers >
   ENDIF
ELSE 
   .ERR <illegal operands. both operands should be registers >
ENDIF
endm

mm2xmm_reg_pref   macro   op:req, dst:req, src:req, pref:req
        local   x, y
IF (OPATTR(XMM2INT(dst))) AND 00010000y ; registers
   IF (OPATTR(MMX2INT(src))) AND 00010000y ; also register
x:
        lock cmpxchg   MMX2INT(src), XMM2INT(dst)
y:
        org     x
        byte    pref, 0Fh, op
        org     y
   ELSE
	   .ERR <illegal operands. both operands should be registers >
   ENDIF
ELSE 
   .ERR <illegal operands. both operands should be registers >
ENDIF
endm


xmm_op_regs   macro   op:req, dst:req, src:req
        local   x, y
IF (OPATTR(XMM2INT(dst))) AND 00010000y ; registers
   IF (OPATTR(XMM2INT(src))) AND 00010000y ; also register
x:
        cmpxchg   XMM2INT(src), XMM2INT(dst)
y:
        org     x+1
        byte    op
        org     y
   ELSE
	   .ERR <illegal operands. both operands should be registers >
   ENDIF
ELSE 
   .ERR <illegal operands. both operands should be registers >
ENDIF
endm

xmm_no_regs   macro   op:req,dst:req, ext:req
        local   x, y
IF OPATTR(dst) AND 00010000y ; register
 .ERR <Illegal argument - usage: op mem >
ELSE
x:
        movsx     ext, dst
y:
        org     x+1
        byte    op 
        org     y
ENDIF
        endm

xmm_mem_only	macro	op:req, dst:req, src:req
		local x, y
x:
		nop
		movntps	dst, src
y:
		org		x
		byte	MMX_66, 0Fh, op
		org		y
endm

; This should be used to emit any two byte instruction
; Done this way and not directly with byte ... so that line info will be correct.
xmm_two_byte	macro	op1:req, op2:req
		local x, y
x:
		nop
		nop
y:
		org x
		byte	op1, op2
		org y
endm

xmm_r32_mem		macro	op:req, dst:req, src:req
		local x, y
IF (OPATTR(dst)) AND 00010100y ; register or constant
	.ERR <illegal operands. first operand should be memory >
ELSE 
x:
		cmpxchg dst, src
y:
		org x+1
		byte op
		org y
ENDIF
endm

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; beginning of the MACRO section :       ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; 66 0F 6E /r	movd	xmm, r/m32
; 66 0F 7E /r	movd	r/m32, xmm
e_movd   macro   dst:req, src:req
        xmm_ld_st_movd    opc_Movd, dst, src
endm

; 66 0F 6B /r	packssdw xmm1, xmm2/m128
e_packssdw    macro   dst:req, src:req
        xmm_op_66   opc_Packssdw, dst, src
endm

; 66 0F 63 /r	packsswb xmm1, xmm2/m128
e_packsswb    macro   dst:req, src:req
        xmm_op_66   opc_Packsswb, dst, src
endm

; 66 0F 67 /r	packuswb xmm1, xmm2/m128
e_packuswb    macro   dst:req, src:req
        xmm_op_66   opc_Packuswb, dst, src
endm

; 66 0F FE /r	paddd	xmm1, xmm2/m128
e_paddd    macro   dst:req, src:req
        xmm_op_66   opc_Paddd, dst, src
endm

; 66 0F EC /r	paddsb	xmm1, xmm2/m128
e_paddsb    macro   dst:req, src:req
        xmm_op_66   opc_Paddsb, dst, src
endm

; 66 0F ED /r	paddsw	xmm1, xmm2/m128 
e_paddsw    macro   dst:req, src:req
        xmm_op_66   opc_Paddsw, dst, src
endm

; 66 0F DC /r	paddusb	xmm1, xmm2/m128
e_paddusb    macro   dst:req, src:req
        xmm_op_66   opc_Paddusb, dst, src
endm

; 66 0F DD /r	paddusw	xmm1, xmm2/m128
e_paddusw    macro   dst:req, src:req
        xmm_op_66   opc_Paddusw, dst, src
endm

; 66 0F FC /r	paddb	xmm1, xmm2/m128
e_paddb    macro   dst:req, src:req
        xmm_op_66   opc_Paddb, dst, src
endm

; 66 0F FD /r	paddw	xmm1, xmm2/m128
e_paddw    macro   dst:req, src:req
        xmm_op_66   opc_Paddw, dst, src
endm

; 66 0F DB /r	pand	xmm1, xmm2/m128
e_pand    macro   dst:req, src:req
        xmm_op_66   opc_Pand, dst, src
endm

; 66 0F DF /r	pandn	xmm1, xmm2/m128
e_pandn    macro   dst:req, src:req
        xmm_op_66   opc_Pandn, dst, src
endm

; 66 0F 74 /r	pcmpeqb	xmm1, xmm2/m128
e_pcmpeqb    macro   dst:req, src:req
        xmm_op_66   opc_Pcmpeqb, dst, src
endm

; 66 0F 76 /r	pcmpeqd	xmm1, xmm2/m128
e_pcmpeqd    macro   dst:req, src:req
        xmm_op_66   opc_Pcmpeqd, dst, src
endm

; 66 0F 75 /r	pcmpeqw	xmm1, xmm2/m128
e_pcmpeqw    macro   dst:req, src:req
        xmm_op_66   opc_Pcmpeqw, dst, src
endm

; 66 0F 64 /r	pcmpgtb	xmm1, xmm2/m128
e_pcmpgtb    macro   dst:req, src:req
        xmm_op_66   opc_Pcmpgtb, dst, src
endm

; 66 0F 66 /r	pcmpgtd	xmm1, xmm2/m128
e_pcmpgtd    macro   dst:req, src:req
        xmm_op_66   opc_Pcmpgtd, dst, src
endm

; 66 0F 65 /r	pcmpgtw	xmm1, xmm2/m128
e_pcmpgtw    macro   dst:req, src:req
        xmm_op_66   opc_Pcmpgtw, dst, src
endm

; 66 0F F5 /r	pmaddwd	xmm1, xmm2/m128
e_pmaddwd    macro   dst:req, src:req
        xmm_op_66   opc_Pmaddwd, dst, src
endm

; 66 0F E5 /r	pmulhw	xmm1, xmm2/m128
e_pmulhw    macro   dst:req, src:req
        xmm_op_66   opc_Pmulhw, dst, src
endm

; 66 0F D5 /r	pmullw	xmm1, xmm2/m128
e_pmullw    macro   dst:req, src:req
        xmm_op_66   opc_Pmullw, dst, src
endm

; 66 0F EB /r	por		xmm1, xmm2/m128
e_por    macro   dst:req, src:req
        xmm_op_66   opc_Por, dst, src
endm

; 66 0F F2 /r		pslld	xmm1, xmm2/m128		
; 66 0F 72 /6 ib	pslld	xmm1, imm8
e_pslld    macro   dst:req, src:req
        xmm_imm   opc_Pslld,opc_PSHimd, EXT6, dst, src
endm

; 66 0F F1 /r		psllw	xmm1, xmm2/m128
; 66 0F 71 /6 ib	psllw	xmm1, imm8
e_psllw    macro   dst:req, src:req
        xmm_imm   opc_Psllw,opc_PSHimw, EXT6, dst, src
endm

; 66 0F E2 /r		psrad	xmm1, xmm2/m128
; 66 0F 72 /4 ib	psrad	xmm1, imm8
e_psrad    macro   dst:req, src:req
        xmm_imm   opc_Psrad,opc_PSHimd, EXT4,  dst, src
endm

; 66 0F E1 /r		psraw	xmm1, xmm2/m128
; 66 0F 71 /4 ib	psraw	xmm1, imm8
e_psraw    macro   dst:req, src:req
        xmm_imm   opc_Psraw,opc_PSHimw, EXT4, dst, src
endm

; 66 0F D2 /r		psrld	xmm1, xmm2/m128
; 66 0F 72 /2 ib	psrld	xmm1, imm8
e_psrld    macro   dst:req, src:req
        xmm_imm   opc_Psrld,opc_PSHimd, EXT2,  dst, src
endm

; 66 0F D3 /r		psrlq	xmm1, xmm2/m128
; 66 0F 73 /2 ib	psrlq	xmm1, imm8
e_psrlq    macro   dst:req, src:req
        xmm_imm   opc_Psrlq,opc_PSHimq, EXT2,  dst, src
endm

; 66 0F F3 /r		psllq	xmm1, xmm2/m128
; 66 0F 73 /6 ib	psllq	xmm1, imm8
e_psllq    macro   dst:req, src:req
        xmm_imm   opc_Psllq,opc_PSHimq, EXT6, dst, src
endm

; 66 0F D1 /r		psrlw	xmm1, xmm2/m128
; 66 0F 71 /2 ib	psrlw	xmm1, imm8
e_psrlw    macro   dst:req, src:req
        xmm_imm   opc_Psrlw,opc_PSHimw, EXT2,  dst, src
endm

; 66 0F E8 /r		psubsb	xmm1, xmm2/m128
e_psubsb    macro   dst:req, src:req
        xmm_op_66   opc_Psubsb, dst, src
endm

; 66 0F E9 /r		psubsw	xmm1, xmm2/m128
e_psubsw    macro   dst:req, src:req
        xmm_op_66   opc_Psubsw, dst, src
endm

; 66 0F D8 /r		psubusb	xmm1, xmm2/m128
e_psubusb    macro   dst:req, src:req
        xmm_op_66   opc_Psubusb, dst, src
endm

; 66 0F D9 /r		psubusw	xmm1, xmm2/m128
e_psubusw    macro   dst:req, src:req
        xmm_op_66   opc_Psubusw, dst, src
endm

; 66 0F F8 /r		psubb	xmm1,xmm2/m128
e_psubb    macro   dst:req, src:req
        xmm_op_66   opc_Psubb, dst, src
endm

; 66 0F F9 /r		psubw	xmm1, xmm2/m128
e_psubw    macro   dst:req, src:req
        xmm_op_66   opc_Psubw, dst, src
endm

; 66 0F 60 /r		punpcklbw	xmm1, xmm2/m128
e_punpcklbw    macro   dst:req, src:req
        xmm_op_66   opc_Punpcklbw, dst, src
endm

; 66 0F 6A /r		punpckhdq	xmm1, xmm2/m128
e_punpckhdq    macro   dst:req, src:req
        xmm_op_66   opc_Punpckhdq, dst, src
endm

; 66 0F 61 /r		punpcklwd	xmm1, xmm2/m128
e_punpcklwd    macro   dst:req, src:req
        xmm_op_66   opc_Punpcklwd, dst, src
endm

; 66 0F 68 /r		punpckhbw	xmm1, xmm2/m128
e_punpckhbw    macro   dst:req, src:req
        xmm_op_66   opc_Punpckhbw, dst, src
endm

; 66 0F 62 /r		punpckldq	xmm1, xmm2/m128
e_punpckldq    macro   dst:req, src:req
        xmm_op_66   opc_Punpckldq, dst, src
endm

; 66 0F 69 /r		punpckhwd	xmm1, xmm2/m128
e_punpckhwd    macro   dst:req, src:req
        xmm_op_66   opc_Punpckhwd, dst, src
endm

; 66 0F 6C /r		punpcklqdq	xmm1, xmm2/m128
punpcklqdq    macro   dst:req, src:req
        xmm_op_66   opc_Punpcklqdq, dst, src
endm
e_punpcklqdq textequ <punpcklqdq>

; 66 0F 6D /r		punpckhqdq	xmm1, xmm2/m128		
punpckhqdq    macro   dst:req, src:req
        xmm_op_66   opc_Punpckhqdq, dst, src
endm
e_punpckhqdq textequ <punpckhqdq>

; 66 0F EF /r		pxor		xmm1, xmm2/m128
e_pxor    macro   dst:req, src:req
        xmm_op_66   opc_Pxor, dst, src
endm

; 66 0F FA /r		psubd		xmm1, xmm2/m128
e_psubd   macro   dst:req, src:req
        xmm_op_66   opc_Psubd, dst, src
endm

;66 0F 10 /r  movupd xmm1, xmm2/m128
;66 0F 11 /r  movupd xmm2/m128, xmm1
movupd  macro   dst:req, src:req
        xmm_ld_st_pref    opc_Movupd, dst, src, 066h
endm

;F2 0F 10 /r  movsd xmm1, xmm2/m32
;F2 0F 11 /r  movsd xmm2/m32, xmm1
movsd1  macro   dst:req, src:req
        xmm64_ld_st_pref    opc_Movsd, dst, src, 0F2h
endm

;66 0F 12 /r  movlpd xmm1, xmm2/m128
;66 0F 13 /r  movlpd xmm2/m128, xmm1
movlpd  macro   dst:req, src:req
        xmm64_ld_st_pref    opc_Movlpd, dst, src, 066h
endm

;66 0F 14 /r  unpcklpd xmm1, xmm2/m128
unpcklpd  macro   dst:req, src:req
        xmm_op_pref    opc_Unpcklpd, dst, src, 066h
endm

;66 0F 15 /r  unpckhpd xmm1, xmm2/m128
unpckhpd  macro   dst:req, src:req
        xmm_op_pref    opc_Unpckhpd, dst, src, 066h
endm

;66 0F 16 /r  movhpd xmm1, xmm2/m128
;66 0F 17 /r  movhpd xmm2/m128, xmm1
movhpd  macro   dst:req, src:req
        xmm64_ld_st_pref    opc_Movhpd, dst, src, 066h
endm

;66 0F 28 /r  movapd xmm1, xmm2/m128
;66 0F 29 /r  movapd xmm2/m128, xmm1 
movapd  macro   dst:req, src:req
        xmm_ld_st_pref	 opc_Movapd, dst, src, 066h
endm

;66 0F E7 /r  movntdq m128, xmm
movntdq  macro   dst:req, src:req
        xmm_mem_only    opc_Movntdq, dst, src
endm
e_movntdq textequ <movntdq>

;66 0F 2B /r  movntpd m128, xmm 
movntpd  macro   dst:req, src:req
        xmm_mem_only    opc_Movntpd, dst, src
endm

;F2 0F 2C /r  cvttsd2si r32, xmm/m64
cvttsd2si  macro   dst:req, src:req
        xmm64reg_op_pref    opc_Cvttsd2si, dst, src, 0f2h
endm

;F2 0F 2D /r  cvtsd2si r32, xmm/m32
cvtsd2si  macro   dst:req, src:req
        xmm64reg_op_pref    opc_Cvtsd2si, dst, src, 0f2h
endm

;66 0F 2E /r  ucomisd xmm1, xmm2/m32
ucomisd  macro   dst:req, src:req
        xmm64_op_pref    opc_Ucomisd, dst, src, 066h
endm

;66 0F 2F /r  comisd xmm1, xmm2/m32
comisd  macro   dst:req, src:req
        xmm64_op_pref    opc_Comisd, dst, src, 066h
endm

;F3 0F F7 /r maskmovdqu mm1,mm2
maskmovdqu  macro   dst:req, src:req
        xmm_op_66   opc_Maskmovdqu, dst, src
endm
e_maskmovdqu textequ <maskmovdqu>

;F2 0F 2A /r  cvtsi2sd xmm, r/m32
cvtsi2sd  macro   dst:req, src:req
        xmm_op_pref    opc_Cvtsi2sd, dst, src, 0f2h
endm

;66 0F 51 /r  sqrtpd xmm1, xmm2/m128
sqrtpd  macro   dst:req, src:req
        xmm_op_pref    opc_Sqrtpd, dst, src, 066h
endm

;F2 0F 51 /r  sqrtsd xmm1, xmm2/m32
sqrtsd  macro   dst:req, src:req
        xmm64_op_pref    opc_Sqrtsd, dst, src, 0f2h
endm

;66 0F 54 /r  andpd xmm1, xmm2/m128
andpd  macro   dst:req, src:req
        xmm_op_pref    opc_Andpd, dst, src, 066h
endm

;66 0F 55 /r  andnpd xmm1, xmm2/m128
andnpd  macro   dst:req, src:req
        xmm_op_pref    opc_Andnpd, dst, src, 066h
endm

;66 0F 56 /r  orpd xmm1, xmm2/m128
orpd  macro   dst:req, src:req
        xmm_op_pref    opc_Orpd, dst, src, 066h
endm

;66 0F 57 /r  xorpd xmm1, xmm2/m128
xorpd  macro   dst:req, src:req
        xmm_op_pref    opc_Xorpd, dst, src, 066h
endm

;66 0F 58 /r  addpd xmm1, xmm2/m128
addpd  macro   dst:req, src:req
        xmm_op_pref    opc_Addpd, dst, src, 066h
endm

;F2 0F 58 /r  addsd xmm1, xmm2/m32
addsd  macro   dst:req, src:req
        xmm64_op_pref    opc_Addsd, dst, src, 0F2h
endm

;66 0F 59 /r  mulpd xmm1, xmm2/m128
mulpd  macro   dst:req, src:req
        xmm_op_pref    opc_Mulpd, dst, src, 066h
endm

;F2 0F 59 /r  mulsd xmm1, xmm2/m64
mulsd  macro   dst:req, src:req
        xmm64_op_pref    opc_Mulsd, dst, src, 0F2h
endm

;66 0F 5C /r  subpd xmm1, xmm2/m128
subpd  macro   dst:req, src:req
        xmm_op_pref    opc_Subpd, dst, src, 066h
endm

;F2 0F 5C /r  subsd xmm1, xmm2/m128
subsd  macro   dst:req, src:req
        xmm64_op_pref    opc_Subsd, dst, src, 0F2h
endm

;66 0F 5D /r  minpd xmm1, xmm2/m128
minpd  macro   dst:req, src:req
        xmm_op_pref    opc_Minpd, dst, src, 066h
endm

;F2 0F 5D /r  minsd xmm1, xmm2/m32
minsd  macro   dst:req, src:req
        xmm64_op_pref    opc_Minsd, dst, src, 0F2h
endm

;66 0F 5E /r  divpd xmm1, xmm2/m128
divpd  macro   dst:req, src:req
        xmm_op_pref    opc_Divpd, dst, src, 066h
endm

;F2 0F 5E /r  divsd xmm1, xmm2/m32
divsd  macro   dst:req, src:req
        xmm64_op_pref    opc_Divsd, dst, src, 0F2h
endm

;66 0F 5F /r  maxpd xmm1, xmm2/m128
maxpd  macro   dst:req, src:req
        xmm_op_pref    opc_Maxpd, dst, src, 066h
endm

;F2 0F 5F /r  maxsd xmm1, xmm2/m32
maxsd  macro   dst:req, src:req
        xmm64_op_pref    opc_Maxsd, dst, src, 0F2h
endm

;F3 0F 70 /r ib pshufhw xmm1, xmm2/m128, imm8
pshufhw macro   dst:req, src:req,imm:req
        xmm_imm_pref    opc_Pshufhw, dst, src,imm, 0f3h
endm
e_pshufhw textequ <pshufhw>

;F2 0F 70 /r ib pshuflw xmm1, xmm2/m128, imm8
pshuflw macro   dst:req, src:req,imm:req
        xmm_imm_pref    opc_Pshuflw, dst, src,imm, 0f2h
endm
e_pshuflw textequ <pshuflw>

;66 0F 70 /r ib pshufd xmm, xmm2/m128
pshufd  macro   dst:req, src:req, imm:req
        xmm_imm_pref    opc_Pshufd, dst, src, imm, MMX_66
endm
e_pshufd textequ <pshufd>

; 66 0F 50 /r  movmskpd r32, xmm
movmskpd  macro   dst:req, src:req
        xmm_op_pref    opc_Movmskpd, dst, src, 066h
endm

; 66 0F C2 /r ib cmppd xmm1, xmm2/m128, imm8 
cmppd  macro   dst:req, src:req,imm:req
        xmm_imm_pref    opc_Cmppd, dst, src,imm, 066h
endm

; 66 0F C2 /r 0  cmpeqpd xmm1, xmm2
cmpeqpd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,0, 066h
endm

; 66 0F C2 /r 1  cmpltpd xmm1, xmm2
cmpltpd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,1, 066h
endm

; 66 0F C2 /r 2  cmplepd xmm1, xmm2
cmplepd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,2, 066h
endm

; 66 0F C2 /r 3  cmpunordpd xmm1, xmm2
cmpunordpd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,3, 066h
endm

; 66 0F C2 /r 4  cmpneqpd xmm1, xmm2
cmpneqpd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,4, 066h
endm

; 66 0F C2 /r 5  cmpltpd xmm1, xmm2
cmpnltpd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,5, 066h
endm

; 66 0F C2 /r 6  cmpnlepd xmm1, xmm2
cmpnlepd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,6, 066h
endm

; 66 0F C2 /r 7  cmpordpd xmm1, xmm2
cmpordpd  macro   dst:req, src:req
        xmm_imm_pref    opc_Cmppd, dst, src,7, 066h
endm

;F2 0F C2 /r ib  cmpsd1 xmm1, xmm2/m32, imm8
cmpsd1  macro   dst:req, src:req,imm:req
        xmm64_imm_pref    opc_Cmpsd, dst, src,imm, 0f2h
endm

;F2 0F C2 /r 0	cmpeqsd xmm1, xmm2
cmpeqsd  macro   dst:req, src:req
        cmpsd1	dst, src, 0
endm

;F2 0F C2 /r 1	cmpltsd xmm1, xmm2
cmpltsd  macro   dst:req, src:req
        cmpsd1	dst, src, 1
endm

;F2 0F C2 /r 2	cmplesd xmm1, xmm2
cmplesd  macro   dst:req, src:req
        cmpsd1	dst, src, 2
endm

;F2 0F C2 /r 3	cmpunordsd xmm1, xmm2
cmpunordsd  macro   dst:req, src:req
        cmpsd1	dst, src, 3
endm

;F2 0F C2 /r 4	cmpneqsd xmm1, xmm2
cmpneqsd  macro   dst:req, src:req
        cmpsd1	dst, src, 4
endm

;F2 0F C2 /r 5	cmpnltsd xmm1, xmm2
cmpnltsd  macro   dst:req, src:req
        cmpsd1	dst, src, 5
endm

;F2 0F C2 /r 6	cmpnlesd xmm1, xmm2
cmpnlesd  macro   dst:req, src:req
        cmpsd1	dst, src, 6
endm

;F2 0F C2 /r 7	cmpordsd xmm1, xmm2
cmpordsd  macro   dst:req, src:req
        cmpsd1	dst, src, 7
endm

;66 0F C4 /r ib pinsrw mm, r32, imm8
e_pinsrw  macro   dst:req, src:req, imm:req
        xmm_imm_pref    opc_Pinsrw, dst, src, imm, MMX_66
endm

;66 0F C5 /r ib pextrw r32, mm, imm8
e_pextrw  macro   dst:req, src:req, imm:req
        xmm_imm_pref    opc_Pextrw, dst, src, imm, MMX_66
endm

;66 0F C6 /r ib shufpd xmm1, xmm2/m128, imm8
shufpd  macro   dst:req, src:req, imm:req
        xmm_imm_pref    opc_Shufpd, dst, src, imm, 066h
endm

;66 0F D7 /r  pmovmskb r32, xmm
e_pmovmskb  macro   dst:req, src:req
		byte MMX_66
        pmovmskb dst, src
endm

;66 0F DA /r  pminub xmm1, xmm2/m128
e_pminub  macro   dst:req, src:req
        xmm_op_66   opc_Pminub, dst, src
endm

;66 0F DE /r  pmaxub xmm1, xmm2/m128
e_pmaxub  macro   dst:req, src:req
        xmm_op_66   opc_Pmaxub, dst, src
endm

;66 0F E0 /r  pavgb xmm1, xmm2/m128
e_pavgb  macro   dst:req, src:req
       xmm_op_66   opc_Pavgb, dst, src
endm

;66 0F E3 /r  pavgw xmm1, xmm2/m128
e_pavgw  macro   dst:req, src:req
       xmm_op_66    opc_Pavgw, dst, src
endm

;66 0F EA /r  pminsw xmm1, xmm2/m128
e_pminsw  macro   dst:req, src:req
       xmm_op_66    opc_Pminsw, dst, src
endm

;66 0F EE /r  pmaxsw xmm1, xmm2/m128
e_pmaxsw  macro   dst:req, src:req
       xmm_op_66    opc_Pmaxsw, dst, src
endm

;66 0F E4 /r  pmulhuw xmm1, xmm2/m128
e_pmulhuw  macro   dst:req, src:req
        xmm_op_66    opc_Pmulhuw, dst, src
endm

;66 0F F6 /r  psadbw xmm1, xmm2/m128
e_psadbw  macro   dst:req, src:req
       xmm_op_66    opc_Psadbw, dst, src
endm

;66 0F 5A /r  cvtpd2ps xmm, r/m32
cvtpd2ps  macro   dst:req, src:req
        xmm_op_pref    opc_Cvtpd2ps, dst, src, 066h
endm

;0F 5A /r  cvtps2pd xmm1, xmm2/m64
cvtps2pd  macro   dst:req, src:req
        xmm64_op	opc_Cvtps2pd, dst, src
endm

;F2 0F 5A /r  cvtsd2ss xmm1, xmm2/m128
cvtsd2ss  macro   dst:req, src:req
        xmm64_op_pref    opc_Cvtsd2ss, dst, src, 0F2h
endm

;F3 0F 5A /r  cvtss2sd xmm, r/m32
cvtss2sd  macro   dst:req, src:req
        xmm_op_pref    opc_Cvtss2sd, dst, src, 0F3h
endm

;66 0F 6F movdqa xmm1,xmm2/m128
;66 0F 7F movdqa xmm2/m128,xmm1
movdqa   macro   dst:req, src:req
        xmm_ld_st_pref    opc_Movdqa, dst, src, MMX_66
endm
e_movdqa textequ <movdqa>

;F3 0F 6F movdqu xmm1,xmm2/m128		* see note about pre/post silicon
;F3 0F 7F movdqu xmm2/m128,xmm1		* see note about pre/post silicon
movdqu   macro   dst:req, src:req
        xmm_ld_st_pref    opc_Movdqu, dst, src, 0f3h
endm
e_movdqu textequ <movdqu>

;66 0F 73 /7 ib pslldq xmm1, xmm2/m128
pslldq  macro   dst:req, src:req
        xmm_imm1    opc_Pslldq,EXT7, dst, src 
endm
e_pslldq textequ <pslldq>

;66 0F 73 /3 ib	psrldq xmm1, imm8
psrldq	macro	dst:req, src:req
		xmm_imm1	opc_Psrldq, EXT3, dst, src
endm
e_psrldq textequ <psrldq>

;0F D4 /r		paddq mm1, mm2/m64
paddq		macro	dst:req, src:req
		mmx_op		opc_Paddq, dst, src
endm

;66 0F D4 /r	paddq xmm1, xmm2/m128
e_paddq		macro	dst:req, src:req
		xmm_op_66		opc_Paddq, dst, src
endm

;0F FB /r		psubq mm1, mm2/m64
psubq		macro	dst:req, src:req
		mmx_op		opc_Psubq, dst, src
endm

;66 0F FB /r	psubq xmm1, xmm2/m128
e_psubq		macro	dst:req, src:req
		xmm_op_66		opc_Psubq, dst, src
endm

;0F F4 /r		pmuludq mm1, mm2/m64
pmuludq		macro	dst:req, src:req
		mmx_op		opc_Pmuludq, dst, src
endm

;66 0F F4 /r	pmuludq xmm1, xmm2/m128
e_pmuludq	macro	dst:req, src:req
		xmm_op_66		opc_Pmuludq, dst, src
endm

; 0F AE /7 	clflush m8
clflush		macro	dst:req
	xmm_no_regs		opc_Clflush, dst, EXT7
endm

; 0F AE /5	lfence
lfence	macro
		xmm_op		opc_Lfence, EXT5, EXT0
endm

; 0F AE /6	mfence
mfence	macro
		xmm_op		opc_Lfence, EXT6, EXT0
endm

;F3 0F E6 /r  cvtdq2pd xmm1, xmm2/m64
cvtdq2pd	macro	dst:req, src:req
        xmm64_op_pref    opc_Cvtdq2pd, dst, src, 0F3h
endm

;66 0F 2D /r  cvtpd2pi mm, xmm/m128
cvtpd2pi	macro		dst:req, src:req
        xmm_to_mm_pref  opc_Cvtpd2pi, dst, src, 066h
endm

;F2 0F E6 /r  cvtpd2dq	xmm1, xmm2/m128
cvtpd2dq	macro		dst:req, src:req
		xmm_op_pref		opc_Cvtpd2dq, dst, src, 0F2h
endm

;66 0F 2A /r	cvtpi2pd	xmm, mm/m64
cvtpi2pd	macro		dst:req, src:req
		mm_to_xmm_pref	opc_Cvtpi2pd, dst, src, 066h
endm

;66 0F 2C /r	cvttpd2pi	mm, xmm/m128
cvttpd2pi	macro		dst:req, src:req
		xmm_to_mm_pref	opc_Cvttpd2pi, dst, src, 066h
endm

;66 0F E6 /r	cvttpd2dq	xmm1, xmm2/m128
cvttpd2dq	macro		dst:req, src:req
		xmm_op_pref		opc_Cvttpd2dq, dst, src, 066h
endm

;0F 5B /r		cvtdq2ps	xmm1, xmm2/m128
cvtdq2ps	macro		dst:req, src:req
		xmm_op			opc_Cvtdq2ps, dst, src
endm

;66 0F 5B /r	cvtps2dq	xmm1, xmm2/m128
cvtps2dq	macro		dst:req, src:req
		xmm_op_pref		opc_Cvtps2dq, dst, src, 066h
endm

;F3 0F 5B /r	cvttps2dq	xmm1, xmm2/m128
cvttps2dq	macro		dst:req, src:req
		xmm_op_pref		opc_Cvttps2dq, dst, src, 0F3h
endm

;F2 0F D6 /r	movdq2q		mm, xmm
movdq2q		macro		dst:req, src:req
		xmm2mm_reg_pref	opc_Movdq2q, dst, src, 0F2h
endm		

;F3 0F D6 /r	movq2dq		xmm, mm
movq2dq		macro		dst:req, src:req
		mm2xmm_reg_pref	opc_Movq2dq, dst, src, 0F3h
endm

;0F D6 /r		movq xmm1,xmm2/m64		*movq xmm1,xmm2
;66 0F D6 /r	movq xmm2/m64, xmm1
e_movq		macro	dst:req, src:req
		xmm_movq		opc_Movq, dst, src, 0F3h, 066h
endm

;F3 90			pause
pause		macro
		xmm_two_byte 0f3h, 90h
endm

;F3 C3 /r
movnti		macro	dst:req, src:req
		xmm_r32_mem opc_Movnti, dst, src
endm
