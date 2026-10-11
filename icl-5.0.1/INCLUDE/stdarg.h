/**
*** Copyright (C) 1985-2000 Intel Corporation.  All rights reserved.
***
*** The information and source code contained herein is the exclusive
*** property of Intel Corporation and may not be disclosed, examined
*** or reproduced in whole or in part without explicit written authorization
*** from the company.
***
*** static char cvs_id[] = "$Id: stdarg.h,v 1.8 2001/01/05 21:11:11 mtokugaw Exp $";
**/

/*
 * stdarg.h
 *
 * Replacement header for standard stdarg.h
 *
 * This replacement is necessary to support the 16 byte
 * aligned parameters.
 *
 * 18 Sept 1997 [kbs]
 */

#ifndef _INC_STDARG
#define _INC_STDARG


#ifdef __ICL
#define __builtin_alignof(t) __ALIGNOF__(t)
#else
#define __builtin_alignof(t) (4)
#endif

/*
 * The following macro computes the size actually occupied in
 * the parameter block by a parameter of the same type as t.
 * All parameter sizes are really multiples of int size in a
 * parameter block.
 */
#define _PARMSIZE(t) \
    ((sizeof(t) + (sizeof(int)-1)) & ~(sizeof(int) -1))

/*
 * The following macro computes the alignment in the parameter block
 * of a parameter of type t.  Any type that doesn't require 16 byte
 * alignment, only gets 4 byte alignment.
 */
#define _PARMALIGN(t) \
    (__builtin_alignof(t) < 16 ? 4 : 16)

/*
 * The following macro computes the base address of a parameter of type
 * t given the address of the first byte after the previous parameter.
 */
#define _PARMADDR(fb_addr,t) \
    ((char *)((((int)fb_addr) + (_PARMALIGN(t)-1)) & ~(_PARMALIGN(t)-1)))

typedef char * va_list;

#define va_start(ap,anchor) \
    ((ap)  = (va_list)&anchor + sizeof(anchor))

#define va_arg(ap,t) \
    (((t *)(ap = (va_list)(_PARMADDR(ap,t) + sizeof(t))))[-1])

#define va_end(ap) \
    ( ap = 0 )

#endif	/* _INC_STDARG */
