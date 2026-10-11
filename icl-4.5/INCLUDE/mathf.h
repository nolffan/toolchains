/**
*** Copyright (C) 1985-2000 Intel Corporation.  All rights reserved.
***
*** The information and source code contained herein is the exclusive
*** property of Intel Corporation and may not be disclosed, examined
*** or reproduced in whole or in part without explicit written authorization
*** from the company.
***
*** static char sccs_id[] = "@(#)mathf.h	1.3.1.2 01/17/00 09:26:21";
**/

/* Nearest integer, absolute value, etc. */

float  __cdecl ceilf( float );
float  __cdecl fabsf( float );
float  __cdecl floorf( float );
float  __cdecl fmodf( float , float );
float  __cdecl rintf( float );
float  __cdecl hypotf(float, float);

/* Power functions */
float  __cdecl powf( float , float );
float  __cdecl sqrtf( float );

/* Exponential and logarithmic functions */
float  __cdecl expf( float );
float  __cdecl logf( float );
float  __cdecl log10f( float );

/* Trigonometric functions */

float  __cdecl acosf( float );
float  __cdecl asinf( float );
float  __cdecl atanf( float );
float  __cdecl cosf( float );
float  __cdecl sinf( float );
float  __cdecl tanf( float );

/* Hyperbolic functions */
float  __cdecl coshf( float );
float  __cdecl sinhf( float );
float  __cdecl tanhf( float );
