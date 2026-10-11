/* file: fenv.h */

/*
** Copyright  (C) 1985-2005 Intel Corporation. All rights reserved.
**
** The information and source code contained herein is the exclusive property
** of Intel Corporation and may not be disclosed, examined, or reproduced in
** whole or in part without explicit written authorization from the Company.
*/

/* 
    fenv.h - C99 floating-point environment control functions 
*/

/* Include_next should be before guard macros in order to at last reach system header */
#if defined(__PURE_SYS_C99_HEADERS__) && !(defined(_WIN32) || defined(_WIN64))
# include_next <fenv.h> /* utilize sys header */
#elif !defined(__PURE_INTEL_C99_HEADERS__) && !(defined(_WIN32) || defined(_WIN64))
# include_next <fenv.h> /* utilize and expand sys header */

#ifndef __FENV_H_INCLUDED
#define __FENV_H_INCLUDED


/* Re-define FE_DFL_ENV for Itanium(R), add FE_DENORMAL support for others */

#if defined(__ECL) || defined(__ECC)            /* Itanium(R) */

/* Default 64-bit Floating Point Status Register   */
#if defined (__linux__)
static const fenv_t __default_fpsr = 0x0009804c0270033fuL;  
#else
static const fenv_t __default_fpsr = 0x0009804c0270033fui64;  
#endif

#undef  FE_DFL_ENV
#define FE_DFL_ENV &__default_fpsr	

#endif /* Itanium(R) */

#ifndef FE_UNNORMAL
#define FE_UNNORMAL     2
#endif
#ifndef FE_DENORMAL     
#define FE_DENORMAL     2
#endif

/*
** The macro FE_ALL_EXCEPT is simply the bitwise OR of all floating-point
** exception macros defined by the implementation.
*/
#undef  FE_ALL_EXCEPT
#define FE_ALL_EXCEPT  (FE_INVALID | FE_UNNORMAL | FE_DIVBYZERO | FE_OVERFLOW | FE_UNDERFLOW | FE_INEXACT)

#endif /* __FENV_H_INCLUDED */

#else /* pure intel header */

#ifndef __FENV_H_INCLUDED
#define __FENV_H_INCLUDED

/* Check usage correctness */

#ifndef __INTEL_COMPILER
# error "This <fenv.h> is for use with only the Intel compilers!"
#endif

#if defined(__cplusplus)    /* C linkage */
extern "C" {
#endif

#if defined(__ECL) || defined(__ECC)            /* Itanium(R) */

/* Default 64-bit Floating Point Status Register   */
#ifdef __linux__
typedef unsigned    long fexcept_t;
#else
typedef unsigned __int64 fexcept_t;
#endif
/*
   fexcept_t	64-bit value representing the floating-point status 
		flags; the associated 6 bits are
                Bit 0:  Invalid  Exception (operand based) 
                Bit 1:  Unnormal Operand Exception (operand based) 
                Bit 2:  Divide by Zero Exception (operand based) 
                Bit 3:  Overflow Exception (result based)
                Bit 4:  Underflow Exception (result based)
                Bit 5:  Inexact (Imprecise) Exception (result based)
                Other High-order Bits Should Be 0 
*/

/*
   fenv_t       64-bit value representing all status and control bits in 
                the fpsr.
*/
#ifdef __linux__
typedef unsigned    long fenv_t;
#else
typedef unsigned __int64 fenv_t;
#endif

/* Default 64-bit Floating Point Status Register   */
#ifdef __linux__
static const fenv_t __default_fpsr = 0x0009804c0270033fuL;  
#else
static const fenv_t __default_fpsr = 0x0009804c0270033fui64;  
#endif
#define FE_DFL_ENV &__default_fpsr	

/* 
   C99 Rounding Mode Bit-Masks 

   These macros specify the IEEE rounding modes that are supported and may 
   be manipulated on this architecture. The default rounding mode is
   FE_TONEAREST. 
*/
enum {
    FE_TONEAREST  = 0,	
    FE_DOWNWARD   = 1,
    FE_UPWARD     = 2,
    FE_TOWARDZERO = 3
};

#else                                           /* other than Itanium(R) */

/*
** The type fexcept_t represents the floating-point status flags collectively,
** including any status the implementation associates with the flags.
*/
typedef unsigned short int fexcept_t;

/*
** The type fenv_t represents the entire floating-point environment.
**
** This structure corresponds to the layout of the block written by the `fstenv'.
*/
#pragma pack(1)
typedef struct {
    unsigned short int cw;
    unsigned short int empty1;
    unsigned short int sw;
    unsigned short int empty2[11];
#if defined(_M_X64) || defined(__x86_64__)    /* Intel(R) EM64T */
    unsigned int csr;
#endif
} fenv_t;
#pragma pack()

/*
** The macro FE_DFL_ENV represents the default floating-point environment.
*/
#define FE_DFL_ENV     ((__const fenv_t *) -1)

/*
** C99 definitions for bits representing the rounding direction.
**
** The bit patterns of the FPU control word are used as the values
** for the appropriate macros.
*/
enum {
    FE_TONEAREST  = 0,	
    FE_DOWNWARD   = 0x400,
    FE_UPWARD     = 0x800,
    FE_TOWARDZERO = 0xc00
};

#endif                                          /* Platform dependent */


#define FE_TONEAREST    FE_TONEAREST
#define FE_DOWNWARD     FE_DOWNWARD
#define FE_UPWARD       FE_UPWARD
#define FE_TOWARDZERO   FE_TOWARDZERO

/*
** C99 definitions for bits representing the FP exception.
**
** The bitwise OR of these macros can be used to analyze multiple
** exception bits all at once.
*/  
enum {
    FE_INVALID    = 1,
#define FE_INVALID      FE_INVALID
    FE_UNNORMAL   = 2,
#define FE_UNNORMAL     FE_UNNORMAL
#define FE_DENORMAL     FE_UNNORMAL
    FE_DIVBYZERO  = 4,
#define FE_DIVBYZERO    FE_DIVBYZERO
    FE_OVERFLOW   = 8,
#define FE_OVERFLOW     FE_OVERFLOW
    FE_UNDERFLOW  = 16,
#define FE_UNDERFLOW    FE_UNDERFLOW
    FE_INEXACT    = 32,
#define FE_INEXACT      FE_INEXACT
};

/*
** The macro FE_ALL_EXCEPT is simply the bitwise OR of all floating-point
** exception macros defined by the implementation.
*/
#define FE_ALL_EXCEPT  (FE_INVALID | FE_UNNORMAL | FE_DIVBYZERO | FE_OVERFLOW | FE_UNDERFLOW | FE_INEXACT)
#define FE_NO_EXCEPT   0


#if defined(_DLL) && (defined(_WIN32) || defined(_WIN64))   /* Windows DLL */
# define _FENV_PUBAPI __declspec(dllimport) __cdecl
#elif defined(__linux__)                          /* Linux */
# define _FENV_PUBAPI                             /* do not change this line! */
#else                                             /* Windows static */
# define _FENV_PUBAPI __cdecl
#endif

/* 
   C99 Floating-point Exception Functions  

   These functions allow a user to query or update the status field 0 (s0) 
   exception sticky bits. feraiseexcept() will set the inexact flag on 
   both overflow and underflow.
*/
extern void _FENV_PUBAPI feclearexcept (int excepts) ;
extern void _FENV_PUBAPI fegetexceptflag (fexcept_t *flagp, int excepts) ;
extern void _FENV_PUBAPI feraiseexcept (int excepts) ;
extern void _FENV_PUBAPI fesetexceptflag (const fexcept_t *flagp, int excepts) ;
extern int  _FENV_PUBAPI fetestexcept (int excepts) ;

/* 
   C99 Rounding Control Functions 
 
   These functions allow a user to manipulate the rounding control bits.
   Any change in rounding mode affects the rounding control of status 
   field 0 (s0) , status field 2 (s2), and status field 3 (s3). The 
   software conventions mandate that all control bits in these status 
   field remain consistent, that is except for the trap disable bit.  
*/
extern int _FENV_PUBAPI fegetround (void) ;
extern int _FENV_PUBAPI fesetround (int round) ;

/* 
   C99 FP Environment Functions  

   These functions allow a user to update or read the entire 64-bit 
   floating-point status register (fpsr).
*/  
extern void _FENV_PUBAPI fegetenv (fenv_t *envp) ;
extern int  _FENV_PUBAPI feholdexcept (fenv_t *envp) ;
extern void _FENV_PUBAPI fesetenv (const fenv_t *envp) ;
extern void _FENV_PUBAPI feupdateenv (const fenv_t *envp) ;

/* 
   Additional Support Functions 

   These functions allow a user to manipulate the trap enable or disable bits.  

*/
extern int _FENV_PUBAPI fegetexcept (void) ;
extern int _FENV_PUBAPI feenableexcept (int excepts) ;
extern int _FENV_PUBAPI fedisableexcept (int excepts) ;

#undef _FENV_PUBAPI

#if defined(__cplusplus)    /* end C linkage */
}
#endif

#endif  /* __FENV_H_INCLUDED */
#endif  /* usage of sys headers */
