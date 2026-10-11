/**
*** Copyright (C) 1985-2005 Intel Corporation.  All rights reserved.
***
*** The information and source code contained herein is the exclusive
*** property of Intel Corporation and may not be disclosed, examined
*** or reproduced in whole or in part without explicit written authorization
*** from the company.
***
**/

#ifndef _IA32INTRIN_H_INCLUDED
#define _IA32INTRIN_H_INCLUDED

#include <pmmintrin.h>

/* Implement RDTSC and RDPMC */
extern __int64 _rdtsc(void);
extern __int64 _rdpmc(int);

/* Implements BSWAP */
extern int _bswap(int);

/* Implement BSR and BSF */
extern int _bit_scan_forward(int);
extern int _bit_scan_reverse(int);

/* Implements a 32-bit popcount */
extern int _popcnt32(int);

#endif /* _IA32INTRIN_H_INCLUDED */
