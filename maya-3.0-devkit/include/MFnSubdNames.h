#pragma once
#ifndef _MFnSubdNames
#define _MFnSubdNames
//
// *****************************************************************************
//
// Copyright (C) 1999-2000 Alias|Wavefront Inc.
//
// These coded instructions, statements and computer programs contain
// unpublished information proprietary to Alias|Wavefront Inc. and are 
// protected by Canadian and US federal copyright laws. They may not be 
// disclosed to third parties or copied or duplicated, in whole or in part, 
// without prior written consent of Alias|Wavefront Inc.
//
// Unpublished-rights reserved under the Copyright Laws of the United States.
//
// *****************************************************************************
//
// CLASS:    MFnSubdNames
//
// *****************************************************************************
//
// CLASS DESCRIPTION (MFnSubdNames)
//
//	The names (ids) utilities for the hierarchical subdivision surfaces
//
// *****************************************************************************

#if defined __cplusplus

// *****************************************************************************

// INCLUDED HEADER FILES

#include <maya/MStatus.h>
#include <maya/MTypes.h>

// *****************************************************************************

// *****************************************************************************

// CLASS DECLARATION (MFnSubdNames)

/**

*/
#ifdef _WIN32
#pragma warning(disable: 4522)
#endif // _WIN32

class OPENMAYA_EXPORT MFnSubdNames
{
public:
	static long		base( MUint64 );
	static long 	first( MUint64 );
	static long 	level( MUint64 );
	static long 	path( MUint64 );
	static long 	corner( MUint64 );

	static MStatus	fromMUint64( MUint64 id, long& base, long& first,
							   long& level, long& path, long& corner );
	static MStatus	toMUint64( MUint64& id, long base, long first,
							   long level, long path, long corner );

	static MUint64	baseFaceId( MUint64 );
	static long		baseFaceIndex( MUint64 );
	static MUint64	levelOneFaceId( MUint64 );
	static long		levelOneFaceAsLong( MUint64 );

	static MUint64	levelOneFaceIdFromLong( long );
	static MUint64	baseFaceIdFromLong( long );

	static MUint64	parentFaceId( MUint64 );

	static MStatus	nonBaseFaceVertices( MUint64,
										 MUint64&, MUint64&,
										 MUint64&, MUint64& );
	static MStatus	nonBaseFaceEdges( MUint64,
									  MUint64&, MUint64&,
									  MUint64&, MUint64& );


	static MStatus	fromSelectionIndices( MUint64& id,
										  unsigned long firstIndex,
										  unsigned long secondIndex );

	static MStatus	toSelectionIndices( MUint64 id,
										unsigned long& firstIndex,
										unsigned long& secondIndex );

public:
	MFnSubdNames();
	~MFnSubdNames();

private:
	static const char* className();
};

#ifdef _WIN32
#pragma warning(default: 4522)
#endif // _WIN32

// *****************************************************************************
#endif /* __cplusplus */
#endif /* _MFnSubd */
