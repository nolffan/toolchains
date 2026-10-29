#pragma once
#ifndef _HintSizes
#define _HintSizes
//
//	$RCSfile  :$
//	$Source   :$
//	$Author   :$
//	$Revision :$
//	$Date     :$
//
//	Author:		 Socrates
//	Description: Int/Pointer type size definitions.  Use these types when
//				 you want to use pointers as int's and freely move between
//				 the two representations.  eg. This chunk of code:
//
//				 	TintPtrSz	x;
//				 	switch( getAnIntPointer( &x ) ) {
//				 		case 0: ((Tclass0 *)x)->callAMember();	break;
//				 		case 1: ((Tclass1 *)x)->callAMember();	break;
//				 		case 2: ((Tclass2 *)x)->callAMember();	break;
//				 		default:((TclassD *)x)->callAMember();	break;
//				 	}
//
//-
// Copyright (C) 1999-2000 Alias | Wavefront, Inc.
//
// These coded instructions, statements and computer programs contain
// unpublished information proprietary to Alias Research, Inc. and
// are protected by the Canadian and US federal copyright law. They
// may not be disclosed to third parties or copied or duplicated, in
// whole or in part, without prior written consent of
// Alias Research Inc.
//
// Unpublished-rights reserved under the Copyright Laws of
// the United States.
//+

#ifdef _WIN64
	typedef __int64 TintPtrSz;
	typedef __int64 TlongPtrSz;
	typedef unsigned __int64 TuintPtrSz;
	typedef unsigned __int64 TulongPtrSz;
#elif  _WIN32
	typedef signed	 __int64	Tint64;
	typedef unsigned __int64	TuInt64;
	typedef unsigned short		ushort;
// VC 5.0 do not define these types so we must - VC 6.0 does this already
#	if (_MSC_VER > 1100) // VC 6.0 or later 
#		include <basetsd.h>
		typedef INT_PTR		TintPtrSz;
		typedef UINT_PTR	TuintPtrSz;
		typedef INT_PTR		TlongPtrSz;
		typedef UINT_PTR	TulongPtrSz;
#	else
		typedef int				INT_PTR,	*PINT_PTR;
		typedef unsigned int	UINT_PTR,	*PUINT_PTR;
		typedef long			LONG_PTR,	*PLONG_PTR;
		typedef unsigned long	ULONG_PTR,	*PULONG_PTR;
		typedef int				TintPtrSz;
		typedef long			TlongPtrSz;
		typedef unsigned int	TuintPtrSz;
		typedef unsigned long	TulongPtrSz;
#	endif // (_MSC_VER > 1100)
#else // !_WIN32
	typedef signed	 long long	Tint64;
	typedef unsigned long long	TuInt64;
	typedef long TintPtrSz;
	typedef long TlongPtrSz;
	typedef unsigned long TuintPtrSz;
	typedef unsigned long TulongPtrSz;
#endif //_WIN32

#endif /* _HintSizes */
