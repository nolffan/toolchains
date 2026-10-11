/*                                                                                */
/*   Copyright  (C) 2005 Intel Corporation.  All rights reserved.                 */
/*                                                                                */
/*   The information and source code contained herein is the exclusive property   */
/*   of Intel Corporation and may not be disclosed, examined, or reproduced in    */
/*   whole or in part without explicit written authorization from the Company.    */
/*                                                                                */
/*                                                                                */


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0364 */
/* at Thu Aug 11 21:46:49 2005
 */
/* Compiler settings for AvLib.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AvLib_h__
#define __AvLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAvFormat_FWD_DEFINED__
#define __IAvFormat_FWD_DEFINED__
typedef interface IAvFormat IAvFormat;
#endif 	/* __IAvFormat_FWD_DEFINED__ */


#ifndef __IAvContext_FWD_DEFINED__
#define __IAvContext_FWD_DEFINED__
typedef interface IAvContext IAvContext;
#endif 	/* __IAvContext_FWD_DEFINED__ */


#ifndef __IAvCollection_FWD_DEFINED__
#define __IAvCollection_FWD_DEFINED__
typedef interface IAvCollection IAvCollection;
#endif 	/* __IAvCollection_FWD_DEFINED__ */


#ifndef __IAvType_FWD_DEFINED__
#define __IAvType_FWD_DEFINED__
typedef interface IAvType IAvType;
#endif 	/* __IAvType_FWD_DEFINED__ */


#ifndef __IAvSimpleType_FWD_DEFINED__
#define __IAvSimpleType_FWD_DEFINED__
typedef interface IAvSimpleType IAvSimpleType;
#endif 	/* __IAvSimpleType_FWD_DEFINED__ */


#ifndef __IAvCompoundType_FWD_DEFINED__
#define __IAvCompoundType_FWD_DEFINED__
typedef interface IAvCompoundType IAvCompoundType;
#endif 	/* __IAvCompoundType_FWD_DEFINED__ */


#ifndef __IAvDataspace_FWD_DEFINED__
#define __IAvDataspace_FWD_DEFINED__
typedef interface IAvDataspace IAvDataspace;
#endif 	/* __IAvDataspace_FWD_DEFINED__ */


#ifndef __IAvSection_FWD_DEFINED__
#define __IAvSection_FWD_DEFINED__
typedef interface IAvSection IAvSection;
#endif 	/* __IAvSection_FWD_DEFINED__ */


#ifndef __IAvSections_FWD_DEFINED__
#define __IAvSections_FWD_DEFINED__
typedef interface IAvSections IAvSections;
#endif 	/* __IAvSections_FWD_DEFINED__ */


#ifndef __IAvData_FWD_DEFINED__
#define __IAvData_FWD_DEFINED__
typedef interface IAvData IAvData;
#endif 	/* __IAvData_FWD_DEFINED__ */


#ifndef __IAvDataPtr_FWD_DEFINED__
#define __IAvDataPtr_FWD_DEFINED__
typedef interface IAvDataPtr IAvDataPtr;
#endif 	/* __IAvDataPtr_FWD_DEFINED__ */


#ifndef __IAvDataMem_FWD_DEFINED__
#define __IAvDataMem_FWD_DEFINED__
typedef interface IAvDataMem IAvDataMem;
#endif 	/* __IAvDataMem_FWD_DEFINED__ */


#ifndef __IAvDataset_FWD_DEFINED__
#define __IAvDataset_FWD_DEFINED__
typedef interface IAvDataset IAvDataset;
#endif 	/* __IAvDataset_FWD_DEFINED__ */


#ifndef __IAvDHLink_FWD_DEFINED__
#define __IAvDHLink_FWD_DEFINED__
typedef interface IAvDHLink IAvDHLink;
#endif 	/* __IAvDHLink_FWD_DEFINED__ */


#ifndef __IAvDatasets_FWD_DEFINED__
#define __IAvDatasets_FWD_DEFINED__
typedef interface IAvDatasets IAvDatasets;
#endif 	/* __IAvDatasets_FWD_DEFINED__ */


#ifndef __IAvAttribute_FWD_DEFINED__
#define __IAvAttribute_FWD_DEFINED__
typedef interface IAvAttribute IAvAttribute;
#endif 	/* __IAvAttribute_FWD_DEFINED__ */


#ifndef __IAvAttributes_FWD_DEFINED__
#define __IAvAttributes_FWD_DEFINED__
typedef interface IAvAttributes IAvAttributes;
#endif 	/* __IAvAttributes_FWD_DEFINED__ */


#ifndef __IAvPage_FWD_DEFINED__
#define __IAvPage_FWD_DEFINED__
typedef interface IAvPage IAvPage;
#endif 	/* __IAvPage_FWD_DEFINED__ */


#ifndef __IAvPages_FWD_DEFINED__
#define __IAvPages_FWD_DEFINED__
typedef interface IAvPages IAvPages;
#endif 	/* __IAvPages_FWD_DEFINED__ */


#ifndef __IAvPosition_FWD_DEFINED__
#define __IAvPosition_FWD_DEFINED__
typedef interface IAvPosition IAvPosition;
#endif 	/* __IAvPosition_FWD_DEFINED__ */


#ifndef __IAvTransform_FWD_DEFINED__
#define __IAvTransform_FWD_DEFINED__
typedef interface IAvTransform IAvTransform;
#endif 	/* __IAvTransform_FWD_DEFINED__ */


#ifndef __IAvBorder_FWD_DEFINED__
#define __IAvBorder_FWD_DEFINED__
typedef interface IAvBorder IAvBorder;
#endif 	/* __IAvBorder_FWD_DEFINED__ */


#ifndef __IAvColor_FWD_DEFINED__
#define __IAvColor_FWD_DEFINED__
typedef interface IAvColor IAvColor;
#endif 	/* __IAvColor_FWD_DEFINED__ */


#ifndef __IAvGraphState_FWD_DEFINED__
#define __IAvGraphState_FWD_DEFINED__
typedef interface IAvGraphState IAvGraphState;
#endif 	/* __IAvGraphState_FWD_DEFINED__ */


#ifndef __IAvPlotColor_FWD_DEFINED__
#define __IAvPlotColor_FWD_DEFINED__
typedef interface IAvPlotColor IAvPlotColor;
#endif 	/* __IAvPlotColor_FWD_DEFINED__ */


#ifndef __IAvPlotMarker_FWD_DEFINED__
#define __IAvPlotMarker_FWD_DEFINED__
typedef interface IAvPlotMarker IAvPlotMarker;
#endif 	/* __IAvPlotMarker_FWD_DEFINED__ */


#ifndef __IAvPlotGrid_FWD_DEFINED__
#define __IAvPlotGrid_FWD_DEFINED__
typedef interface IAvPlotGrid IAvPlotGrid;
#endif 	/* __IAvPlotGrid_FWD_DEFINED__ */


#ifndef __IAvPlotLabel_FWD_DEFINED__
#define __IAvPlotLabel_FWD_DEFINED__
typedef interface IAvPlotLabel IAvPlotLabel;
#endif 	/* __IAvPlotLabel_FWD_DEFINED__ */


#ifndef __IAvPlotSurface_FWD_DEFINED__
#define __IAvPlotSurface_FWD_DEFINED__
typedef interface IAvPlotSurface IAvPlotSurface;
#endif 	/* __IAvPlotSurface_FWD_DEFINED__ */


#ifndef __IAvPlot_FWD_DEFINED__
#define __IAvPlot_FWD_DEFINED__
typedef interface IAvPlot IAvPlot;
#endif 	/* __IAvPlot_FWD_DEFINED__ */


#ifndef __IAvPlots_FWD_DEFINED__
#define __IAvPlots_FWD_DEFINED__
typedef interface IAvPlots IAvPlots;
#endif 	/* __IAvPlots_FWD_DEFINED__ */


#ifndef __IAvAxes_FWD_DEFINED__
#define __IAvAxes_FWD_DEFINED__
typedef interface IAvAxes IAvAxes;
#endif 	/* __IAvAxes_FWD_DEFINED__ */


#ifndef __IAvCaption_FWD_DEFINED__
#define __IAvCaption_FWD_DEFINED__
typedef interface IAvCaption IAvCaption;
#endif 	/* __IAvCaption_FWD_DEFINED__ */


#ifndef __IAvCaptions_FWD_DEFINED__
#define __IAvCaptions_FWD_DEFINED__
typedef interface IAvCaptions IAvCaptions;
#endif 	/* __IAvCaptions_FWD_DEFINED__ */


#ifndef __IAvGraphs_FWD_DEFINED__
#define __IAvGraphs_FWD_DEFINED__
typedef interface IAvGraphs IAvGraphs;
#endif 	/* __IAvGraphs_FWD_DEFINED__ */


#ifndef __IAvGraph_FWD_DEFINED__
#define __IAvGraph_FWD_DEFINED__
typedef interface IAvGraph IAvGraph;
#endif 	/* __IAvGraph_FWD_DEFINED__ */


#ifndef __IAvGraph2D_FWD_DEFINED__
#define __IAvGraph2D_FWD_DEFINED__
typedef interface IAvGraph2D IAvGraph2D;
#endif 	/* __IAvGraph2D_FWD_DEFINED__ */


#ifndef __IAvCamera_FWD_DEFINED__
#define __IAvCamera_FWD_DEFINED__
typedef interface IAvCamera IAvCamera;
#endif 	/* __IAvCamera_FWD_DEFINED__ */


#ifndef __IAvLight_FWD_DEFINED__
#define __IAvLight_FWD_DEFINED__
typedef interface IAvLight IAvLight;
#endif 	/* __IAvLight_FWD_DEFINED__ */


#ifndef __IAvLights_FWD_DEFINED__
#define __IAvLights_FWD_DEFINED__
typedef interface IAvLights IAvLights;
#endif 	/* __IAvLights_FWD_DEFINED__ */


#ifndef __IAvEnvironment_FWD_DEFINED__
#define __IAvEnvironment_FWD_DEFINED__
typedef interface IAvEnvironment IAvEnvironment;
#endif 	/* __IAvEnvironment_FWD_DEFINED__ */


#ifndef __IAvGraph3D_FWD_DEFINED__
#define __IAvGraph3D_FWD_DEFINED__
typedef interface IAvGraph3D IAvGraph3D;
#endif 	/* __IAvGraph3D_FWD_DEFINED__ */


#ifndef __IAvAxisTickmark_FWD_DEFINED__
#define __IAvAxisTickmark_FWD_DEFINED__
typedef interface IAvAxisTickmark IAvAxisTickmark;
#endif 	/* __IAvAxisTickmark_FWD_DEFINED__ */


#ifndef __IAvAxisScale_FWD_DEFINED__
#define __IAvAxisScale_FWD_DEFINED__
typedef interface IAvAxisScale IAvAxisScale;
#endif 	/* __IAvAxisScale_FWD_DEFINED__ */


#ifndef __IAvAxisLabel_FWD_DEFINED__
#define __IAvAxisLabel_FWD_DEFINED__
typedef interface IAvAxisLabel IAvAxisLabel;
#endif 	/* __IAvAxisLabel_FWD_DEFINED__ */


#ifndef __IAvAxis_FWD_DEFINED__
#define __IAvAxis_FWD_DEFINED__
typedef interface IAvAxis IAvAxis;
#endif 	/* __IAvAxis_FWD_DEFINED__ */


#ifndef __IAvXYPlot_FWD_DEFINED__
#define __IAvXYPlot_FWD_DEFINED__
typedef interface IAvXYPlot IAvXYPlot;
#endif 	/* __IAvXYPlot_FWD_DEFINED__ */


#ifndef __IAvVector2D_FWD_DEFINED__
#define __IAvVector2D_FWD_DEFINED__
typedef interface IAvVector2D IAvVector2D;
#endif 	/* __IAvVector2D_FWD_DEFINED__ */


#ifndef __IAvContour_FWD_DEFINED__
#define __IAvContour_FWD_DEFINED__
typedef interface IAvContour IAvContour;
#endif 	/* __IAvContour_FWD_DEFINED__ */


#ifndef __IAvImage_FWD_DEFINED__
#define __IAvImage_FWD_DEFINED__
typedef interface IAvImage IAvImage;
#endif 	/* __IAvImage_FWD_DEFINED__ */


#ifndef __IAvHeightPlot_FWD_DEFINED__
#define __IAvHeightPlot_FWD_DEFINED__
typedef interface IAvHeightPlot IAvHeightPlot;
#endif 	/* __IAvHeightPlot_FWD_DEFINED__ */


#ifndef __IAvXYZPlot_FWD_DEFINED__
#define __IAvXYZPlot_FWD_DEFINED__
typedef interface IAvXYZPlot IAvXYZPlot;
#endif 	/* __IAvXYZPlot_FWD_DEFINED__ */


#ifndef __IAvQuadMesh_FWD_DEFINED__
#define __IAvQuadMesh_FWD_DEFINED__
typedef interface IAvQuadMesh IAvQuadMesh;
#endif 	/* __IAvQuadMesh_FWD_DEFINED__ */


#ifndef __IAvPolyList_FWD_DEFINED__
#define __IAvPolyList_FWD_DEFINED__
typedef interface IAvPolyList IAvPolyList;
#endif 	/* __IAvPolyList_FWD_DEFINED__ */


#ifndef __IAvGroups_FWD_DEFINED__
#define __IAvGroups_FWD_DEFINED__
typedef interface IAvGroups IAvGroups;
#endif 	/* __IAvGroups_FWD_DEFINED__ */


#ifndef __IAvGroup_FWD_DEFINED__
#define __IAvGroup_FWD_DEFINED__
typedef interface IAvGroup IAvGroup;
#endif 	/* __IAvGroup_FWD_DEFINED__ */


#ifndef __IAvGHLink_FWD_DEFINED__
#define __IAvGHLink_FWD_DEFINED__
typedef interface IAvGHLink IAvGHLink;
#endif 	/* __IAvGHLink_FWD_DEFINED__ */


#ifndef __IAvSoftLinks_FWD_DEFINED__
#define __IAvSoftLinks_FWD_DEFINED__
typedef interface IAvSoftLinks IAvSoftLinks;
#endif 	/* __IAvSoftLinks_FWD_DEFINED__ */


#ifndef __IAvSoftLink_FWD_DEFINED__
#define __IAvSoftLink_FWD_DEFINED__
typedef interface IAvSoftLink IAvSoftLink;
#endif 	/* __IAvSoftLink_FWD_DEFINED__ */


#ifndef __IAvFileLoader_FWD_DEFINED__
#define __IAvFileLoader_FWD_DEFINED__
typedef interface IAvFileLoader IAvFileLoader;
#endif 	/* __IAvFileLoader_FWD_DEFINED__ */


#ifndef __IAvGenerator_FWD_DEFINED__
#define __IAvGenerator_FWD_DEFINED__
typedef interface IAvGenerator IAvGenerator;
#endif 	/* __IAvGenerator_FWD_DEFINED__ */


#ifndef __IAvFilter_FWD_DEFINED__
#define __IAvFilter_FWD_DEFINED__
typedef interface IAvFilter IAvFilter;
#endif 	/* __IAvFilter_FWD_DEFINED__ */


#ifndef __IAvImageSave_FWD_DEFINED__
#define __IAvImageSave_FWD_DEFINED__
typedef interface IAvImageSave IAvImageSave;
#endif 	/* __IAvImageSave_FWD_DEFINED__ */


#ifndef __IAvAttribute_FWD_DEFINED__
#define __IAvAttribute_FWD_DEFINED__
typedef interface IAvAttribute IAvAttribute;
#endif 	/* __IAvAttribute_FWD_DEFINED__ */


#ifndef __IAvAttributes_FWD_DEFINED__
#define __IAvAttributes_FWD_DEFINED__
typedef interface IAvAttributes IAvAttributes;
#endif 	/* __IAvAttributes_FWD_DEFINED__ */


#ifndef __IAvAxes_FWD_DEFINED__
#define __IAvAxes_FWD_DEFINED__
typedef interface IAvAxes IAvAxes;
#endif 	/* __IAvAxes_FWD_DEFINED__ */


#ifndef __IAvAxis_FWD_DEFINED__
#define __IAvAxis_FWD_DEFINED__
typedef interface IAvAxis IAvAxis;
#endif 	/* __IAvAxis_FWD_DEFINED__ */


#ifndef __IAvAxisLabel_FWD_DEFINED__
#define __IAvAxisLabel_FWD_DEFINED__
typedef interface IAvAxisLabel IAvAxisLabel;
#endif 	/* __IAvAxisLabel_FWD_DEFINED__ */


#ifndef __IAvAxisScale_FWD_DEFINED__
#define __IAvAxisScale_FWD_DEFINED__
typedef interface IAvAxisScale IAvAxisScale;
#endif 	/* __IAvAxisScale_FWD_DEFINED__ */


#ifndef __IAvAxisTickmark_FWD_DEFINED__
#define __IAvAxisTickmark_FWD_DEFINED__
typedef interface IAvAxisTickmark IAvAxisTickmark;
#endif 	/* __IAvAxisTickmark_FWD_DEFINED__ */


#ifndef __IAvCamera_FWD_DEFINED__
#define __IAvCamera_FWD_DEFINED__
typedef interface IAvCamera IAvCamera;
#endif 	/* __IAvCamera_FWD_DEFINED__ */


#ifndef __IAvCaption_FWD_DEFINED__
#define __IAvCaption_FWD_DEFINED__
typedef interface IAvCaption IAvCaption;
#endif 	/* __IAvCaption_FWD_DEFINED__ */


#ifndef __IAvCaptions_FWD_DEFINED__
#define __IAvCaptions_FWD_DEFINED__
typedef interface IAvCaptions IAvCaptions;
#endif 	/* __IAvCaptions_FWD_DEFINED__ */


#ifndef __IAvColor_FWD_DEFINED__
#define __IAvColor_FWD_DEFINED__
typedef interface IAvColor IAvColor;
#endif 	/* __IAvColor_FWD_DEFINED__ */


#ifndef __IAvCompoundType_FWD_DEFINED__
#define __IAvCompoundType_FWD_DEFINED__
typedef interface IAvCompoundType IAvCompoundType;
#endif 	/* __IAvCompoundType_FWD_DEFINED__ */


#ifndef __IAvContext_FWD_DEFINED__
#define __IAvContext_FWD_DEFINED__
typedef interface IAvContext IAvContext;
#endif 	/* __IAvContext_FWD_DEFINED__ */


#ifndef __IAvContour_FWD_DEFINED__
#define __IAvContour_FWD_DEFINED__
typedef interface IAvContour IAvContour;
#endif 	/* __IAvContour_FWD_DEFINED__ */


#ifndef __IAvDataset_FWD_DEFINED__
#define __IAvDataset_FWD_DEFINED__
typedef interface IAvDataset IAvDataset;
#endif 	/* __IAvDataset_FWD_DEFINED__ */


#ifndef __IAvDatasets_FWD_DEFINED__
#define __IAvDatasets_FWD_DEFINED__
typedef interface IAvDatasets IAvDatasets;
#endif 	/* __IAvDatasets_FWD_DEFINED__ */


#ifndef __IAvDHLink_FWD_DEFINED__
#define __IAvDHLink_FWD_DEFINED__
typedef interface IAvDHLink IAvDHLink;
#endif 	/* __IAvDHLink_FWD_DEFINED__ */


#ifndef __IAvEnvironment_FWD_DEFINED__
#define __IAvEnvironment_FWD_DEFINED__
typedef interface IAvEnvironment IAvEnvironment;
#endif 	/* __IAvEnvironment_FWD_DEFINED__ */


#ifndef __IAvFilter_FWD_DEFINED__
#define __IAvFilter_FWD_DEFINED__
typedef interface IAvFilter IAvFilter;
#endif 	/* __IAvFilter_FWD_DEFINED__ */


#ifndef __IAvFormat_FWD_DEFINED__
#define __IAvFormat_FWD_DEFINED__
typedef interface IAvFormat IAvFormat;
#endif 	/* __IAvFormat_FWD_DEFINED__ */


#ifndef __IAvGenerator_FWD_DEFINED__
#define __IAvGenerator_FWD_DEFINED__
typedef interface IAvGenerator IAvGenerator;
#endif 	/* __IAvGenerator_FWD_DEFINED__ */


#ifndef __IAvGHLink_FWD_DEFINED__
#define __IAvGHLink_FWD_DEFINED__
typedef interface IAvGHLink IAvGHLink;
#endif 	/* __IAvGHLink_FWD_DEFINED__ */


#ifndef __IAvGraphState_FWD_DEFINED__
#define __IAvGraphState_FWD_DEFINED__
typedef interface IAvGraphState IAvGraphState;
#endif 	/* __IAvGraphState_FWD_DEFINED__ */


#ifndef __IAvGraph2D_FWD_DEFINED__
#define __IAvGraph2D_FWD_DEFINED__
typedef interface IAvGraph2D IAvGraph2D;
#endif 	/* __IAvGraph2D_FWD_DEFINED__ */


#ifndef __IAvGraph3D_FWD_DEFINED__
#define __IAvGraph3D_FWD_DEFINED__
typedef interface IAvGraph3D IAvGraph3D;
#endif 	/* __IAvGraph3D_FWD_DEFINED__ */


#ifndef __IAvGraphs_FWD_DEFINED__
#define __IAvGraphs_FWD_DEFINED__
typedef interface IAvGraphs IAvGraphs;
#endif 	/* __IAvGraphs_FWD_DEFINED__ */


#ifndef __IAvGroups_FWD_DEFINED__
#define __IAvGroups_FWD_DEFINED__
typedef interface IAvGroups IAvGroups;
#endif 	/* __IAvGroups_FWD_DEFINED__ */


#ifndef __IAvHeightPlot_FWD_DEFINED__
#define __IAvHeightPlot_FWD_DEFINED__
typedef interface IAvHeightPlot IAvHeightPlot;
#endif 	/* __IAvHeightPlot_FWD_DEFINED__ */


#ifndef __IAvImage_FWD_DEFINED__
#define __IAvImage_FWD_DEFINED__
typedef interface IAvImage IAvImage;
#endif 	/* __IAvImage_FWD_DEFINED__ */


#ifndef __IAvLight_FWD_DEFINED__
#define __IAvLight_FWD_DEFINED__
typedef interface IAvLight IAvLight;
#endif 	/* __IAvLight_FWD_DEFINED__ */


#ifndef __IAvLights_FWD_DEFINED__
#define __IAvLights_FWD_DEFINED__
typedef interface IAvLights IAvLights;
#endif 	/* __IAvLights_FWD_DEFINED__ */


#ifndef __IAvPage_FWD_DEFINED__
#define __IAvPage_FWD_DEFINED__
typedef interface IAvPage IAvPage;
#endif 	/* __IAvPage_FWD_DEFINED__ */


#ifndef __IAvPages_FWD_DEFINED__
#define __IAvPages_FWD_DEFINED__
typedef interface IAvPages IAvPages;
#endif 	/* __IAvPages_FWD_DEFINED__ */


#ifndef __IAvPlot_FWD_DEFINED__
#define __IAvPlot_FWD_DEFINED__
typedef interface IAvPlot IAvPlot;
#endif 	/* __IAvPlot_FWD_DEFINED__ */


#ifndef __IAvPlotColor_FWD_DEFINED__
#define __IAvPlotColor_FWD_DEFINED__
typedef interface IAvPlotColor IAvPlotColor;
#endif 	/* __IAvPlotColor_FWD_DEFINED__ */


#ifndef __IAvPlotGrid_FWD_DEFINED__
#define __IAvPlotGrid_FWD_DEFINED__
typedef interface IAvPlotGrid IAvPlotGrid;
#endif 	/* __IAvPlotGrid_FWD_DEFINED__ */


#ifndef __IAvPlotLabel_FWD_DEFINED__
#define __IAvPlotLabel_FWD_DEFINED__
typedef interface IAvPlotLabel IAvPlotLabel;
#endif 	/* __IAvPlotLabel_FWD_DEFINED__ */


#ifndef __IAvPlotMarker_FWD_DEFINED__
#define __IAvPlotMarker_FWD_DEFINED__
typedef interface IAvPlotMarker IAvPlotMarker;
#endif 	/* __IAvPlotMarker_FWD_DEFINED__ */


#ifndef __IAvPlots_FWD_DEFINED__
#define __IAvPlots_FWD_DEFINED__
typedef interface IAvPlots IAvPlots;
#endif 	/* __IAvPlots_FWD_DEFINED__ */


#ifndef __IAvPosition_FWD_DEFINED__
#define __IAvPosition_FWD_DEFINED__
typedef interface IAvPosition IAvPosition;
#endif 	/* __IAvPosition_FWD_DEFINED__ */


#ifndef __IAvQuadMesh_FWD_DEFINED__
#define __IAvQuadMesh_FWD_DEFINED__
typedef interface IAvQuadMesh IAvQuadMesh;
#endif 	/* __IAvQuadMesh_FWD_DEFINED__ */


#ifndef __IAvPolyList_FWD_DEFINED__
#define __IAvPolyList_FWD_DEFINED__
typedef interface IAvPolyList IAvPolyList;
#endif 	/* __IAvPolyList_FWD_DEFINED__ */


#ifndef __IAvSection_FWD_DEFINED__
#define __IAvSection_FWD_DEFINED__
typedef interface IAvSection IAvSection;
#endif 	/* __IAvSection_FWD_DEFINED__ */


#ifndef __IAvSections_FWD_DEFINED__
#define __IAvSections_FWD_DEFINED__
typedef interface IAvSections IAvSections;
#endif 	/* __IAvSections_FWD_DEFINED__ */


#ifndef __IAvSimpleType_FWD_DEFINED__
#define __IAvSimpleType_FWD_DEFINED__
typedef interface IAvSimpleType IAvSimpleType;
#endif 	/* __IAvSimpleType_FWD_DEFINED__ */


#ifndef __IAvSoftLink_FWD_DEFINED__
#define __IAvSoftLink_FWD_DEFINED__
typedef interface IAvSoftLink IAvSoftLink;
#endif 	/* __IAvSoftLink_FWD_DEFINED__ */


#ifndef __IAvSoftLinks_FWD_DEFINED__
#define __IAvSoftLinks_FWD_DEFINED__
typedef interface IAvSoftLinks IAvSoftLinks;
#endif 	/* __IAvSoftLinks_FWD_DEFINED__ */


#ifndef __IAvTransform_FWD_DEFINED__
#define __IAvTransform_FWD_DEFINED__
typedef interface IAvTransform IAvTransform;
#endif 	/* __IAvTransform_FWD_DEFINED__ */


#ifndef __IAvVector2D_FWD_DEFINED__
#define __IAvVector2D_FWD_DEFINED__
typedef interface IAvVector2D IAvVector2D;
#endif 	/* __IAvVector2D_FWD_DEFINED__ */


#ifndef __IAvXYPlot_FWD_DEFINED__
#define __IAvXYPlot_FWD_DEFINED__
typedef interface IAvXYPlot IAvXYPlot;
#endif 	/* __IAvXYPlot_FWD_DEFINED__ */


#ifndef __IAvXYZPlot_FWD_DEFINED__
#define __IAvXYZPlot_FWD_DEFINED__
typedef interface IAvXYZPlot IAvXYZPlot;
#endif 	/* __IAvXYZPlot_FWD_DEFINED__ */


#ifndef __IAvData_FWD_DEFINED__
#define __IAvData_FWD_DEFINED__
typedef interface IAvData IAvData;
#endif 	/* __IAvData_FWD_DEFINED__ */


#ifndef __IAvDataMem_FWD_DEFINED__
#define __IAvDataMem_FWD_DEFINED__
typedef interface IAvDataMem IAvDataMem;
#endif 	/* __IAvDataMem_FWD_DEFINED__ */


#ifndef __IAvDataPtr_FWD_DEFINED__
#define __IAvDataPtr_FWD_DEFINED__
typedef interface IAvDataPtr IAvDataPtr;
#endif 	/* __IAvDataPtr_FWD_DEFINED__ */


#ifndef __IAvType_FWD_DEFINED__
#define __IAvType_FWD_DEFINED__
typedef interface IAvType IAvType;
#endif 	/* __IAvType_FWD_DEFINED__ */


#ifndef __IAvImageSave_FWD_DEFINED__
#define __IAvImageSave_FWD_DEFINED__
typedef interface IAvImageSave IAvImageSave;
#endif 	/* __IAvImageSave_FWD_DEFINED__ */


#ifndef __AvGroup_FWD_DEFINED__
#define __AvGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class AvGroup AvGroup;
#else
typedef struct AvGroup AvGroup;
#endif /* __cplusplus */

#endif 	/* __AvGroup_FWD_DEFINED__ */


#ifndef __AvFileLoader_FWD_DEFINED__
#define __AvFileLoader_FWD_DEFINED__

#ifdef __cplusplus
typedef class AvFileLoader AvFileLoader;
#else
typedef struct AvFileLoader AvFileLoader;
#endif /* __cplusplus */

#endif 	/* __AvFileLoader_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_AvLib_0000 */
/* [local] */ 










typedef /* [custom][helpstring] */ 
enum AvType
    {	AV_NULL_TYPE	= 0,
	AV_CHAR	= 1,
	AV_UCHAR	= 2,
	AV_SHORT	= 3,
	AV_USHORT	= 4,
	AV_LONG	= 5,
	AV_ULONG	= 6,
	AV_LLONG	= 7,
	AV_ULLONG	= 8,
	AV_FLOAT	= 9,
	AV_DOUBLE	= 10,
	AV_LDOUBLE	= 11,
	AV_BOOL	= 12,
	AV_VARIANT	= 13,
	AV_ASTRING	= 14,
	AV_USTRING	= 15,
	AV_FLOAT128	= 16
    } 	AvType;

typedef /* [custom][helpstring] */ 
enum AvClass
    {	AV_INTEGER	= 0,
	AV_FLOATING	= 1,
	AV_TIME	= 2,
	AV_STRING	= 3,
	AV_BITFIELD	= 4,
	AV_OPAQUE	= 5,
	AV_COMPOUND	= 6,
	AV_ENUM	= 7,
	AV_REFERENCE	= 8
    } 	AvClass;

typedef /* [custom][helpstring] */ 
enum AvFormatType
    {	AV_FORMAT_BIN	= 0,
	AV_FORMAT_OCT	= 1,
	AV_FORMAT_HEX	= 2,
	AV_FORMAT_DEC	= 3,
	AV_FORMAT_FLOAT	= 4,
	AV_FORMAT_SCIEXP	= 5,
	AV_FORMAT_FLOATEXP	= 6,
	AV_FORMAT_STRING	= 7
    } 	AvFormatType;

typedef /* [custom][helpstring] */ 
enum AvAlignment
    {	AV_RIGHT	= 0,
	AV_LEFT	= 1,
	AV_CENTER	= 2,
	AV_ZERO_PAD	= 3
    } 	AvAlignment;

typedef /* [custom][helpstring] */ 
enum AvDataClass
    {	AV_SDS	= 0,
	AV_IMAGE_DATA	= 1,
	AV_PALETTE_DATA	= 2,
	AV_DIMSCALE	= 3
    } 	AvDataClass;

typedef /* [public][custom][helpstring] */ 
enum __MIDL___MIDL_itf_AvLib_0000_0001
    {	AV_UNFORMATTED	= 0,
	AV_FORMATTED	= AV_UNFORMATTED + 1,
	AV_BINHEX	= AV_FORMATTED + 1,
	AV_DATAREF	= AV_BINHEX + 1
    } 	AvDataEncoding;

typedef /* [custom][helpstring] */ 
enum AvEncodingType
    {	UTF8	= 0,
	UTF16	= UTF8 + 1
    } 	AvEncodingType;

typedef /* [custom][helpstring] */ 
enum AvPlotType
    {	AV_XYPLOT	= 0,
	AV_IMAGE	= 1,
	AV_VECTOR2D	= 2,
	AV_CONTOUR	= 3,
	AV_HEIGHTPLOT	= 4,
	AV_XYZPLOT	= 5,
	AV_QUADMESH	= 6,
	AV_POLYLIST	= 7
    } 	AvPlotType;

typedef /* [custom][helpstring] */ 
enum AvCoord
    {	AV_XCOORD	= 1,
	AV_YCOORD	= 2,
	AV_ZCOORD	= 3
    } 	AvCoord;

typedef /* [custom][helpstring] */ 
enum AvUnits
    {	AV_PIXELS	= 0,
	AV_POINTS	= 1
    } 	AvUnits;

typedef /* [custom][helpstring] */ 
enum AvWallStyle
    {	AV_NO_WALL	= 0,
	AV_XY_WALL	= 1,
	AV_XYZ_WALL	= 2
    } 	AvWallStyle;

typedef /* [custom][helpstring] */ 
enum AvLineCapStyle
    {	AV_NO_CAP	= 0,
	AV_BRACKET_CAP	= 1,
	AV_BRACKET_UP_CAP	= 2,
	AV_BRACKET_DOWN_CAP	= 3,
	AV_TRIANGLE_CAP	= 4,
	AV_FILLED_TRIANGLE_CAP	= 5,
	AV_CIRCLE_CAP	= 6,
	AV_FILLED_CIRCLE_CAP	= 7,
	AV_SQUARE_CAP	= 8,
	AV_FILLED_SQUARE_CAP	= 9
    } 	AvLineCapStyle;

typedef /* [custom][helpstring] */ 
enum AvLineEndPoint
    {	AV_LINE_START	= 0,
	AV_LINE_END	= 1
    } 	AvLineEndPoint;

typedef /* [custom][helpstring] */ 
enum AvLineStyle
    {	AV_NO_LINE	= 0,
	AV_SOLID_LINE	= 1,
	AV_DASHED_LINE	= 2,
	AV_DOTTED_LINE	= 3,
	AV_DASHDOT_LINE	= 4
    } 	AvLineStyle;

typedef /* [custom][helpstring] */ 
enum AvHJustify
    {	AV_LEFT_JUSTIFY	= 0,
	AV_CENTER_JUSTIFY	= 1,
	AV_RIGHT_JUSTIFY	= 2
    } 	AvHJustify;

typedef /* [custom][helpstring] */ 
enum AvVJustify
    {	AV_BOTTOM_JUSTIFY	= 0,
	AV_VCENTER_JUSTIFY	= 1,
	AV_BASE_JUSTIFY	= 2,
	AV_TOP_JUSTIFY	= 3
    } 	AvVJustify;

typedef /* [custom][helpstring] */ 
enum AvProjection
    {	AV_ORTHO	= 0,
	AV_LOGX	= 1,
	AV_LOGY	= 2,
	AV_LOGLOG	= 3
    } 	AvProjection;

typedef /* [custom][helpstring] */ 
enum AvMarkerType
    {	AV_NO_MARKER	= 0,
	AV_CIRCLE_MARKER	= 1,
	AV_FILLED_CIRCLE_MARKER	= 2,
	AV_SQUARE_MARKER	= 3,
	AV_FILLED_SQUARE_MARKER	= 4,
	AV_DIAMOND_MARKER	= 5,
	AV_FILLED_DIAMOND_MARKER	= 6,
	AV_PLUS_MARKER	= 7,
	AV_CROSS_MARKER	= 8,
	AV_ASTERISK_MARKER	= 9,
	AV_POUND_MARKER	= 10,
	AV_TRIANGLE_UP_MARKER	= 11,
	AV_TRIANGLE_RIGHT_MARKER	= 12,
	AV_TRIANGLE_DOWN_MARKER	= 13,
	AV_TRIANGLE_LEFT_MARKER	= 14,
	AV_FILLED_TRIANGLE_UP_MARKER	= 15,
	AV_FILLED_TRIANGLE_RIGHT_MARKER	= 16,
	AV_FILLED_TRIANGLE_DOWN_MARKER	= 17,
	AV_FILLED_TRIANGLE_LEFT_MARKER	= 18
    } 	AvMarkerType;

typedef /* [custom][helpstring] */ 
enum AvColorFormat
    {	AV_INDEX	= 0,
	AV_RANGE	= 1,
	AV_MONO	= 2,
	AV_RGBA	= 3,
	AV_RGBX	= 4,
	AV_ABGR	= 5,
	AV_XBGR	= 6,
	AV_NAN	= 7,
	AV_DENORM	= 8
    } 	AvColorFormat;

typedef /* [custom][helpstring] */ 
enum AvColorComponent
    {	AV_RED	= 0,
	AV_GREEN	= 1,
	AV_BLUE	= 2,
	AV_ALPHA	= 3
    } 	AvColorComponent;

typedef /* [custom][helpstring] */ 
enum AvLightType
    {	AV_DIRECTIONAL_LIGHT	= 0,
	AV_POSITIONAL_LIGHT	= 1,
	AV_SPOT_LIGHT	= 2
    } 	AvLightType;

typedef /* [custom][helpstring] */ 
enum AvAttenuationType
    {	AV_SQUARED	= 0,
	AV_LINEAR	= 1,
	AV_CONSTANT	= 2
    } 	AvAttenuationType;

typedef /* [custom][helpstring] */ 
enum AvFogType
    {	AV_NO_FOG	= 0,
	AV_LINEAR_FOG	= 1,
	AV_EXP_FOG	= 2,
	AV_EXP2_FOG	= 3
    } 	AvFogType;

typedef /* [custom][helpstring] */ 
enum AvPointerStyle
    {	AV_NO_POINTER	= 0,
	AV_STRAIGHT_POINTER	= 1
    } 	AvPointerStyle;

typedef /* [custom][helpstring] */ 
enum AvVertexOrder
    {	AV_CW_ORDER	= 1,
	AV_CCW_ORDER	= 2
    } 	AvVertexOrder;

typedef /* [custom][helpstring] */ 
enum AvPolyType
    {	AV_UNKNOWN_TYPE	= 0,
	AV_POINT_LIST	= 1,
	AV_LINE_STRIP	= 2,
	AV_LINES	= 3,
	AV_LINE_LOOP	= 4,
	AV_TRIANGLES	= 5,
	AV_TRIANGLE_STRIP	= 6,
	AV_QUADS	= 7,
	AV_QUAD_STRIP	= 8,
	AV_POLYGON	= 9
    } 	AvPolyType;

typedef /* [custom][helpstring] */ 
enum AvGeneratorOp
    {	AV_NULL_GENERATOR	= 0,
	AV_CONST_GENERATOR	= 1,
	AV_RANDOM_GENERATOR	= 2,
	AV_PERLIN_NOISE_GENERATOR	= 3,
	AV_SINE_GENERATOR	= 4
    } 	AvGeneratorOp;

typedef /* [custom][helpstring] */ 
enum AvFilterOp
    {	AV_NULL_FILTER	= 0,
	AV_MINMAX_FILTER	= 1,
	AV_SCALE_FILTER	= 2
    } 	AvFilterOp;

typedef /* [custom][helpstring] */ 
enum AvArgType
    {	AV_MIN_ARG	= 0,
	AV_MAX_ARG	= 1,
	AV_CONST_ARG	= 2,
	AV_SCALE_ARG	= 3,
	AV_SEED_ARG	= 4
    } 	AvArgType;



extern RPC_IF_HANDLE __MIDL_itf_AvLib_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AvLib_0000_v0_0_s_ifspec;

#ifndef __IAvFormat_INTERFACE_DEFINED__
#define __IAvFormat_INTERFACE_DEFINED__

/* interface IAvFormat */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvFormat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4204EBE-444A-41FB-9A3C-48E0A4CF8264")
    IAvFormat : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Precision( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Precision( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FormatType( 
            /* [retval][out] */ AvFormatType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FormatType( 
            /* [in] */ AvFormatType newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Lowercase( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Lowercase( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alignment( 
            /* [retval][out] */ AvAlignment *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Alignment( 
            /* [in] */ AvAlignment newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverFlowChar( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverFlowChar( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UnderFlowChar( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UnderFlowChar( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseThousandSep( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseThousandSep( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UnderFlowAsZero( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UnderFlowAsZero( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ParenForNeg( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ParenForNeg( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PreText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PreText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PostText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PostText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowSign( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowSign( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowBase( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowBase( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Print( 
            /* [in] */ VARIANT vnt,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvFormatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvFormat * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvFormat * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvFormat * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvFormat * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvFormat * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvFormat * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvFormat * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IAvFormat * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IAvFormat * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Precision )( 
            IAvFormat * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Precision )( 
            IAvFormat * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FormatType )( 
            IAvFormat * This,
            /* [retval][out] */ AvFormatType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FormatType )( 
            IAvFormat * This,
            /* [in] */ AvFormatType newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lowercase )( 
            IAvFormat * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Lowercase )( 
            IAvFormat * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alignment )( 
            IAvFormat * This,
            /* [retval][out] */ AvAlignment *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Alignment )( 
            IAvFormat * This,
            /* [in] */ AvAlignment newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverFlowChar )( 
            IAvFormat * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverFlowChar )( 
            IAvFormat * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnderFlowChar )( 
            IAvFormat * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UnderFlowChar )( 
            IAvFormat * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseThousandSep )( 
            IAvFormat * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseThousandSep )( 
            IAvFormat * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnderFlowAsZero )( 
            IAvFormat * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UnderFlowAsZero )( 
            IAvFormat * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParenForNeg )( 
            IAvFormat * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParenForNeg )( 
            IAvFormat * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreText )( 
            IAvFormat * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreText )( 
            IAvFormat * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PostText )( 
            IAvFormat * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PostText )( 
            IAvFormat * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowSign )( 
            IAvFormat * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowSign )( 
            IAvFormat * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowBase )( 
            IAvFormat * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowBase )( 
            IAvFormat * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Print )( 
            IAvFormat * This,
            /* [in] */ VARIANT vnt,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvFormat * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvFormat * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        END_INTERFACE
    } IAvFormatVtbl;

    interface IAvFormat
    {
        CONST_VTBL struct IAvFormatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvFormat_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvFormat_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvFormat_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvFormat_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvFormat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvFormat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvFormat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvFormat_get_Width(This,pVal)	\
    (This)->lpVtbl -> get_Width(This,pVal)

#define IAvFormat_put_Width(This,newVal)	\
    (This)->lpVtbl -> put_Width(This,newVal)

#define IAvFormat_get_Precision(This,pVal)	\
    (This)->lpVtbl -> get_Precision(This,pVal)

#define IAvFormat_put_Precision(This,newVal)	\
    (This)->lpVtbl -> put_Precision(This,newVal)

#define IAvFormat_get_FormatType(This,pVal)	\
    (This)->lpVtbl -> get_FormatType(This,pVal)

#define IAvFormat_put_FormatType(This,newVal)	\
    (This)->lpVtbl -> put_FormatType(This,newVal)

#define IAvFormat_get_Lowercase(This,pVal)	\
    (This)->lpVtbl -> get_Lowercase(This,pVal)

#define IAvFormat_put_Lowercase(This,newVal)	\
    (This)->lpVtbl -> put_Lowercase(This,newVal)

#define IAvFormat_get_Alignment(This,pVal)	\
    (This)->lpVtbl -> get_Alignment(This,pVal)

#define IAvFormat_put_Alignment(This,newVal)	\
    (This)->lpVtbl -> put_Alignment(This,newVal)

#define IAvFormat_get_OverFlowChar(This,pVal)	\
    (This)->lpVtbl -> get_OverFlowChar(This,pVal)

#define IAvFormat_put_OverFlowChar(This,newVal)	\
    (This)->lpVtbl -> put_OverFlowChar(This,newVal)

#define IAvFormat_get_UnderFlowChar(This,pVal)	\
    (This)->lpVtbl -> get_UnderFlowChar(This,pVal)

#define IAvFormat_put_UnderFlowChar(This,newVal)	\
    (This)->lpVtbl -> put_UnderFlowChar(This,newVal)

#define IAvFormat_get_UseThousandSep(This,pVal)	\
    (This)->lpVtbl -> get_UseThousandSep(This,pVal)

#define IAvFormat_put_UseThousandSep(This,newVal)	\
    (This)->lpVtbl -> put_UseThousandSep(This,newVal)

#define IAvFormat_get_UnderFlowAsZero(This,pVal)	\
    (This)->lpVtbl -> get_UnderFlowAsZero(This,pVal)

#define IAvFormat_put_UnderFlowAsZero(This,newVal)	\
    (This)->lpVtbl -> put_UnderFlowAsZero(This,newVal)

#define IAvFormat_get_ParenForNeg(This,pVal)	\
    (This)->lpVtbl -> get_ParenForNeg(This,pVal)

#define IAvFormat_put_ParenForNeg(This,newVal)	\
    (This)->lpVtbl -> put_ParenForNeg(This,newVal)

#define IAvFormat_get_PreText(This,pVal)	\
    (This)->lpVtbl -> get_PreText(This,pVal)

#define IAvFormat_put_PreText(This,newVal)	\
    (This)->lpVtbl -> put_PreText(This,newVal)

#define IAvFormat_get_PostText(This,pVal)	\
    (This)->lpVtbl -> get_PostText(This,pVal)

#define IAvFormat_put_PostText(This,newVal)	\
    (This)->lpVtbl -> put_PostText(This,newVal)

#define IAvFormat_get_ShowSign(This,pVal)	\
    (This)->lpVtbl -> get_ShowSign(This,pVal)

#define IAvFormat_put_ShowSign(This,newVal)	\
    (This)->lpVtbl -> put_ShowSign(This,newVal)

#define IAvFormat_get_ShowBase(This,pVal)	\
    (This)->lpVtbl -> get_ShowBase(This,pVal)

#define IAvFormat_put_ShowBase(This,newVal)	\
    (This)->lpVtbl -> put_ShowBase(This,newVal)

#define IAvFormat_Print(This,vnt,pVal)	\
    (This)->lpVtbl -> Print(This,vnt,pVal)

#define IAvFormat_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvFormat_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_Width_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAvFormat_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_Width_Proxy( 
    IAvFormat * This,
    /* [in] */ short newVal);


void __RPC_STUB IAvFormat_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_Precision_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAvFormat_get_Precision_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_Precision_Proxy( 
    IAvFormat * This,
    /* [in] */ short newVal);


void __RPC_STUB IAvFormat_put_Precision_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_FormatType_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ AvFormatType *pVal);


void __RPC_STUB IAvFormat_get_FormatType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_FormatType_Proxy( 
    IAvFormat * This,
    /* [in] */ AvFormatType newVal);


void __RPC_STUB IAvFormat_put_FormatType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_Lowercase_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFormat_get_Lowercase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_Lowercase_Proxy( 
    IAvFormat * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFormat_put_Lowercase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_Alignment_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ AvAlignment *pVal);


void __RPC_STUB IAvFormat_get_Alignment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_Alignment_Proxy( 
    IAvFormat * This,
    /* [in] */ AvAlignment newVal);


void __RPC_STUB IAvFormat_put_Alignment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_OverFlowChar_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAvFormat_get_OverFlowChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_OverFlowChar_Proxy( 
    IAvFormat * This,
    /* [in] */ short newVal);


void __RPC_STUB IAvFormat_put_OverFlowChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_UnderFlowChar_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAvFormat_get_UnderFlowChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_UnderFlowChar_Proxy( 
    IAvFormat * This,
    /* [in] */ short newVal);


void __RPC_STUB IAvFormat_put_UnderFlowChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_UseThousandSep_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFormat_get_UseThousandSep_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_UseThousandSep_Proxy( 
    IAvFormat * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFormat_put_UseThousandSep_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_UnderFlowAsZero_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFormat_get_UnderFlowAsZero_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_UnderFlowAsZero_Proxy( 
    IAvFormat * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFormat_put_UnderFlowAsZero_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_ParenForNeg_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFormat_get_ParenForNeg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_ParenForNeg_Proxy( 
    IAvFormat * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFormat_put_ParenForNeg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_PreText_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvFormat_get_PreText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_PreText_Proxy( 
    IAvFormat * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvFormat_put_PreText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_PostText_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvFormat_get_PostText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_PostText_Proxy( 
    IAvFormat * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvFormat_put_PostText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_ShowSign_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFormat_get_ShowSign_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_ShowSign_Proxy( 
    IAvFormat * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFormat_put_ShowSign_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFormat_get_ShowBase_Proxy( 
    IAvFormat * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFormat_get_ShowBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFormat_put_ShowBase_Proxy( 
    IAvFormat * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFormat_put_ShowBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFormat_Print_Proxy( 
    IAvFormat * This,
    /* [in] */ VARIANT vnt,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvFormat_Print_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFormat_GetProperty_Proxy( 
    IAvFormat * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvFormat_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFormat_SetProperty_Proxy( 
    IAvFormat * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvFormat_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvFormat_INTERFACE_DEFINED__ */


#ifndef __IAvContext_INTERFACE_DEFINED__
#define __IAvContext_INTERFACE_DEFINED__

/* interface IAvContext */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF8A4BD5-97BC-4a5e-BC1F-704F1EDE7E49")
    IAvContext : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Root( 
            /* [retval][out] */ IDispatch **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ BSTR ClassName,
            /* [retval][out] */ IDispatch **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RGBA( 
            /* [in] */ long r,
            /* [in] */ long g,
            /* [in] */ long b,
            /* [in] */ long a,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Red( 
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Green( 
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Blue( 
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Alpha( 
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvContext * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvContext * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvContext * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvContext * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvContext * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            IAvContext * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Root )( 
            IAvContext * This,
            /* [retval][out] */ IDispatch **pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            IAvContext * This,
            /* [in] */ BSTR ClassName,
            /* [retval][out] */ IDispatch **pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IAvContext * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RGBA )( 
            IAvContext * This,
            /* [in] */ long r,
            /* [in] */ long g,
            /* [in] */ long b,
            /* [in] */ long a,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Red )( 
            IAvContext * This,
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Green )( 
            IAvContext * This,
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Blue )( 
            IAvContext * This,
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Alpha )( 
            IAvContext * This,
            /* [in] */ long nColor,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorMessage )( 
            IAvContext * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IAvContextVtbl;

    interface IAvContext
    {
        CONST_VTBL struct IAvContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvContext_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvContext_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvContext_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvContext_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvContext_get_FileName(This,pVal)	\
    (This)->lpVtbl -> get_FileName(This,pVal)

#define IAvContext_get_Root(This,pItem)	\
    (This)->lpVtbl -> get_Root(This,pItem)

#define IAvContext_CreateObject(This,ClassName,pItem)	\
    (This)->lpVtbl -> CreateObject(This,ClassName,pItem)

#define IAvContext_Flush(This)	\
    (This)->lpVtbl -> Flush(This)

#define IAvContext_RGBA(This,r,g,b,a,pVal)	\
    (This)->lpVtbl -> RGBA(This,r,g,b,a,pVal)

#define IAvContext_Red(This,nColor,pVal)	\
    (This)->lpVtbl -> Red(This,nColor,pVal)

#define IAvContext_Green(This,nColor,pVal)	\
    (This)->lpVtbl -> Green(This,nColor,pVal)

#define IAvContext_Blue(This,nColor,pVal)	\
    (This)->lpVtbl -> Blue(This,nColor,pVal)

#define IAvContext_Alpha(This,nColor,pVal)	\
    (This)->lpVtbl -> Alpha(This,nColor,pVal)

#define IAvContext_get_ErrorMessage(This,pVal)	\
    (This)->lpVtbl -> get_ErrorMessage(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContext_get_FileName_Proxy( 
    IAvContext * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvContext_get_FileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContext_get_Root_Proxy( 
    IAvContext * This,
    /* [retval][out] */ IDispatch **pItem);


void __RPC_STUB IAvContext_get_Root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContext_CreateObject_Proxy( 
    IAvContext * This,
    /* [in] */ BSTR ClassName,
    /* [retval][out] */ IDispatch **pItem);


void __RPC_STUB IAvContext_CreateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContext_Flush_Proxy( 
    IAvContext * This);


void __RPC_STUB IAvContext_Flush_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContext_RGBA_Proxy( 
    IAvContext * This,
    /* [in] */ long r,
    /* [in] */ long g,
    /* [in] */ long b,
    /* [in] */ long a,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvContext_RGBA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContext_Red_Proxy( 
    IAvContext * This,
    /* [in] */ long nColor,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvContext_Red_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContext_Green_Proxy( 
    IAvContext * This,
    /* [in] */ long nColor,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvContext_Green_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContext_Blue_Proxy( 
    IAvContext * This,
    /* [in] */ long nColor,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvContext_Blue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContext_Alpha_Proxy( 
    IAvContext * This,
    /* [in] */ long nColor,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvContext_Alpha_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContext_get_ErrorMessage_Proxy( 
    IAvContext * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvContext_get_ErrorMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvContext_INTERFACE_DEFINED__ */


#ifndef __IAvCollection_INTERFACE_DEFINED__
#define __IAvCollection_INTERFACE_DEFINED__

/* interface IAvCollection */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IAvCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0928E492-4825-4873-A527-CF6CDB9DB2A0")
    IAvCollection : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ LPDISPATCH *pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IDispatch *pItem) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvCollection * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ LPDISPATCH *pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAvCollection * This,
            /* [in] */ IDispatch *pItem);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvCollection * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvCollection * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvCollection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvCollection * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvCollectionVtbl;

    interface IAvCollection
    {
        CONST_VTBL struct IAvCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvCollection_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvCollection_Add(This,pItem)	\
    (This)->lpVtbl -> Add(This,pItem)

#define IAvCollection_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvCollection_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvCollection_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvCollection_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCollection_Item_Proxy( 
    IAvCollection * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ LPDISPATCH *pItem);


void __RPC_STUB IAvCollection_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCollection_Add_Proxy( 
    IAvCollection * This,
    /* [in] */ IDispatch *pItem);


void __RPC_STUB IAvCollection_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCollection_get_Count_Proxy( 
    IAvCollection * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvCollection_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCollection_Remove_Proxy( 
    IAvCollection * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvCollection_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCollection_get_Name_Proxy( 
    IAvCollection * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvCollection_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCollection_put_Name_Proxy( 
    IAvCollection * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvCollection_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvCollection_INTERFACE_DEFINED__ */


#ifndef __IAvType_INTERFACE_DEFINED__
#define __IAvType_INTERFACE_DEFINED__

/* interface IAvType */
/* [custom][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IAvType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("260D9037-2F28-44A6-B298-3C08BCA5A212")
    IAvType : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ AvClass *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsSigned( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Extent( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvType * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvType * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvType * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IAvType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            IAvType * This,
            /* [retval][out] */ AvClass *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSigned )( 
            IAvType * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Extent )( 
            IAvType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IAvType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IAvType * This);
        
        END_INTERFACE
    } IAvTypeVtbl;

    interface IAvType
    {
        CONST_VTBL struct IAvTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvType_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvType_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvType_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvType_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvType_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvType_get_Size(This,pVal)	\
    (This)->lpVtbl -> get_Size(This,pVal)

#define IAvType_get_Class(This,pVal)	\
    (This)->lpVtbl -> get_Class(This,pVal)

#define IAvType_get_IsSigned(This,pVal)	\
    (This)->lpVtbl -> get_IsSigned(This,pVal)

#define IAvType_get_Extent(This,pVal)	\
    (This)->lpVtbl -> get_Extent(This,pVal)

#define IAvType_get_Offset(This,pVal)	\
    (This)->lpVtbl -> get_Offset(This,pVal)

#define IAvType_Commit(This)	\
    (This)->lpVtbl -> Commit(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvType_get_Name_Proxy( 
    IAvType * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvType_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvType_put_Name_Proxy( 
    IAvType * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvType_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvType_get_Size_Proxy( 
    IAvType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvType_get_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvType_get_Class_Proxy( 
    IAvType * This,
    /* [retval][out] */ AvClass *pVal);


void __RPC_STUB IAvType_get_Class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvType_get_IsSigned_Proxy( 
    IAvType * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvType_get_IsSigned_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvType_get_Extent_Proxy( 
    IAvType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvType_get_Extent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvType_get_Offset_Proxy( 
    IAvType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvType_get_Offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvType_Commit_Proxy( 
    IAvType * This);


void __RPC_STUB IAvType_Commit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvType_INTERFACE_DEFINED__ */


#ifndef __IAvSimpleType_INTERFACE_DEFINED__
#define __IAvSimpleType_INTERFACE_DEFINED__

/* interface IAvSimpleType */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvSimpleType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38182F89-46A2-436A-A558-BE2EC964C36C")
    IAvSimpleType : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeID( 
            /* [retval][out] */ AvType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TypeID( 
            /* [in] */ AvType newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ AvClass *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSigned( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Extent( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Format( 
            /* [retval][out] */ IAvFormat **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvSimpleTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvSimpleType * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvSimpleType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvSimpleType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvSimpleType * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvSimpleType * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvSimpleType * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvSimpleType * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvSimpleType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvSimpleType * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvSimpleType * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvSimpleType * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeID )( 
            IAvSimpleType * This,
            /* [retval][out] */ AvType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TypeID )( 
            IAvSimpleType * This,
            /* [in] */ AvType newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IAvSimpleType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IAvSimpleType * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            IAvSimpleType * This,
            /* [retval][out] */ AvClass *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSigned )( 
            IAvSimpleType * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Extent )( 
            IAvSimpleType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IAvSimpleType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IAvSimpleType * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Format )( 
            IAvSimpleType * This,
            /* [retval][out] */ IAvFormat **pVal);
        
        END_INTERFACE
    } IAvSimpleTypeVtbl;

    interface IAvSimpleType
    {
        CONST_VTBL struct IAvSimpleTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvSimpleType_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvSimpleType_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvSimpleType_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvSimpleType_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvSimpleType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvSimpleType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvSimpleType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvSimpleType_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvSimpleType_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvSimpleType_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvSimpleType_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvSimpleType_get_TypeID(This,pVal)	\
    (This)->lpVtbl -> get_TypeID(This,pVal)

#define IAvSimpleType_put_TypeID(This,newVal)	\
    (This)->lpVtbl -> put_TypeID(This,newVal)

#define IAvSimpleType_get_Size(This,pVal)	\
    (This)->lpVtbl -> get_Size(This,pVal)

#define IAvSimpleType_put_Size(This,newVal)	\
    (This)->lpVtbl -> put_Size(This,newVal)

#define IAvSimpleType_get_Class(This,pVal)	\
    (This)->lpVtbl -> get_Class(This,pVal)

#define IAvSimpleType_get_IsSigned(This,pVal)	\
    (This)->lpVtbl -> get_IsSigned(This,pVal)

#define IAvSimpleType_get_Extent(This,pVal)	\
    (This)->lpVtbl -> get_Extent(This,pVal)

#define IAvSimpleType_get_Offset(This,pVal)	\
    (This)->lpVtbl -> get_Offset(This,pVal)

#define IAvSimpleType_Commit(This)	\
    (This)->lpVtbl -> Commit(This)

#define IAvSimpleType_get_Format(This,pVal)	\
    (This)->lpVtbl -> get_Format(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_Name_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvSimpleType_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_put_Name_Proxy( 
    IAvSimpleType * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvSimpleType_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_GetProperty_Proxy( 
    IAvSimpleType * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvSimpleType_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_SetProperty_Proxy( 
    IAvSimpleType * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvSimpleType_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_TypeID_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ AvType *pVal);


void __RPC_STUB IAvSimpleType_get_TypeID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_put_TypeID_Proxy( 
    IAvSimpleType * This,
    /* [in] */ AvType newVal);


void __RPC_STUB IAvSimpleType_put_TypeID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_Size_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSimpleType_get_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_put_Size_Proxy( 
    IAvSimpleType * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvSimpleType_put_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_Class_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ AvClass *pVal);


void __RPC_STUB IAvSimpleType_get_Class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_IsSigned_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvSimpleType_get_IsSigned_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_Extent_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSimpleType_get_Extent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_Offset_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSimpleType_get_Offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_Commit_Proxy( 
    IAvSimpleType * This);


void __RPC_STUB IAvSimpleType_Commit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSimpleType_get_Format_Proxy( 
    IAvSimpleType * This,
    /* [retval][out] */ IAvFormat **pVal);


void __RPC_STUB IAvSimpleType_get_Format_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvSimpleType_INTERFACE_DEFINED__ */


#ifndef __IAvCompoundType_INTERFACE_DEFINED__
#define __IAvCompoundType_INTERFACE_DEFINED__

/* interface IAvCompoundType */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvCompoundType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2543781E-FDEC-4FCC-8D5A-C19B46142C68")
    IAvCompoundType : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvType **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ long nSize) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Extent( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertElement( 
            long noffset,
            BSTR name,
            AvType ntype,
            long nExtent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertAvType( 
            long noffset,
            IAvType *pType,
            long nExtent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ AvClass *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvCompoundTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvCompoundType * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvCompoundType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvCompoundType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvCompoundType * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvCompoundType * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvCompoundType * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvCompoundType * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvCompoundType * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvType **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvCompoundType * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvCompoundType * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvCompoundType * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvCompoundType * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvCompoundType * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IAvCompoundType * This,
            /* [in] */ long nSize);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IAvCompoundType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Extent )( 
            IAvCompoundType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IAvCompoundType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvCompoundType * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertElement )( 
            IAvCompoundType * This,
            long noffset,
            BSTR name,
            AvType ntype,
            long nExtent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertAvType )( 
            IAvCompoundType * This,
            long noffset,
            IAvType *pType,
            long nExtent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IAvCompoundType * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            IAvCompoundType * This,
            /* [retval][out] */ AvClass *pVal);
        
        END_INTERFACE
    } IAvCompoundTypeVtbl;

    interface IAvCompoundType
    {
        CONST_VTBL struct IAvCompoundTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvCompoundType_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvCompoundType_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvCompoundType_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvCompoundType_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvCompoundType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvCompoundType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvCompoundType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvCompoundType_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvCompoundType_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvCompoundType_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvCompoundType_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvCompoundType_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvCompoundType_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvCompoundType_Create(This,nSize)	\
    (This)->lpVtbl -> Create(This,nSize)

#define IAvCompoundType_get_Size(This,pVal)	\
    (This)->lpVtbl -> get_Size(This,pVal)

#define IAvCompoundType_get_Extent(This,pVal)	\
    (This)->lpVtbl -> get_Extent(This,pVal)

#define IAvCompoundType_get_Offset(This,pVal)	\
    (This)->lpVtbl -> get_Offset(This,pVal)

#define IAvCompoundType_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvCompoundType_InsertElement(This,noffset,name,ntype,nExtent)	\
    (This)->lpVtbl -> InsertElement(This,noffset,name,ntype,nExtent)

#define IAvCompoundType_InsertAvType(This,noffset,pType,nExtent)	\
    (This)->lpVtbl -> InsertAvType(This,noffset,pType,nExtent)

#define IAvCompoundType_Commit(This)	\
    (This)->lpVtbl -> Commit(This)

#define IAvCompoundType_get_Class(This,pVal)	\
    (This)->lpVtbl -> get_Class(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_Item_Proxy( 
    IAvCompoundType * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvType **pItem);


void __RPC_STUB IAvCompoundType_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_get__NewEnum_Proxy( 
    IAvCompoundType * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvCompoundType_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_get_Name_Proxy( 
    IAvCompoundType * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvCompoundType_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_put_Name_Proxy( 
    IAvCompoundType * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvCompoundType_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_GetProperty_Proxy( 
    IAvCompoundType * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvCompoundType_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_SetProperty_Proxy( 
    IAvCompoundType * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvCompoundType_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_Create_Proxy( 
    IAvCompoundType * This,
    /* [in] */ long nSize);


void __RPC_STUB IAvCompoundType_Create_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_get_Size_Proxy( 
    IAvCompoundType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvCompoundType_get_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_get_Extent_Proxy( 
    IAvCompoundType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvCompoundType_get_Extent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_get_Offset_Proxy( 
    IAvCompoundType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvCompoundType_get_Offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_get_Count_Proxy( 
    IAvCompoundType * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvCompoundType_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_InsertElement_Proxy( 
    IAvCompoundType * This,
    long noffset,
    BSTR name,
    AvType ntype,
    long nExtent);


void __RPC_STUB IAvCompoundType_InsertElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_InsertAvType_Proxy( 
    IAvCompoundType * This,
    long noffset,
    IAvType *pType,
    long nExtent);


void __RPC_STUB IAvCompoundType_InsertAvType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_Commit_Proxy( 
    IAvCompoundType * This);


void __RPC_STUB IAvCompoundType_Commit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCompoundType_get_Class_Proxy( 
    IAvCompoundType * This,
    /* [retval][out] */ AvClass *pVal);


void __RPC_STUB IAvCompoundType_get_Class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvCompoundType_INTERFACE_DEFINED__ */


#ifndef __IAvDataspace_INTERFACE_DEFINED__
#define __IAvDataspace_INTERFACE_DEFINED__

/* interface IAvDataspace */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvDataspace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BC57637-8CED-4F9D-8DA7-F3665B25C153")
    IAvDataspace : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rank( 
            /* [in] */ long nRank) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rank( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Extent( 
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Extent( 
            /* [in] */ long nDim,
            /* [in] */ long extent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LBound( 
            /* [in] */ long nDim,
            /* [in] */ long lbound) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LBound( 
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sections( 
            /* [retval][out] */ IAvSections **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DimName( 
            /* [in] */ long nDim,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DimName( 
            /* [in] */ long nDim,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DimScale( 
            /* [in] */ long nDim,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DimScale( 
            /* [in] */ long nDim,
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvDataspaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvDataspace * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvDataspace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvDataspace * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvDataspace * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvDataspace * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvDataspace * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvDataspace * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvDataspace * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvDataspace * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvDataspace * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvDataspace * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rank )( 
            IAvDataspace * This,
            /* [in] */ long nRank);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rank )( 
            IAvDataspace * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Extent )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Extent )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [in] */ long extent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IAvDataspace * This);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LBound )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [in] */ long lbound);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LBound )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sections )( 
            IAvDataspace * This,
            /* [retval][out] */ IAvSections **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DimName )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DimName )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DimScale )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DimScale )( 
            IAvDataspace * This,
            /* [in] */ long nDim,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvDataspaceVtbl;

    interface IAvDataspace
    {
        CONST_VTBL struct IAvDataspaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvDataspace_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvDataspace_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvDataspace_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvDataspace_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvDataspace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvDataspace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvDataspace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvDataspace_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvDataspace_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvDataspace_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvDataspace_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvDataspace_put_Rank(This,nRank)	\
    (This)->lpVtbl -> put_Rank(This,nRank)

#define IAvDataspace_get_Rank(This,pVal)	\
    (This)->lpVtbl -> get_Rank(This,pVal)

#define IAvDataspace_get_Extent(This,nDim,pVal)	\
    (This)->lpVtbl -> get_Extent(This,nDim,pVal)

#define IAvDataspace_put_Extent(This,nDim,extent)	\
    (This)->lpVtbl -> put_Extent(This,nDim,extent)

#define IAvDataspace_Commit(This)	\
    (This)->lpVtbl -> Commit(This)

#define IAvDataspace_put_LBound(This,nDim,lbound)	\
    (This)->lpVtbl -> put_LBound(This,nDim,lbound)

#define IAvDataspace_get_LBound(This,nDim,pVal)	\
    (This)->lpVtbl -> get_LBound(This,nDim,pVal)

#define IAvDataspace_get_Sections(This,pVal)	\
    (This)->lpVtbl -> get_Sections(This,pVal)

#define IAvDataspace_get_DimName(This,nDim,pVal)	\
    (This)->lpVtbl -> get_DimName(This,nDim,pVal)

#define IAvDataspace_put_DimName(This,nDim,newVal)	\
    (This)->lpVtbl -> put_DimName(This,nDim,newVal)

#define IAvDataspace_get_DimScale(This,nDim,pVal)	\
    (This)->lpVtbl -> get_DimScale(This,nDim,pVal)

#define IAvDataspace_put_DimScale(This,nDim,newVal)	\
    (This)->lpVtbl -> put_DimScale(This,nDim,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataspace_get_Name_Proxy( 
    IAvDataspace * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvDataspace_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataspace_put_Name_Proxy( 
    IAvDataspace * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvDataspace_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataspace_GetProperty_Proxy( 
    IAvDataspace * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvDataspace_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataspace_SetProperty_Proxy( 
    IAvDataspace * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvDataspace_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataspace_put_Rank_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nRank);


void __RPC_STUB IAvDataspace_put_Rank_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataspace_get_Rank_Proxy( 
    IAvDataspace * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvDataspace_get_Rank_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataspace_get_Extent_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvDataspace_get_Extent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataspace_put_Extent_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [in] */ long extent);


void __RPC_STUB IAvDataspace_put_Extent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataspace_Commit_Proxy( 
    IAvDataspace * This);


void __RPC_STUB IAvDataspace_Commit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataspace_put_LBound_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [in] */ long lbound);


void __RPC_STUB IAvDataspace_put_LBound_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataspace_get_LBound_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvDataspace_get_LBound_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataspace_get_Sections_Proxy( 
    IAvDataspace * This,
    /* [retval][out] */ IAvSections **pVal);


void __RPC_STUB IAvDataspace_get_Sections_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataspace_get_DimName_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvDataspace_get_DimName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataspace_put_DimName_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvDataspace_put_DimName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataspace_get_DimScale_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvDataspace_get_DimScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataspace_put_DimScale_Proxy( 
    IAvDataspace * This,
    /* [in] */ long nDim,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvDataspace_put_DimScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvDataspace_INTERFACE_DEFINED__ */


#ifndef __IAvSection_INTERFACE_DEFINED__
#define __IAvSection_INTERFACE_DEFINED__

/* interface IAvSection */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvSection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A23EAA0C-3043-47F0-AA72-E4E94E38E348")
    IAvSection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ long nDim,
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_End( 
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_End( 
            /* [in] */ long nDim,
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Stride( 
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Stride( 
            /* [in] */ long nDim,
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvSectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvSection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvSection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvSection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvSection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvSection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvSection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvSection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvSection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvSection * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvSection * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvSection * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IAvSection * This,
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IAvSection * This,
            /* [in] */ long nDim,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_End )( 
            IAvSection * This,
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_End )( 
            IAvSection * This,
            /* [in] */ long nDim,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stride )( 
            IAvSection * This,
            /* [in] */ long nDim,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stride )( 
            IAvSection * This,
            /* [in] */ long nDim,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IAvSectionVtbl;

    interface IAvSection
    {
        CONST_VTBL struct IAvSectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvSection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvSection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvSection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvSection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvSection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvSection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvSection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvSection_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvSection_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvSection_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvSection_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvSection_get_Start(This,nDim,pVal)	\
    (This)->lpVtbl -> get_Start(This,nDim,pVal)

#define IAvSection_put_Start(This,nDim,newVal)	\
    (This)->lpVtbl -> put_Start(This,nDim,newVal)

#define IAvSection_get_End(This,nDim,pVal)	\
    (This)->lpVtbl -> get_End(This,nDim,pVal)

#define IAvSection_put_End(This,nDim,newVal)	\
    (This)->lpVtbl -> put_End(This,nDim,newVal)

#define IAvSection_get_Stride(This,nDim,pVal)	\
    (This)->lpVtbl -> get_Stride(This,nDim,pVal)

#define IAvSection_put_Stride(This,nDim,newVal)	\
    (This)->lpVtbl -> put_Stride(This,nDim,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSection_get_Name_Proxy( 
    IAvSection * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvSection_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSection_put_Name_Proxy( 
    IAvSection * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvSection_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSection_GetProperty_Proxy( 
    IAvSection * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvSection_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSection_SetProperty_Proxy( 
    IAvSection * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvSection_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSection_get_Start_Proxy( 
    IAvSection * This,
    /* [in] */ long nDim,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSection_get_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSection_put_Start_Proxy( 
    IAvSection * This,
    /* [in] */ long nDim,
    /* [in] */ long newVal);


void __RPC_STUB IAvSection_put_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSection_get_End_Proxy( 
    IAvSection * This,
    /* [in] */ long nDim,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSection_get_End_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSection_put_End_Proxy( 
    IAvSection * This,
    /* [in] */ long nDim,
    /* [in] */ long newVal);


void __RPC_STUB IAvSection_put_End_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSection_get_Stride_Proxy( 
    IAvSection * This,
    /* [in] */ long nDim,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSection_get_Stride_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSection_put_Stride_Proxy( 
    IAvSection * This,
    /* [in] */ long nDim,
    /* [in] */ long newVal);


void __RPC_STUB IAvSection_put_Stride_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvSection_INTERFACE_DEFINED__ */


#ifndef __IAvSections_INTERFACE_DEFINED__
#define __IAvSections_INTERFACE_DEFINED__

/* interface IAvSections */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvSections;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EF1A669F-0A52-42C1-BA40-A9E44C844FC6")
    IAvSections : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvSection **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNewSection( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvSection **pItem) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvSectionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvSections * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvSections * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvSections * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvSections * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvSections * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvSections * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvSections * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvSections * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvSection **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvSections * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateNewSection )( 
            IAvSections * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvSection **pItem);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvSections * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvSections * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvSections * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvSections * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvSections * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvSections * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvSectionsVtbl;

    interface IAvSections
    {
        CONST_VTBL struct IAvSectionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvSections_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvSections_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvSections_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvSections_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvSections_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvSections_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvSections_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvSections_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvSections_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvSections_CreateNewSection(This,name,pItem)	\
    (This)->lpVtbl -> CreateNewSection(This,name,pItem)

#define IAvSections_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvSections_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvSections_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvSections_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvSections_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvSections_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSections_Item_Proxy( 
    IAvSections * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvSection **pItem);


void __RPC_STUB IAvSections_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvSections_get__NewEnum_Proxy( 
    IAvSections * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvSections_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSections_CreateNewSection_Proxy( 
    IAvSections * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IAvSection **pItem);


void __RPC_STUB IAvSections_CreateNewSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSections_get_Count_Proxy( 
    IAvSections * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSections_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSections_Remove_Proxy( 
    IAvSections * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvSections_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSections_GetProperty_Proxy( 
    IAvSections * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvSections_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSections_SetProperty_Proxy( 
    IAvSections * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvSections_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSections_get_Name_Proxy( 
    IAvSections * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvSections_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSections_put_Name_Proxy( 
    IAvSections * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvSections_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvSections_INTERFACE_DEFINED__ */


#ifndef __IAvData_INTERFACE_DEFINED__
#define __IAvData_INTERFACE_DEFINED__

/* interface IAvData */
/* [custom][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IAvData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("750EBE04-2AB3-48F7-B87E-586797907C00")
    IAvData : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dataspace( 
            /* [retval][out] */ IAvDataspace **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Write( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvData * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvData * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvData * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvData * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvData * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dataspace )( 
            IAvData * This,
            /* [retval][out] */ IAvDataspace **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAvData * This,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IAvData * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IAvData * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvDataVtbl;

    interface IAvData
    {
        CONST_VTBL struct IAvDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvData_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvData_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvData_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvData_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvData_get_Dataspace(This,pVal)	\
    (This)->lpVtbl -> get_Dataspace(This,pVal)

#define IAvData_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IAvData_Read(This,pVal)	\
    (This)->lpVtbl -> Read(This,pVal)

#define IAvData_Write(This,newVal)	\
    (This)->lpVtbl -> Write(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvData_get_Name_Proxy( 
    IAvData * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvData_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvData_put_Name_Proxy( 
    IAvData * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvData_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvData_GetProperty_Proxy( 
    IAvData * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvData_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvData_SetProperty_Proxy( 
    IAvData * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvData_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvData_get_Dataspace_Proxy( 
    IAvData * This,
    /* [retval][out] */ IAvDataspace **pVal);


void __RPC_STUB IAvData_get_Dataspace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvData_get_Type_Proxy( 
    IAvData * This,
    /* [retval][out] */ IDispatch **pVal);


void __RPC_STUB IAvData_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvData_Read_Proxy( 
    IAvData * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvData_Read_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvData_Write_Proxy( 
    IAvData * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvData_Write_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvData_INTERFACE_DEFINED__ */


#ifndef __IAvDataPtr_INTERFACE_DEFINED__
#define __IAvDataPtr_INTERFACE_DEFINED__

/* interface IAvDataPtr */
/* [custom][local][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IAvDataPtr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E405687B-A2F0-4434-99AD-A8E31198E1C7")
    IAvDataPtr : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPtr( 
            long *pMemHigh,
            long *pMemLow) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvDataPtrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvDataPtr * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvDataPtr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvDataPtr * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IAvDataPtr * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPtr )( 
            IAvDataPtr * This,
            long *pMemHigh,
            long *pMemLow);
        
        END_INTERFACE
    } IAvDataPtrVtbl;

    interface IAvDataPtr
    {
        CONST_VTBL struct IAvDataPtrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvDataPtr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvDataPtr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvDataPtr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvDataPtr_get_ReadOnly(This,pVal)	\
    (This)->lpVtbl -> get_ReadOnly(This,pVal)

#define IAvDataPtr_GetPtr(This,pMemHigh,pMemLow)	\
    (This)->lpVtbl -> GetPtr(This,pMemHigh,pMemLow)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvDataPtr_get_ReadOnly_Proxy( 
    IAvDataPtr * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvDataPtr_get_ReadOnly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvDataPtr_GetPtr_Proxy( 
    IAvDataPtr * This,
    long *pMemHigh,
    long *pMemLow);


void __RPC_STUB IAvDataPtr_GetPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvDataPtr_INTERFACE_DEFINED__ */


#ifndef __IAvDataMem_INTERFACE_DEFINED__
#define __IAvDataMem_INTERFACE_DEFINED__

/* interface IAvDataMem */
/* [custom][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IAvDataMem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB235E69-27DA-4eb8-AB36-A86D2E2FA954")
    IAvDataMem : public IUnknown
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CopyOnWrite( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][local] */ HRESULT STDMETHODCALLTYPE GetDataPtr( 
            /* [in] */ VARIANT_BOOL bReadOnly,
            /* [retval][out] */ IAvDataPtr **pIAvData) = 0;
        
        virtual /* [helpstring][local] */ HRESULT STDMETHODCALLTYPE GetBackingStorePtr( 
            /* [retval][out] */ IAvDataPtr **pIAvData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FreeAllData( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FreeBackingStore( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvDataMemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvDataMem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvDataMem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvDataMem * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CopyOnWrite )( 
            IAvDataMem * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *GetDataPtr )( 
            IAvDataMem * This,
            /* [in] */ VARIANT_BOOL bReadOnly,
            /* [retval][out] */ IAvDataPtr **pIAvData);
        
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *GetBackingStorePtr )( 
            IAvDataMem * This,
            /* [retval][out] */ IAvDataPtr **pIAvData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FreeAllData )( 
            IAvDataMem * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FreeBackingStore )( 
            IAvDataMem * This);
        
        END_INTERFACE
    } IAvDataMemVtbl;

    interface IAvDataMem
    {
        CONST_VTBL struct IAvDataMemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvDataMem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvDataMem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvDataMem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvDataMem_put_CopyOnWrite(This,newVal)	\
    (This)->lpVtbl -> put_CopyOnWrite(This,newVal)

#define IAvDataMem_GetDataPtr(This,bReadOnly,pIAvData)	\
    (This)->lpVtbl -> GetDataPtr(This,bReadOnly,pIAvData)

#define IAvDataMem_GetBackingStorePtr(This,pIAvData)	\
    (This)->lpVtbl -> GetBackingStorePtr(This,pIAvData)

#define IAvDataMem_FreeAllData(This)	\
    (This)->lpVtbl -> FreeAllData(This)

#define IAvDataMem_FreeBackingStore(This)	\
    (This)->lpVtbl -> FreeBackingStore(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvDataMem_put_CopyOnWrite_Proxy( 
    IAvDataMem * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvDataMem_put_CopyOnWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][local] */ HRESULT STDMETHODCALLTYPE IAvDataMem_GetDataPtr_Proxy( 
    IAvDataMem * This,
    /* [in] */ VARIANT_BOOL bReadOnly,
    /* [retval][out] */ IAvDataPtr **pIAvData);


void __RPC_STUB IAvDataMem_GetDataPtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][local] */ HRESULT STDMETHODCALLTYPE IAvDataMem_GetBackingStorePtr_Proxy( 
    IAvDataMem * This,
    /* [retval][out] */ IAvDataPtr **pIAvData);


void __RPC_STUB IAvDataMem_GetBackingStorePtr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvDataMem_FreeAllData_Proxy( 
    IAvDataMem * This);


void __RPC_STUB IAvDataMem_FreeAllData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvDataMem_FreeBackingStore_Proxy( 
    IAvDataMem * This);


void __RPC_STUB IAvDataMem_FreeBackingStore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvDataMem_INTERFACE_DEFINED__ */


#ifndef __IAvDataset_INTERFACE_DEFINED__
#define __IAvDataset_INTERFACE_DEFINED__

/* interface IAvDataset */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvDataset;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2BE039B5-E7D3-4186-909E-03B44116F357")
    IAvDataset : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dataspace( 
            /* [retval][out] */ IAvDataspace **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Allocate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadData( 
            /* [retval][out] */ VARIANT *data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteData( 
            /* [in] */ VARIANT data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteElement( 
            /* [in] */ VARIANT Index,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadElement( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ IAvAttributes **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ AvDataClass *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Class( 
            /* [in] */ AvDataClass newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvDatasetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvDataset * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvDataset * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvDataset * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvDataset * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvDataset * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvDataset * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvDataset * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvDataset * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvDataset * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvDataset * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvDataset * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dataspace )( 
            IAvDataset * This,
            /* [retval][out] */ IAvDataspace **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAvDataset * This,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Allocate )( 
            IAvDataset * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadData )( 
            IAvDataset * This,
            /* [retval][out] */ VARIANT *data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteData )( 
            IAvDataset * This,
            /* [in] */ VARIANT data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteElement )( 
            IAvDataset * This,
            /* [in] */ VARIANT Index,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadElement )( 
            IAvDataset * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IAvDataset * This,
            /* [retval][out] */ IAvAttributes **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            IAvDataset * This,
            /* [retval][out] */ AvDataClass *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Class )( 
            IAvDataset * This,
            /* [in] */ AvDataClass newVal);
        
        END_INTERFACE
    } IAvDatasetVtbl;

    interface IAvDataset
    {
        CONST_VTBL struct IAvDatasetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvDataset_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvDataset_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvDataset_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvDataset_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvDataset_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvDataset_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvDataset_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvDataset_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvDataset_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvDataset_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvDataset_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvDataset_get_Dataspace(This,pVal)	\
    (This)->lpVtbl -> get_Dataspace(This,pVal)

#define IAvDataset_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IAvDataset_Allocate(This)	\
    (This)->lpVtbl -> Allocate(This)

#define IAvDataset_ReadData(This,data)	\
    (This)->lpVtbl -> ReadData(This,data)

#define IAvDataset_WriteData(This,data)	\
    (This)->lpVtbl -> WriteData(This,data)

#define IAvDataset_WriteElement(This,Index,newVal)	\
    (This)->lpVtbl -> WriteElement(This,Index,newVal)

#define IAvDataset_ReadElement(This,Index,pVal)	\
    (This)->lpVtbl -> ReadElement(This,Index,pVal)

#define IAvDataset_get_Attributes(This,pVal)	\
    (This)->lpVtbl -> get_Attributes(This,pVal)

#define IAvDataset_get_Class(This,pVal)	\
    (This)->lpVtbl -> get_Class(This,pVal)

#define IAvDataset_put_Class(This,newVal)	\
    (This)->lpVtbl -> put_Class(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataset_get_Name_Proxy( 
    IAvDataset * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvDataset_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataset_put_Name_Proxy( 
    IAvDataset * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvDataset_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataset_GetProperty_Proxy( 
    IAvDataset * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvDataset_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataset_SetProperty_Proxy( 
    IAvDataset * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvDataset_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataset_get_Dataspace_Proxy( 
    IAvDataset * This,
    /* [retval][out] */ IAvDataspace **pVal);


void __RPC_STUB IAvDataset_get_Dataspace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataset_get_Type_Proxy( 
    IAvDataset * This,
    /* [retval][out] */ IDispatch **pVal);


void __RPC_STUB IAvDataset_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataset_Allocate_Proxy( 
    IAvDataset * This);


void __RPC_STUB IAvDataset_Allocate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataset_ReadData_Proxy( 
    IAvDataset * This,
    /* [retval][out] */ VARIANT *data);


void __RPC_STUB IAvDataset_ReadData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataset_WriteData_Proxy( 
    IAvDataset * This,
    /* [in] */ VARIANT data);


void __RPC_STUB IAvDataset_WriteData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataset_WriteElement_Proxy( 
    IAvDataset * This,
    /* [in] */ VARIANT Index,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvDataset_WriteElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDataset_ReadElement_Proxy( 
    IAvDataset * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvDataset_ReadElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataset_get_Attributes_Proxy( 
    IAvDataset * This,
    /* [retval][out] */ IAvAttributes **pVal);


void __RPC_STUB IAvDataset_get_Attributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDataset_get_Class_Proxy( 
    IAvDataset * This,
    /* [retval][out] */ AvDataClass *pVal);


void __RPC_STUB IAvDataset_get_Class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDataset_put_Class_Proxy( 
    IAvDataset * This,
    /* [in] */ AvDataClass newVal);


void __RPC_STUB IAvDataset_put_Class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvDataset_INTERFACE_DEFINED__ */


#ifndef __IAvDHLink_INTERFACE_DEFINED__
#define __IAvDHLink_INTERFACE_DEFINED__

/* interface IAvDHLink */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvDHLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4A5EF66-CC5F-4EFA-A58D-0AB7747C6434")
    IAvDHLink : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dataspace( 
            /* [retval][out] */ IAvDataspace **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Allocate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadData( 
            /* [retval][out] */ VARIANT *data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteData( 
            /* [in] */ VARIANT data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteElement( 
            /* [in] */ VARIANT Index,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadElement( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ IAvAttributes **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ AvDataClass *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Class( 
            /* [in] */ AvDataClass newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dataset( 
            /* [retval][out] */ IAvDataset **pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Dataset( 
            /* [in] */ IAvDataset *newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvDHLinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvDHLink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvDHLink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvDHLink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvDHLink * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvDHLink * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvDHLink * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvDHLink * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvDHLink * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvDHLink * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvDHLink * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvDHLink * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dataspace )( 
            IAvDHLink * This,
            /* [retval][out] */ IAvDataspace **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAvDHLink * This,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Allocate )( 
            IAvDHLink * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadData )( 
            IAvDHLink * This,
            /* [retval][out] */ VARIANT *data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteData )( 
            IAvDHLink * This,
            /* [in] */ VARIANT data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteElement )( 
            IAvDHLink * This,
            /* [in] */ VARIANT Index,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadElement )( 
            IAvDHLink * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IAvDHLink * This,
            /* [retval][out] */ IAvAttributes **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            IAvDHLink * This,
            /* [retval][out] */ AvDataClass *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Class )( 
            IAvDHLink * This,
            /* [in] */ AvDataClass newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dataset )( 
            IAvDHLink * This,
            /* [retval][out] */ IAvDataset **pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dataset )( 
            IAvDHLink * This,
            /* [in] */ IAvDataset *newVal);
        
        END_INTERFACE
    } IAvDHLinkVtbl;

    interface IAvDHLink
    {
        CONST_VTBL struct IAvDHLinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvDHLink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvDHLink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvDHLink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvDHLink_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvDHLink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvDHLink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvDHLink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvDHLink_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvDHLink_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvDHLink_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvDHLink_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvDHLink_get_Dataspace(This,pVal)	\
    (This)->lpVtbl -> get_Dataspace(This,pVal)

#define IAvDHLink_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IAvDHLink_Allocate(This)	\
    (This)->lpVtbl -> Allocate(This)

#define IAvDHLink_ReadData(This,data)	\
    (This)->lpVtbl -> ReadData(This,data)

#define IAvDHLink_WriteData(This,data)	\
    (This)->lpVtbl -> WriteData(This,data)

#define IAvDHLink_WriteElement(This,Index,newVal)	\
    (This)->lpVtbl -> WriteElement(This,Index,newVal)

#define IAvDHLink_ReadElement(This,Index,pVal)	\
    (This)->lpVtbl -> ReadElement(This,Index,pVal)

#define IAvDHLink_get_Attributes(This,pVal)	\
    (This)->lpVtbl -> get_Attributes(This,pVal)

#define IAvDHLink_get_Class(This,pVal)	\
    (This)->lpVtbl -> get_Class(This,pVal)

#define IAvDHLink_put_Class(This,newVal)	\
    (This)->lpVtbl -> put_Class(This,newVal)

#define IAvDHLink_get_Dataset(This,pVal)	\
    (This)->lpVtbl -> get_Dataset(This,pVal)

#define IAvDHLink_put_Dataset(This,newVal)	\
    (This)->lpVtbl -> put_Dataset(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDHLink_get_Name_Proxy( 
    IAvDHLink * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvDHLink_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDHLink_put_Name_Proxy( 
    IAvDHLink * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvDHLink_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDHLink_GetProperty_Proxy( 
    IAvDHLink * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvDHLink_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDHLink_SetProperty_Proxy( 
    IAvDHLink * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvDHLink_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDHLink_get_Dataspace_Proxy( 
    IAvDHLink * This,
    /* [retval][out] */ IAvDataspace **pVal);


void __RPC_STUB IAvDHLink_get_Dataspace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDHLink_get_Type_Proxy( 
    IAvDHLink * This,
    /* [retval][out] */ IDispatch **pVal);


void __RPC_STUB IAvDHLink_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDHLink_Allocate_Proxy( 
    IAvDHLink * This);


void __RPC_STUB IAvDHLink_Allocate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDHLink_ReadData_Proxy( 
    IAvDHLink * This,
    /* [retval][out] */ VARIANT *data);


void __RPC_STUB IAvDHLink_ReadData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDHLink_WriteData_Proxy( 
    IAvDHLink * This,
    /* [in] */ VARIANT data);


void __RPC_STUB IAvDHLink_WriteData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDHLink_WriteElement_Proxy( 
    IAvDHLink * This,
    /* [in] */ VARIANT Index,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvDHLink_WriteElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDHLink_ReadElement_Proxy( 
    IAvDHLink * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvDHLink_ReadElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDHLink_get_Attributes_Proxy( 
    IAvDHLink * This,
    /* [retval][out] */ IAvAttributes **pVal);


void __RPC_STUB IAvDHLink_get_Attributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDHLink_get_Class_Proxy( 
    IAvDHLink * This,
    /* [retval][out] */ AvDataClass *pVal);


void __RPC_STUB IAvDHLink_get_Class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDHLink_put_Class_Proxy( 
    IAvDHLink * This,
    /* [in] */ AvDataClass newVal);


void __RPC_STUB IAvDHLink_put_Class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDHLink_get_Dataset_Proxy( 
    IAvDHLink * This,
    /* [retval][out] */ IAvDataset **pVal);


void __RPC_STUB IAvDHLink_get_Dataset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDHLink_put_Dataset_Proxy( 
    IAvDHLink * This,
    /* [in] */ IAvDataset *newVal);


void __RPC_STUB IAvDHLink_put_Dataset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvDHLink_INTERFACE_DEFINED__ */


#ifndef __IAvDatasets_INTERFACE_DEFINED__
#define __IAvDatasets_INTERFACE_DEFINED__

/* interface IAvDatasets */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvDatasets;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B6B4BF8-853F-4F4A-822E-A42A2819185D")
    IAvDatasets : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvDataset **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateDataset( 
            BSTR name,
            /* [retval][out] */ IAvDataset **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LPDISPATCH pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvDatasetsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvDatasets * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvDatasets * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvDatasets * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvDatasets * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvDatasets * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvDatasets * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvDatasets * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvDatasets * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvDataset **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvDatasets * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvDatasets * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvDatasets * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvDatasets * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvDatasets * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvDatasets * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvDatasets * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateDataset )( 
            IAvDatasets * This,
            BSTR name,
            /* [retval][out] */ IAvDataset **pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAvDatasets * This,
            /* [in] */ LPDISPATCH pItem);
        
        END_INTERFACE
    } IAvDatasetsVtbl;

    interface IAvDatasets
    {
        CONST_VTBL struct IAvDatasetsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvDatasets_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvDatasets_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvDatasets_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvDatasets_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvDatasets_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvDatasets_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvDatasets_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvDatasets_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvDatasets_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvDatasets_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvDatasets_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvDatasets_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvDatasets_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvDatasets_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvDatasets_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvDatasets_CreateDataset(This,name,pItem)	\
    (This)->lpVtbl -> CreateDataset(This,name,pItem)

#define IAvDatasets_Add(This,pItem)	\
    (This)->lpVtbl -> Add(This,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDatasets_Item_Proxy( 
    IAvDatasets * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvDataset **pItem);


void __RPC_STUB IAvDatasets_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvDatasets_get__NewEnum_Proxy( 
    IAvDatasets * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvDatasets_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDatasets_get_Name_Proxy( 
    IAvDatasets * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvDatasets_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvDatasets_put_Name_Proxy( 
    IAvDatasets * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvDatasets_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDatasets_GetProperty_Proxy( 
    IAvDatasets * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvDatasets_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDatasets_SetProperty_Proxy( 
    IAvDatasets * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvDatasets_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvDatasets_get_Count_Proxy( 
    IAvDatasets * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvDatasets_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDatasets_Remove_Proxy( 
    IAvDatasets * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvDatasets_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDatasets_CreateDataset_Proxy( 
    IAvDatasets * This,
    BSTR name,
    /* [retval][out] */ IAvDataset **pItem);


void __RPC_STUB IAvDatasets_CreateDataset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvDatasets_Add_Proxy( 
    IAvDatasets * This,
    /* [in] */ LPDISPATCH pItem);


void __RPC_STUB IAvDatasets_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvDatasets_INTERFACE_DEFINED__ */


#ifndef __IAvAttribute_INTERFACE_DEFINED__
#define __IAvAttribute_INTERFACE_DEFINED__

/* interface IAvAttribute */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A160E7F-88B9-4218-86D6-0405BDA2CE23")
    IAvAttribute : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dataspace( 
            /* [retval][out] */ IAvDataspace **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Allocate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadData( 
            /* [retval][out] */ VARIANT *data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteData( 
            /* [in] */ VARIANT data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteElement( 
            /* [in] */ VARIANT Index,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadElement( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAttribute * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAttribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvAttribute * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvAttribute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvAttribute * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvAttribute * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvAttribute * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvAttribute * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvAttribute * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dataspace )( 
            IAvAttribute * This,
            /* [retval][out] */ IAvDataspace **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAvAttribute * This,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Allocate )( 
            IAvAttribute * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadData )( 
            IAvAttribute * This,
            /* [retval][out] */ VARIANT *data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteData )( 
            IAvAttribute * This,
            /* [in] */ VARIANT data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteElement )( 
            IAvAttribute * This,
            /* [in] */ VARIANT Index,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadElement )( 
            IAvAttribute * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal);
        
        END_INTERFACE
    } IAvAttributeVtbl;

    interface IAvAttribute
    {
        CONST_VTBL struct IAvAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAttribute_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvAttribute_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvAttribute_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvAttribute_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvAttribute_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvAttribute_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvAttribute_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvAttribute_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvAttribute_get_Dataspace(This,pVal)	\
    (This)->lpVtbl -> get_Dataspace(This,pVal)

#define IAvAttribute_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IAvAttribute_Allocate(This)	\
    (This)->lpVtbl -> Allocate(This)

#define IAvAttribute_ReadData(This,data)	\
    (This)->lpVtbl -> ReadData(This,data)

#define IAvAttribute_WriteData(This,data)	\
    (This)->lpVtbl -> WriteData(This,data)

#define IAvAttribute_WriteElement(This,Index,newVal)	\
    (This)->lpVtbl -> WriteElement(This,Index,newVal)

#define IAvAttribute_ReadElement(This,Index,pVal)	\
    (This)->lpVtbl -> ReadElement(This,Index,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAttribute_get_Name_Proxy( 
    IAvAttribute * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvAttribute_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAttribute_put_Name_Proxy( 
    IAvAttribute * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvAttribute_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttribute_GetProperty_Proxy( 
    IAvAttribute * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvAttribute_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttribute_SetProperty_Proxy( 
    IAvAttribute * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvAttribute_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAttribute_get_Dataspace_Proxy( 
    IAvAttribute * This,
    /* [retval][out] */ IAvDataspace **pVal);


void __RPC_STUB IAvAttribute_get_Dataspace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAttribute_get_Type_Proxy( 
    IAvAttribute * This,
    /* [retval][out] */ IDispatch **pVal);


void __RPC_STUB IAvAttribute_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttribute_Allocate_Proxy( 
    IAvAttribute * This);


void __RPC_STUB IAvAttribute_Allocate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttribute_ReadData_Proxy( 
    IAvAttribute * This,
    /* [retval][out] */ VARIANT *data);


void __RPC_STUB IAvAttribute_ReadData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttribute_WriteData_Proxy( 
    IAvAttribute * This,
    /* [in] */ VARIANT data);


void __RPC_STUB IAvAttribute_WriteData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttribute_WriteElement_Proxy( 
    IAvAttribute * This,
    /* [in] */ VARIANT Index,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvAttribute_WriteElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttribute_ReadElement_Proxy( 
    IAvAttribute * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvAttribute_ReadElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvAttribute_INTERFACE_DEFINED__ */


#ifndef __IAvAttributes_INTERFACE_DEFINED__
#define __IAvAttributes_INTERFACE_DEFINED__

/* interface IAvAttributes */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3E891F4-436C-4466-928A-136D803F7BA9")
    IAvAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvAttribute **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateAttribute( 
            BSTR name,
            /* [retval][out] */ IAvAttribute **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LPDISPATCH pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAttributes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvAttributes * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvAttributes * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvAttribute **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvAttributes * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvAttributes * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvAttributes * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvAttributes * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvAttributes * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvAttributes * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvAttributes * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAttribute )( 
            IAvAttributes * This,
            BSTR name,
            /* [retval][out] */ IAvAttribute **pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAvAttributes * This,
            /* [in] */ LPDISPATCH pItem);
        
        END_INTERFACE
    } IAvAttributesVtbl;

    interface IAvAttributes
    {
        CONST_VTBL struct IAvAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAttributes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvAttributes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvAttributes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvAttributes_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvAttributes_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvAttributes_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvAttributes_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvAttributes_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvAttributes_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvAttributes_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvAttributes_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvAttributes_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvAttributes_CreateAttribute(This,name,pItem)	\
    (This)->lpVtbl -> CreateAttribute(This,name,pItem)

#define IAvAttributes_Add(This,pItem)	\
    (This)->lpVtbl -> Add(This,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttributes_Item_Proxy( 
    IAvAttributes * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvAttribute **pItem);


void __RPC_STUB IAvAttributes_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvAttributes_get__NewEnum_Proxy( 
    IAvAttributes * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvAttributes_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAttributes_get_Name_Proxy( 
    IAvAttributes * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvAttributes_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAttributes_put_Name_Proxy( 
    IAvAttributes * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvAttributes_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttributes_GetProperty_Proxy( 
    IAvAttributes * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvAttributes_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttributes_SetProperty_Proxy( 
    IAvAttributes * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvAttributes_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAttributes_get_Count_Proxy( 
    IAvAttributes * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvAttributes_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttributes_Remove_Proxy( 
    IAvAttributes * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvAttributes_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttributes_CreateAttribute_Proxy( 
    IAvAttributes * This,
    BSTR name,
    /* [retval][out] */ IAvAttribute **pItem);


void __RPC_STUB IAvAttributes_CreateAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAttributes_Add_Proxy( 
    IAvAttributes * This,
    /* [in] */ LPDISPATCH pItem);


void __RPC_STUB IAvAttributes_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvAttributes_INTERFACE_DEFINED__ */


#ifndef __IAvPage_INTERFACE_DEFINED__
#define __IAvPage_INTERFACE_DEFINED__

/* interface IAvPage */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2789D67-F657-4D43-A83F-663AF3521741")
    IAvPage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Encoding( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_Encoding( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvPage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvPage * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvPage * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvPage * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IAvPage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IAvPage * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Encoding )( 
            IAvPage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][hidden][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Encoding )( 
            IAvPage * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IAvPageVtbl;

    interface IAvPage
    {
        CONST_VTBL struct IAvPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPage_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvPage_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvPage_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvPage_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvPage_get_Text(This,pVal)	\
    (This)->lpVtbl -> get_Text(This,pVal)

#define IAvPage_put_Text(This,newVal)	\
    (This)->lpVtbl -> put_Text(This,newVal)

#define IAvPage_get_Encoding(This,pVal)	\
    (This)->lpVtbl -> get_Encoding(This,pVal)

#define IAvPage_put_Encoding(This,newVal)	\
    (This)->lpVtbl -> put_Encoding(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPage_get_Name_Proxy( 
    IAvPage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPage_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPage_put_Name_Proxy( 
    IAvPage * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPage_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPage_GetProperty_Proxy( 
    IAvPage * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvPage_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPage_SetProperty_Proxy( 
    IAvPage * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvPage_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPage_get_Text_Proxy( 
    IAvPage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPage_get_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPage_put_Text_Proxy( 
    IAvPage * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPage_put_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPage_get_Encoding_Proxy( 
    IAvPage * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPage_get_Encoding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPage_put_Encoding_Proxy( 
    IAvPage * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPage_put_Encoding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPage_INTERFACE_DEFINED__ */


#ifndef __IAvPages_INTERFACE_DEFINED__
#define __IAvPages_INTERFACE_DEFINED__

/* interface IAvPages */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPages;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E5E5309-0159-449C-B0B2-A8C463C8ADED")
    IAvPages : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvPage **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePage( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvPage **pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPagesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPages * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPages * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPages * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPages * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPages * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPages * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPages * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvPages * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvPage **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvPages * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvPages * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvPages * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvPages * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvPages * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvPages * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvPages * This,
            /* [in] */ LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePage )( 
            IAvPages * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvPage **pItem);
        
        END_INTERFACE
    } IAvPagesVtbl;

    interface IAvPages
    {
        CONST_VTBL struct IAvPagesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPages_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPages_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPages_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPages_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPages_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPages_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPages_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPages_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvPages_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvPages_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvPages_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvPages_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvPages_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvPages_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvPages_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvPages_CreatePage(This,name,pItem)	\
    (This)->lpVtbl -> CreatePage(This,name,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPages_Item_Proxy( 
    IAvPages * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvPage **pItem);


void __RPC_STUB IAvPages_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvPages_get__NewEnum_Proxy( 
    IAvPages * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvPages_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPages_get_Name_Proxy( 
    IAvPages * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPages_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPages_put_Name_Proxy( 
    IAvPages * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPages_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPages_GetProperty_Proxy( 
    IAvPages * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvPages_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPages_SetProperty_Proxy( 
    IAvPages * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvPages_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPages_get_Count_Proxy( 
    IAvPages * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPages_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPages_Remove_Proxy( 
    IAvPages * This,
    /* [in] */ LPDISPATCH pItem);


void __RPC_STUB IAvPages_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPages_CreatePage_Proxy( 
    IAvPages * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IAvPage **pItem);


void __RPC_STUB IAvPages_CreatePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPages_INTERFACE_DEFINED__ */


#ifndef __IAvPosition_INTERFACE_DEFINED__
#define __IAvPosition_INTERFACE_DEFINED__

/* interface IAvPosition */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPosition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E61C6A7-85F7-4D54-B52B-340BFDBA90C5")
    IAvPosition : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Origin( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Origin( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPositionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPosition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPosition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPosition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPosition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPosition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPosition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPosition * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Origin )( 
            IAvPosition * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Origin )( 
            IAvPosition * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IAvPosition * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IAvPosition * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal);
        
        END_INTERFACE
    } IAvPositionVtbl;

    interface IAvPosition
    {
        CONST_VTBL struct IAvPositionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPosition_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPosition_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPosition_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPosition_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPosition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPosition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPosition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPosition_get_Origin(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Origin(This,nCoord,pVal)

#define IAvPosition_put_Origin(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Origin(This,nCoord,newVal)

#define IAvPosition_get_Size(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Size(This,nCoord,pVal)

#define IAvPosition_put_Size(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Size(This,nCoord,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPosition_get_Origin_Proxy( 
    IAvPosition * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvPosition_get_Origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPosition_put_Origin_Proxy( 
    IAvPosition * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ double newVal);


void __RPC_STUB IAvPosition_put_Origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPosition_get_Size_Proxy( 
    IAvPosition * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvPosition_get_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPosition_put_Size_Proxy( 
    IAvPosition * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ double newVal);


void __RPC_STUB IAvPosition_put_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPosition_INTERFACE_DEFINED__ */


#ifndef __IAvTransform_INTERFACE_DEFINED__
#define __IAvTransform_INTERFACE_DEFINED__

/* interface IAvTransform */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A23292C5-7391-4977-86CE-2C4F0B347D3B")
    IAvTransform : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Origin( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Origin( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Inherit( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Inherit( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Projection( 
            /* [retval][out] */ AvProjection *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Projection( 
            /* [in] */ AvProjection newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stationary( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Stationary( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvTransformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvTransform * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvTransform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvTransform * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvTransform * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvTransform * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvTransform * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvTransform * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Origin )( 
            IAvTransform * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Origin )( 
            IAvTransform * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IAvTransform * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IAvTransform * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rotation )( 
            IAvTransform * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rotation )( 
            IAvTransform * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Inherit )( 
            IAvTransform * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Inherit )( 
            IAvTransform * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Projection )( 
            IAvTransform * This,
            /* [retval][out] */ AvProjection *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Projection )( 
            IAvTransform * This,
            /* [in] */ AvProjection newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stationary )( 
            IAvTransform * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stationary )( 
            IAvTransform * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvTransformVtbl;

    interface IAvTransform
    {
        CONST_VTBL struct IAvTransformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvTransform_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvTransform_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvTransform_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvTransform_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvTransform_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvTransform_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvTransform_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvTransform_get_Origin(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Origin(This,nCoord,pVal)

#define IAvTransform_put_Origin(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Origin(This,nCoord,newVal)

#define IAvTransform_get_Size(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Size(This,nCoord,pVal)

#define IAvTransform_put_Size(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Size(This,nCoord,newVal)

#define IAvTransform_get_Rotation(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Rotation(This,nCoord,pVal)

#define IAvTransform_put_Rotation(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Rotation(This,nCoord,newVal)

#define IAvTransform_get_Inherit(This,pVal)	\
    (This)->lpVtbl -> get_Inherit(This,pVal)

#define IAvTransform_put_Inherit(This,newVal)	\
    (This)->lpVtbl -> put_Inherit(This,newVal)

#define IAvTransform_get_Projection(This,pVal)	\
    (This)->lpVtbl -> get_Projection(This,pVal)

#define IAvTransform_put_Projection(This,newVal)	\
    (This)->lpVtbl -> put_Projection(This,newVal)

#define IAvTransform_get_Stationary(This,pVal)	\
    (This)->lpVtbl -> get_Stationary(This,pVal)

#define IAvTransform_put_Stationary(This,newVal)	\
    (This)->lpVtbl -> put_Stationary(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvTransform_get_Origin_Proxy( 
    IAvTransform * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvTransform_get_Origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvTransform_put_Origin_Proxy( 
    IAvTransform * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ double newVal);


void __RPC_STUB IAvTransform_put_Origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvTransform_get_Size_Proxy( 
    IAvTransform * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvTransform_get_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvTransform_put_Size_Proxy( 
    IAvTransform * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ double newVal);


void __RPC_STUB IAvTransform_put_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvTransform_get_Rotation_Proxy( 
    IAvTransform * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvTransform_get_Rotation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvTransform_put_Rotation_Proxy( 
    IAvTransform * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ float newVal);


void __RPC_STUB IAvTransform_put_Rotation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvTransform_get_Inherit_Proxy( 
    IAvTransform * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvTransform_get_Inherit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvTransform_put_Inherit_Proxy( 
    IAvTransform * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvTransform_put_Inherit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvTransform_get_Projection_Proxy( 
    IAvTransform * This,
    /* [retval][out] */ AvProjection *pVal);


void __RPC_STUB IAvTransform_get_Projection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvTransform_put_Projection_Proxy( 
    IAvTransform * This,
    /* [in] */ AvProjection newVal);


void __RPC_STUB IAvTransform_put_Projection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvTransform_get_Stationary_Proxy( 
    IAvTransform * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvTransform_get_Stationary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvTransform_put_Stationary_Proxy( 
    IAvTransform * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvTransform_put_Stationary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvTransform_INTERFACE_DEFINED__ */


#ifndef __IAvBorder_INTERFACE_DEFINED__
#define __IAvBorder_INTERFACE_DEFINED__

/* interface IAvBorder */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvBorder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8975ECDB-7EAC-47D0-B1A1-DA41CBB0454E")
    IAvBorder : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WidthUnits( 
            /* [retval][out] */ AvUnits *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_WidthUnits( 
            /* [in] */ AvUnits newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvBorderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvBorder * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvBorder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvBorder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvBorder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvBorder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvBorder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvBorder * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvBorder * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IAvBorder * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IAvBorder * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IAvBorder * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WidthUnits )( 
            IAvBorder * This,
            /* [retval][out] */ AvUnits *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WidthUnits )( 
            IAvBorder * This,
            /* [in] */ AvUnits newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IAvBorder * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IAvBorder * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvBorderVtbl;

    interface IAvBorder
    {
        CONST_VTBL struct IAvBorderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvBorder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvBorder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvBorder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvBorder_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvBorder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvBorder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvBorder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvBorder_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvBorder_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IAvBorder_get_Width(This,pVal)	\
    (This)->lpVtbl -> get_Width(This,pVal)

#define IAvBorder_put_Width(This,newVal)	\
    (This)->lpVtbl -> put_Width(This,newVal)

#define IAvBorder_get_WidthUnits(This,pVal)	\
    (This)->lpVtbl -> get_WidthUnits(This,pVal)

#define IAvBorder_put_WidthUnits(This,newVal)	\
    (This)->lpVtbl -> put_WidthUnits(This,newVal)

#define IAvBorder_get_Visible(This,pVal)	\
    (This)->lpVtbl -> get_Visible(This,pVal)

#define IAvBorder_put_Visible(This,newVal)	\
    (This)->lpVtbl -> put_Visible(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvBorder_get_Color_Proxy( 
    IAvBorder * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvBorder_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvBorder_put_Color_Proxy( 
    IAvBorder * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvBorder_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvBorder_get_Width_Proxy( 
    IAvBorder * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvBorder_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvBorder_put_Width_Proxy( 
    IAvBorder * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvBorder_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvBorder_get_WidthUnits_Proxy( 
    IAvBorder * This,
    /* [retval][out] */ AvUnits *pVal);


void __RPC_STUB IAvBorder_get_WidthUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvBorder_put_WidthUnits_Proxy( 
    IAvBorder * This,
    /* [in] */ AvUnits newVal);


void __RPC_STUB IAvBorder_put_WidthUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvBorder_get_Visible_Proxy( 
    IAvBorder * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvBorder_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvBorder_put_Visible_Proxy( 
    IAvBorder * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvBorder_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvBorder_INTERFACE_DEFINED__ */


#ifndef __IAvColor_INTERFACE_DEFINED__
#define __IAvColor_INTERFACE_DEFINED__

/* interface IAvColor */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvColor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F3FF13D-A49E-4357-AEC6-DB9E060C5CDC")
    IAvColor : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Front( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Front( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Back( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Back( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transparency( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Transparency( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Lighting( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Lighting( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvColorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvColor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvColor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvColor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvColor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvColor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvColor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvColor * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Front )( 
            IAvColor * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Front )( 
            IAvColor * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Back )( 
            IAvColor * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Back )( 
            IAvColor * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transparency )( 
            IAvColor * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Transparency )( 
            IAvColor * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lighting )( 
            IAvColor * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Lighting )( 
            IAvColor * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvColorVtbl;

    interface IAvColor
    {
        CONST_VTBL struct IAvColorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvColor_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvColor_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvColor_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvColor_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvColor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvColor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvColor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvColor_get_Front(This,pVal)	\
    (This)->lpVtbl -> get_Front(This,pVal)

#define IAvColor_put_Front(This,newVal)	\
    (This)->lpVtbl -> put_Front(This,newVal)

#define IAvColor_get_Back(This,pVal)	\
    (This)->lpVtbl -> get_Back(This,pVal)

#define IAvColor_put_Back(This,newVal)	\
    (This)->lpVtbl -> put_Back(This,newVal)

#define IAvColor_get_Transparency(This,pVal)	\
    (This)->lpVtbl -> get_Transparency(This,pVal)

#define IAvColor_put_Transparency(This,newVal)	\
    (This)->lpVtbl -> put_Transparency(This,newVal)

#define IAvColor_get_Lighting(This,pVal)	\
    (This)->lpVtbl -> get_Lighting(This,pVal)

#define IAvColor_put_Lighting(This,newVal)	\
    (This)->lpVtbl -> put_Lighting(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvColor_get_Front_Proxy( 
    IAvColor * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvColor_get_Front_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvColor_put_Front_Proxy( 
    IAvColor * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvColor_put_Front_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvColor_get_Back_Proxy( 
    IAvColor * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvColor_get_Back_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvColor_put_Back_Proxy( 
    IAvColor * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvColor_put_Back_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvColor_get_Transparency_Proxy( 
    IAvColor * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvColor_get_Transparency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvColor_put_Transparency_Proxy( 
    IAvColor * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvColor_put_Transparency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvColor_get_Lighting_Proxy( 
    IAvColor * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvColor_get_Lighting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvColor_put_Lighting_Proxy( 
    IAvColor * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvColor_put_Lighting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvColor_INTERFACE_DEFINED__ */


#ifndef __IAvGraphState_INTERFACE_DEFINED__
#define __IAvGraphState_INTERFACE_DEFINED__

/* interface IAvGraphState */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGraphState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE97176E-0C89-4c13-8CA5-3D40D831C534")
    IAvGraphState : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineWidth( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineWidth( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineWidthUnits( 
            /* [retval][out] */ AvUnits *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineWidthUnits( 
            /* [in] */ AvUnits newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineStyle( 
            /* [retval][out] */ AvLineStyle *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineStyle( 
            /* [in] */ AvLineStyle newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShowDataTip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ShowDataTip( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WallStyle( 
            /* [retval][out] */ AvWallStyle *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_WallStyle( 
            /* [in] */ AvWallStyle newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RowMajor( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RowMajor( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGraphStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGraphState * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGraphState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGraphState * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGraphState * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGraphState * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGraphState * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGraphState * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IAvGraphState * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IAvGraphState * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWidth )( 
            IAvGraphState * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWidth )( 
            IAvGraphState * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWidthUnits )( 
            IAvGraphState * This,
            /* [retval][out] */ AvUnits *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWidthUnits )( 
            IAvGraphState * This,
            /* [in] */ AvUnits newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineStyle )( 
            IAvGraphState * This,
            /* [retval][out] */ AvLineStyle *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineStyle )( 
            IAvGraphState * This,
            /* [in] */ AvLineStyle newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowDataTip )( 
            IAvGraphState * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowDataTip )( 
            IAvGraphState * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WallStyle )( 
            IAvGraphState * This,
            /* [retval][out] */ AvWallStyle *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WallStyle )( 
            IAvGraphState * This,
            /* [in] */ AvWallStyle newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RowMajor )( 
            IAvGraphState * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RowMajor )( 
            IAvGraphState * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvGraphStateVtbl;

    interface IAvGraphState
    {
        CONST_VTBL struct IAvGraphStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGraphState_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGraphState_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGraphState_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGraphState_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGraphState_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGraphState_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGraphState_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGraphState_get_Visible(This,pVal)	\
    (This)->lpVtbl -> get_Visible(This,pVal)

#define IAvGraphState_put_Visible(This,newVal)	\
    (This)->lpVtbl -> put_Visible(This,newVal)

#define IAvGraphState_get_LineWidth(This,pVal)	\
    (This)->lpVtbl -> get_LineWidth(This,pVal)

#define IAvGraphState_put_LineWidth(This,newVal)	\
    (This)->lpVtbl -> put_LineWidth(This,newVal)

#define IAvGraphState_get_LineWidthUnits(This,pVal)	\
    (This)->lpVtbl -> get_LineWidthUnits(This,pVal)

#define IAvGraphState_put_LineWidthUnits(This,newVal)	\
    (This)->lpVtbl -> put_LineWidthUnits(This,newVal)

#define IAvGraphState_get_LineStyle(This,pVal)	\
    (This)->lpVtbl -> get_LineStyle(This,pVal)

#define IAvGraphState_put_LineStyle(This,newVal)	\
    (This)->lpVtbl -> put_LineStyle(This,newVal)

#define IAvGraphState_get_ShowDataTip(This,pVal)	\
    (This)->lpVtbl -> get_ShowDataTip(This,pVal)

#define IAvGraphState_put_ShowDataTip(This,newVal)	\
    (This)->lpVtbl -> put_ShowDataTip(This,newVal)

#define IAvGraphState_get_WallStyle(This,pVal)	\
    (This)->lpVtbl -> get_WallStyle(This,pVal)

#define IAvGraphState_put_WallStyle(This,newVal)	\
    (This)->lpVtbl -> put_WallStyle(This,newVal)

#define IAvGraphState_get_RowMajor(This,pVal)	\
    (This)->lpVtbl -> get_RowMajor(This,pVal)

#define IAvGraphState_put_RowMajor(This,newVal)	\
    (This)->lpVtbl -> put_RowMajor(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphState_get_Visible_Proxy( 
    IAvGraphState * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvGraphState_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphState_put_Visible_Proxy( 
    IAvGraphState * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvGraphState_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphState_get_LineWidth_Proxy( 
    IAvGraphState * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvGraphState_get_LineWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphState_put_LineWidth_Proxy( 
    IAvGraphState * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvGraphState_put_LineWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphState_get_LineWidthUnits_Proxy( 
    IAvGraphState * This,
    /* [retval][out] */ AvUnits *pVal);


void __RPC_STUB IAvGraphState_get_LineWidthUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphState_put_LineWidthUnits_Proxy( 
    IAvGraphState * This,
    /* [in] */ AvUnits newVal);


void __RPC_STUB IAvGraphState_put_LineWidthUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphState_get_LineStyle_Proxy( 
    IAvGraphState * This,
    /* [retval][out] */ AvLineStyle *pVal);


void __RPC_STUB IAvGraphState_get_LineStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphState_put_LineStyle_Proxy( 
    IAvGraphState * This,
    /* [in] */ AvLineStyle newVal);


void __RPC_STUB IAvGraphState_put_LineStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphState_get_ShowDataTip_Proxy( 
    IAvGraphState * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvGraphState_get_ShowDataTip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphState_put_ShowDataTip_Proxy( 
    IAvGraphState * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvGraphState_put_ShowDataTip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphState_get_WallStyle_Proxy( 
    IAvGraphState * This,
    /* [retval][out] */ AvWallStyle *pVal);


void __RPC_STUB IAvGraphState_get_WallStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphState_put_WallStyle_Proxy( 
    IAvGraphState * This,
    /* [in] */ AvWallStyle newVal);


void __RPC_STUB IAvGraphState_put_WallStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphState_get_RowMajor_Proxy( 
    IAvGraphState * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvGraphState_get_RowMajor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphState_put_RowMajor_Proxy( 
    IAvGraphState * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvGraphState_put_RowMajor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGraphState_INTERFACE_DEFINED__ */


#ifndef __IAvPlotColor_INTERFACE_DEFINED__
#define __IAvPlotColor_INTERFACE_DEFINED__

/* interface IAvPlotColor */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPlotColor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2C0E9AF7-9F0B-4f7b-A8D3-CDB8C8D9EC71")
    IAvPlotColor : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Front( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Front( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Back( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Back( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transparency( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Transparency( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Lighting( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Lighting( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorSourceFormat( 
            /* [in] */ AvColorFormat newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorSourceFormat( 
            /* [retval][out] */ AvColorFormat *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PaletteRangeStart( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PaletteRangeStart( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PaletteRangeEnd( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PaletteRangeEnd( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PaletteDataSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PaletteDataSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PaletteScaleSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PaletteScaleSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PaletteDataFormat( 
            /* [in] */ AvColorFormat newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PaletteDataFormat( 
            /* [retval][out] */ AvColorFormat *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorTransferSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorTransferSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorMask( 
            /* [in] */ AvColorComponent Channel,
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorMask( 
            /* [in] */ AvColorComponent Channel,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPlotColorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPlotColor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPlotColor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPlotColor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPlotColor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPlotColor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPlotColor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPlotColor * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Front )( 
            IAvPlotColor * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Front )( 
            IAvPlotColor * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Back )( 
            IAvPlotColor * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Back )( 
            IAvPlotColor * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transparency )( 
            IAvPlotColor * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Transparency )( 
            IAvPlotColor * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lighting )( 
            IAvPlotColor * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Lighting )( 
            IAvPlotColor * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorSource )( 
            IAvPlotColor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorSource )( 
            IAvPlotColor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorSourceFormat )( 
            IAvPlotColor * This,
            /* [in] */ AvColorFormat newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorSourceFormat )( 
            IAvPlotColor * This,
            /* [retval][out] */ AvColorFormat *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PaletteRangeStart )( 
            IAvPlotColor * This,
            /* [in] */ double newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PaletteRangeStart )( 
            IAvPlotColor * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PaletteRangeEnd )( 
            IAvPlotColor * This,
            /* [in] */ double newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PaletteRangeEnd )( 
            IAvPlotColor * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PaletteDataSource )( 
            IAvPlotColor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PaletteDataSource )( 
            IAvPlotColor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PaletteScaleSource )( 
            IAvPlotColor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PaletteScaleSource )( 
            IAvPlotColor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PaletteDataFormat )( 
            IAvPlotColor * This,
            /* [in] */ AvColorFormat newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PaletteDataFormat )( 
            IAvPlotColor * This,
            /* [retval][out] */ AvColorFormat *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorTransferSource )( 
            IAvPlotColor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorTransferSource )( 
            IAvPlotColor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorMask )( 
            IAvPlotColor * This,
            /* [in] */ AvColorComponent Channel,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMask )( 
            IAvPlotColor * This,
            /* [in] */ AvColorComponent Channel,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IAvPlotColorVtbl;

    interface IAvPlotColor
    {
        CONST_VTBL struct IAvPlotColorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPlotColor_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPlotColor_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPlotColor_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPlotColor_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPlotColor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPlotColor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPlotColor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPlotColor_get_Front(This,pVal)	\
    (This)->lpVtbl -> get_Front(This,pVal)

#define IAvPlotColor_put_Front(This,newVal)	\
    (This)->lpVtbl -> put_Front(This,newVal)

#define IAvPlotColor_get_Back(This,pVal)	\
    (This)->lpVtbl -> get_Back(This,pVal)

#define IAvPlotColor_put_Back(This,newVal)	\
    (This)->lpVtbl -> put_Back(This,newVal)

#define IAvPlotColor_get_Transparency(This,pVal)	\
    (This)->lpVtbl -> get_Transparency(This,pVal)

#define IAvPlotColor_put_Transparency(This,newVal)	\
    (This)->lpVtbl -> put_Transparency(This,newVal)

#define IAvPlotColor_get_Lighting(This,pVal)	\
    (This)->lpVtbl -> get_Lighting(This,pVal)

#define IAvPlotColor_put_Lighting(This,newVal)	\
    (This)->lpVtbl -> put_Lighting(This,newVal)

#define IAvPlotColor_put_ColorSource(This,newVal)	\
    (This)->lpVtbl -> put_ColorSource(This,newVal)

#define IAvPlotColor_get_ColorSource(This,pVal)	\
    (This)->lpVtbl -> get_ColorSource(This,pVal)

#define IAvPlotColor_put_ColorSourceFormat(This,newVal)	\
    (This)->lpVtbl -> put_ColorSourceFormat(This,newVal)

#define IAvPlotColor_get_ColorSourceFormat(This,pVal)	\
    (This)->lpVtbl -> get_ColorSourceFormat(This,pVal)

#define IAvPlotColor_put_PaletteRangeStart(This,newVal)	\
    (This)->lpVtbl -> put_PaletteRangeStart(This,newVal)

#define IAvPlotColor_get_PaletteRangeStart(This,pVal)	\
    (This)->lpVtbl -> get_PaletteRangeStart(This,pVal)

#define IAvPlotColor_put_PaletteRangeEnd(This,newVal)	\
    (This)->lpVtbl -> put_PaletteRangeEnd(This,newVal)

#define IAvPlotColor_get_PaletteRangeEnd(This,pVal)	\
    (This)->lpVtbl -> get_PaletteRangeEnd(This,pVal)

#define IAvPlotColor_get_PaletteDataSource(This,pVal)	\
    (This)->lpVtbl -> get_PaletteDataSource(This,pVal)

#define IAvPlotColor_put_PaletteDataSource(This,newVal)	\
    (This)->lpVtbl -> put_PaletteDataSource(This,newVal)

#define IAvPlotColor_get_PaletteScaleSource(This,pVal)	\
    (This)->lpVtbl -> get_PaletteScaleSource(This,pVal)

#define IAvPlotColor_put_PaletteScaleSource(This,newVal)	\
    (This)->lpVtbl -> put_PaletteScaleSource(This,newVal)

#define IAvPlotColor_put_PaletteDataFormat(This,newVal)	\
    (This)->lpVtbl -> put_PaletteDataFormat(This,newVal)

#define IAvPlotColor_get_PaletteDataFormat(This,pVal)	\
    (This)->lpVtbl -> get_PaletteDataFormat(This,pVal)

#define IAvPlotColor_get_ColorTransferSource(This,pVal)	\
    (This)->lpVtbl -> get_ColorTransferSource(This,pVal)

#define IAvPlotColor_put_ColorTransferSource(This,newVal)	\
    (This)->lpVtbl -> put_ColorTransferSource(This,newVal)

#define IAvPlotColor_put_ColorMask(This,Channel,newVal)	\
    (This)->lpVtbl -> put_ColorMask(This,Channel,newVal)

#define IAvPlotColor_get_ColorMask(This,Channel,pVal)	\
    (This)->lpVtbl -> get_ColorMask(This,Channel,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_Front_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlotColor_get_Front_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_Front_Proxy( 
    IAvPlotColor * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPlotColor_put_Front_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_Back_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlotColor_get_Back_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_Back_Proxy( 
    IAvPlotColor * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPlotColor_put_Back_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_Transparency_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvPlotColor_get_Transparency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_Transparency_Proxy( 
    IAvPlotColor * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvPlotColor_put_Transparency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_Lighting_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotColor_get_Lighting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_Lighting_Proxy( 
    IAvPlotColor * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotColor_put_Lighting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_ColorSource_Proxy( 
    IAvPlotColor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotColor_put_ColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_ColorSource_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotColor_get_ColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_ColorSourceFormat_Proxy( 
    IAvPlotColor * This,
    /* [in] */ AvColorFormat newVal);


void __RPC_STUB IAvPlotColor_put_ColorSourceFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_ColorSourceFormat_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ AvColorFormat *pVal);


void __RPC_STUB IAvPlotColor_get_ColorSourceFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_PaletteRangeStart_Proxy( 
    IAvPlotColor * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvPlotColor_put_PaletteRangeStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_PaletteRangeStart_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvPlotColor_get_PaletteRangeStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_PaletteRangeEnd_Proxy( 
    IAvPlotColor * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvPlotColor_put_PaletteRangeEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_PaletteRangeEnd_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvPlotColor_get_PaletteRangeEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_PaletteDataSource_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotColor_get_PaletteDataSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_PaletteDataSource_Proxy( 
    IAvPlotColor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotColor_put_PaletteDataSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_PaletteScaleSource_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotColor_get_PaletteScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_PaletteScaleSource_Proxy( 
    IAvPlotColor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotColor_put_PaletteScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_PaletteDataFormat_Proxy( 
    IAvPlotColor * This,
    /* [in] */ AvColorFormat newVal);


void __RPC_STUB IAvPlotColor_put_PaletteDataFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_PaletteDataFormat_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ AvColorFormat *pVal);


void __RPC_STUB IAvPlotColor_get_PaletteDataFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_ColorTransferSource_Proxy( 
    IAvPlotColor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotColor_get_ColorTransferSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_ColorTransferSource_Proxy( 
    IAvPlotColor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotColor_put_ColorTransferSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_put_ColorMask_Proxy( 
    IAvPlotColor * This,
    /* [in] */ AvColorComponent Channel,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotColor_put_ColorMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotColor_get_ColorMask_Proxy( 
    IAvPlotColor * This,
    /* [in] */ AvColorComponent Channel,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotColor_get_ColorMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPlotColor_INTERFACE_DEFINED__ */


#ifndef __IAvPlotMarker_INTERFACE_DEFINED__
#define __IAvPlotMarker_INTERFACE_DEFINED__

/* interface IAvPlotMarker */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPlotMarker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C3A7557-8B0D-477f-8BA0-181311017A29")
    IAvPlotMarker : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerType( 
            /* [retval][out] */ AvMarkerType *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerType( 
            /* [in] */ AvMarkerType newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerTypeSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerTypeSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeUnits( 
            /* [retval][out] */ AvUnits *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SizeUnits( 
            /* [in] */ AvUnits newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SizeSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UseColorSource( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseColorSource( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerSection( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerSection( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPlotMarkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPlotMarker * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPlotMarker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPlotMarker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPlotMarker * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPlotMarker * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPlotMarker * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPlotMarker * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IAvPlotMarker * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IAvPlotMarker * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MarkerType )( 
            IAvPlotMarker * This,
            /* [retval][out] */ AvMarkerType *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MarkerType )( 
            IAvPlotMarker * This,
            /* [in] */ AvMarkerType newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MarkerTypeSource )( 
            IAvPlotMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MarkerTypeSource )( 
            IAvPlotMarker * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IAvPlotMarker * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IAvPlotMarker * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeUnits )( 
            IAvPlotMarker * This,
            /* [retval][out] */ AvUnits *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SizeUnits )( 
            IAvPlotMarker * This,
            /* [in] */ AvUnits newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeSource )( 
            IAvPlotMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SizeSource )( 
            IAvPlotMarker * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseColorSource )( 
            IAvPlotMarker * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseColorSource )( 
            IAvPlotMarker * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvPlotMarker * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IAvPlotMarker * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MarkerSection )( 
            IAvPlotMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MarkerSection )( 
            IAvPlotMarker * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvPlotMarkerVtbl;

    interface IAvPlotMarker
    {
        CONST_VTBL struct IAvPlotMarkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPlotMarker_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPlotMarker_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPlotMarker_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPlotMarker_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPlotMarker_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPlotMarker_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPlotMarker_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPlotMarker_get_Visible(This,pVal)	\
    (This)->lpVtbl -> get_Visible(This,pVal)

#define IAvPlotMarker_put_Visible(This,newVal)	\
    (This)->lpVtbl -> put_Visible(This,newVal)

#define IAvPlotMarker_get_MarkerType(This,pVal)	\
    (This)->lpVtbl -> get_MarkerType(This,pVal)

#define IAvPlotMarker_put_MarkerType(This,newVal)	\
    (This)->lpVtbl -> put_MarkerType(This,newVal)

#define IAvPlotMarker_get_MarkerTypeSource(This,pVal)	\
    (This)->lpVtbl -> get_MarkerTypeSource(This,pVal)

#define IAvPlotMarker_put_MarkerTypeSource(This,newVal)	\
    (This)->lpVtbl -> put_MarkerTypeSource(This,newVal)

#define IAvPlotMarker_get_Size(This,pVal)	\
    (This)->lpVtbl -> get_Size(This,pVal)

#define IAvPlotMarker_put_Size(This,newVal)	\
    (This)->lpVtbl -> put_Size(This,newVal)

#define IAvPlotMarker_get_SizeUnits(This,pVal)	\
    (This)->lpVtbl -> get_SizeUnits(This,pVal)

#define IAvPlotMarker_put_SizeUnits(This,newVal)	\
    (This)->lpVtbl -> put_SizeUnits(This,newVal)

#define IAvPlotMarker_get_SizeSource(This,pVal)	\
    (This)->lpVtbl -> get_SizeSource(This,pVal)

#define IAvPlotMarker_put_SizeSource(This,newVal)	\
    (This)->lpVtbl -> put_SizeSource(This,newVal)

#define IAvPlotMarker_put_UseColorSource(This,newVal)	\
    (This)->lpVtbl -> put_UseColorSource(This,newVal)

#define IAvPlotMarker_get_UseColorSource(This,pVal)	\
    (This)->lpVtbl -> get_UseColorSource(This,pVal)

#define IAvPlotMarker_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvPlotMarker_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IAvPlotMarker_get_MarkerSection(This,pVal)	\
    (This)->lpVtbl -> get_MarkerSection(This,pVal)

#define IAvPlotMarker_put_MarkerSection(This,newVal)	\
    (This)->lpVtbl -> put_MarkerSection(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_Visible_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotMarker_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_Visible_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotMarker_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_MarkerType_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ AvMarkerType *pVal);


void __RPC_STUB IAvPlotMarker_get_MarkerType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_MarkerType_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ AvMarkerType newVal);


void __RPC_STUB IAvPlotMarker_put_MarkerType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_MarkerTypeSource_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotMarker_get_MarkerTypeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_MarkerTypeSource_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotMarker_put_MarkerTypeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_Size_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvPlotMarker_get_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_Size_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvPlotMarker_put_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_SizeUnits_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ AvUnits *pVal);


void __RPC_STUB IAvPlotMarker_get_SizeUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_SizeUnits_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ AvUnits newVal);


void __RPC_STUB IAvPlotMarker_put_SizeUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_SizeSource_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotMarker_get_SizeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_SizeSource_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotMarker_put_SizeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_UseColorSource_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotMarker_put_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_UseColorSource_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotMarker_get_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_Color_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlotMarker_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_Color_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPlotMarker_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_get_MarkerSection_Proxy( 
    IAvPlotMarker * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotMarker_get_MarkerSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotMarker_put_MarkerSection_Proxy( 
    IAvPlotMarker * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotMarker_put_MarkerSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPlotMarker_INTERFACE_DEFINED__ */


#ifndef __IAvPlotGrid_INTERFACE_DEFINED__
#define __IAvPlotGrid_INTERFACE_DEFINED__

/* interface IAvPlotGrid */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPlotGrid;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5338BDE8-5267-4a40-91D8-4E8341DD57E3")
    IAvPlotGrid : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RowSpacing( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RowSpacing( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColSpacing( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColSpacing( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseColorSource( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UseColorSource( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPlotGridVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPlotGrid * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPlotGrid * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPlotGrid * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPlotGrid * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPlotGrid * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPlotGrid * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPlotGrid * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IAvPlotGrid * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IAvPlotGrid * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvPlotGrid * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IAvPlotGrid * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RowSpacing )( 
            IAvPlotGrid * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RowSpacing )( 
            IAvPlotGrid * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColSpacing )( 
            IAvPlotGrid * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColSpacing )( 
            IAvPlotGrid * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseColorSource )( 
            IAvPlotGrid * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseColorSource )( 
            IAvPlotGrid * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvPlotGridVtbl;

    interface IAvPlotGrid
    {
        CONST_VTBL struct IAvPlotGridVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPlotGrid_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPlotGrid_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPlotGrid_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPlotGrid_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPlotGrid_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPlotGrid_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPlotGrid_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPlotGrid_get_Visible(This,pVal)	\
    (This)->lpVtbl -> get_Visible(This,pVal)

#define IAvPlotGrid_put_Visible(This,newVal)	\
    (This)->lpVtbl -> put_Visible(This,newVal)

#define IAvPlotGrid_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvPlotGrid_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IAvPlotGrid_get_RowSpacing(This,pVal)	\
    (This)->lpVtbl -> get_RowSpacing(This,pVal)

#define IAvPlotGrid_put_RowSpacing(This,newVal)	\
    (This)->lpVtbl -> put_RowSpacing(This,newVal)

#define IAvPlotGrid_get_ColSpacing(This,pVal)	\
    (This)->lpVtbl -> get_ColSpacing(This,pVal)

#define IAvPlotGrid_put_ColSpacing(This,newVal)	\
    (This)->lpVtbl -> put_ColSpacing(This,newVal)

#define IAvPlotGrid_get_UseColorSource(This,pVal)	\
    (This)->lpVtbl -> get_UseColorSource(This,pVal)

#define IAvPlotGrid_put_UseColorSource(This,newVal)	\
    (This)->lpVtbl -> put_UseColorSource(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_get_Visible_Proxy( 
    IAvPlotGrid * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotGrid_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_put_Visible_Proxy( 
    IAvPlotGrid * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotGrid_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_get_Color_Proxy( 
    IAvPlotGrid * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlotGrid_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_put_Color_Proxy( 
    IAvPlotGrid * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPlotGrid_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_get_RowSpacing_Proxy( 
    IAvPlotGrid * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlotGrid_get_RowSpacing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_put_RowSpacing_Proxy( 
    IAvPlotGrid * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPlotGrid_put_RowSpacing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_get_ColSpacing_Proxy( 
    IAvPlotGrid * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlotGrid_get_ColSpacing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_put_ColSpacing_Proxy( 
    IAvPlotGrid * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPlotGrid_put_ColSpacing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_get_UseColorSource_Proxy( 
    IAvPlotGrid * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotGrid_get_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotGrid_put_UseColorSource_Proxy( 
    IAvPlotGrid * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotGrid_put_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPlotGrid_INTERFACE_DEFINED__ */


#ifndef __IAvPlotLabel_INTERFACE_DEFINED__
#define __IAvPlotLabel_INTERFACE_DEFINED__

/* interface IAvPlotLabel */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPlotLabel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF6CFF1C-87F9-4a4c-B0EB-9AF60EE2121E")
    IAvPlotLabel : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FontFace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FontFace( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FontSize( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FontSize( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FontSizeUnits( 
            /* [retval][out] */ AvUnits *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FontSizeUnits( 
            /* [in] */ AvUnits newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UseColorSource( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseColorSource( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PositionOffset( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PositionOffset( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PositionOffsetUnits( 
            /* [retval][out] */ AvUnits *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PositionOffsetUnits( 
            /* [in] */ AvUnits newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TextSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TextSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HJustify( 
            /* [retval][out] */ AvHJustify *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HJustify( 
            /* [in] */ AvHJustify newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VJustify( 
            /* [retval][out] */ AvVJustify *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VJustify( 
            /* [in] */ AvVJustify newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LabelSection( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LabelSection( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPlotLabelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPlotLabel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPlotLabel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPlotLabel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPlotLabel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPlotLabel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPlotLabel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPlotLabel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IAvPlotLabel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IAvPlotLabel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontFace )( 
            IAvPlotLabel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontFace )( 
            IAvPlotLabel * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            IAvPlotLabel * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontSize )( 
            IAvPlotLabel * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSizeUnits )( 
            IAvPlotLabel * This,
            /* [retval][out] */ AvUnits *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontSizeUnits )( 
            IAvPlotLabel * This,
            /* [in] */ AvUnits newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvPlotLabel * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IAvPlotLabel * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseColorSource )( 
            IAvPlotLabel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseColorSource )( 
            IAvPlotLabel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PositionOffset )( 
            IAvPlotLabel * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PositionOffset )( 
            IAvPlotLabel * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PositionOffsetUnits )( 
            IAvPlotLabel * This,
            /* [retval][out] */ AvUnits *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PositionOffsetUnits )( 
            IAvPlotLabel * This,
            /* [in] */ AvUnits newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextSource )( 
            IAvPlotLabel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TextSource )( 
            IAvPlotLabel * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IAvPlotLabel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IAvPlotLabel * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HJustify )( 
            IAvPlotLabel * This,
            /* [retval][out] */ AvHJustify *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HJustify )( 
            IAvPlotLabel * This,
            /* [in] */ AvHJustify newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VJustify )( 
            IAvPlotLabel * This,
            /* [retval][out] */ AvVJustify *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VJustify )( 
            IAvPlotLabel * This,
            /* [in] */ AvVJustify newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LabelSection )( 
            IAvPlotLabel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LabelSection )( 
            IAvPlotLabel * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvPlotLabelVtbl;

    interface IAvPlotLabel
    {
        CONST_VTBL struct IAvPlotLabelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPlotLabel_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPlotLabel_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPlotLabel_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPlotLabel_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPlotLabel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPlotLabel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPlotLabel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPlotLabel_get_Visible(This,pVal)	\
    (This)->lpVtbl -> get_Visible(This,pVal)

#define IAvPlotLabel_put_Visible(This,newVal)	\
    (This)->lpVtbl -> put_Visible(This,newVal)

#define IAvPlotLabel_get_FontFace(This,pVal)	\
    (This)->lpVtbl -> get_FontFace(This,pVal)

#define IAvPlotLabel_put_FontFace(This,newVal)	\
    (This)->lpVtbl -> put_FontFace(This,newVal)

#define IAvPlotLabel_get_FontSize(This,pVal)	\
    (This)->lpVtbl -> get_FontSize(This,pVal)

#define IAvPlotLabel_put_FontSize(This,newVal)	\
    (This)->lpVtbl -> put_FontSize(This,newVal)

#define IAvPlotLabel_get_FontSizeUnits(This,pVal)	\
    (This)->lpVtbl -> get_FontSizeUnits(This,pVal)

#define IAvPlotLabel_put_FontSizeUnits(This,newVal)	\
    (This)->lpVtbl -> put_FontSizeUnits(This,newVal)

#define IAvPlotLabel_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvPlotLabel_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IAvPlotLabel_put_UseColorSource(This,newVal)	\
    (This)->lpVtbl -> put_UseColorSource(This,newVal)

#define IAvPlotLabel_get_UseColorSource(This,pVal)	\
    (This)->lpVtbl -> get_UseColorSource(This,pVal)

#define IAvPlotLabel_get_PositionOffset(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_PositionOffset(This,nCoord,pVal)

#define IAvPlotLabel_put_PositionOffset(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_PositionOffset(This,nCoord,newVal)

#define IAvPlotLabel_get_PositionOffsetUnits(This,pVal)	\
    (This)->lpVtbl -> get_PositionOffsetUnits(This,pVal)

#define IAvPlotLabel_put_PositionOffsetUnits(This,newVal)	\
    (This)->lpVtbl -> put_PositionOffsetUnits(This,newVal)

#define IAvPlotLabel_get_TextSource(This,pVal)	\
    (This)->lpVtbl -> get_TextSource(This,pVal)

#define IAvPlotLabel_put_TextSource(This,newVal)	\
    (This)->lpVtbl -> put_TextSource(This,newVal)

#define IAvPlotLabel_get_Text(This,pVal)	\
    (This)->lpVtbl -> get_Text(This,pVal)

#define IAvPlotLabel_put_Text(This,newVal)	\
    (This)->lpVtbl -> put_Text(This,newVal)

#define IAvPlotLabel_get_HJustify(This,pVal)	\
    (This)->lpVtbl -> get_HJustify(This,pVal)

#define IAvPlotLabel_put_HJustify(This,newVal)	\
    (This)->lpVtbl -> put_HJustify(This,newVal)

#define IAvPlotLabel_get_VJustify(This,pVal)	\
    (This)->lpVtbl -> get_VJustify(This,pVal)

#define IAvPlotLabel_put_VJustify(This,newVal)	\
    (This)->lpVtbl -> put_VJustify(This,newVal)

#define IAvPlotLabel_get_LabelSection(This,pVal)	\
    (This)->lpVtbl -> get_LabelSection(This,pVal)

#define IAvPlotLabel_put_LabelSection(This,newVal)	\
    (This)->lpVtbl -> put_LabelSection(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_Visible_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotLabel_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_Visible_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotLabel_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_FontFace_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotLabel_get_FontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_FontFace_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotLabel_put_FontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_FontSize_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvPlotLabel_get_FontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_FontSize_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvPlotLabel_put_FontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_FontSizeUnits_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ AvUnits *pVal);


void __RPC_STUB IAvPlotLabel_get_FontSizeUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_FontSizeUnits_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ AvUnits newVal);


void __RPC_STUB IAvPlotLabel_put_FontSizeUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_Color_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlotLabel_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_Color_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvPlotLabel_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_UseColorSource_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotLabel_put_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_UseColorSource_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotLabel_get_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_PositionOffset_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvPlotLabel_get_PositionOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_PositionOffset_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ float newVal);


void __RPC_STUB IAvPlotLabel_put_PositionOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_PositionOffsetUnits_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ AvUnits *pVal);


void __RPC_STUB IAvPlotLabel_get_PositionOffsetUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_PositionOffsetUnits_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ AvUnits newVal);


void __RPC_STUB IAvPlotLabel_put_PositionOffsetUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_TextSource_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotLabel_get_TextSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_TextSource_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotLabel_put_TextSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_Text_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotLabel_get_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_Text_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotLabel_put_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_HJustify_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ AvHJustify *pVal);


void __RPC_STUB IAvPlotLabel_get_HJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_HJustify_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ AvHJustify newVal);


void __RPC_STUB IAvPlotLabel_put_HJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_VJustify_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ AvVJustify *pVal);


void __RPC_STUB IAvPlotLabel_get_VJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_VJustify_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ AvVJustify newVal);


void __RPC_STUB IAvPlotLabel_put_VJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_get_LabelSection_Proxy( 
    IAvPlotLabel * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotLabel_get_LabelSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotLabel_put_LabelSection_Proxy( 
    IAvPlotLabel * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotLabel_put_LabelSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPlotLabel_INTERFACE_DEFINED__ */


#ifndef __IAvPlotSurface_INTERFACE_DEFINED__
#define __IAvPlotSurface_INTERFACE_DEFINED__

/* interface IAvPlotSurface */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPlotSurface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CA06A957-1894-40d7-9C0B-F9473DE3A3D6")
    IAvPlotSurface : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TwoSided( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TwoSided( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HighLight( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HighLight( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FlatShading( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FlatShading( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CullFront( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CullFront( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CullBack( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CullBack( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VertexOrder( 
            /* [retval][out] */ AvVertexOrder *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VertexOrder( 
            /* [in] */ AvVertexOrder newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CreaseAngle( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CreaseAngle( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Shininess( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Shininess( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NormalSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NormalSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPlotSurfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPlotSurface * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPlotSurface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPlotSurface * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPlotSurface * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPlotSurface * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPlotSurface * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPlotSurface * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TwoSided )( 
            IAvPlotSurface * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TwoSided )( 
            IAvPlotSurface * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighLight )( 
            IAvPlotSurface * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HighLight )( 
            IAvPlotSurface * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FlatShading )( 
            IAvPlotSurface * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FlatShading )( 
            IAvPlotSurface * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CullFront )( 
            IAvPlotSurface * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CullFront )( 
            IAvPlotSurface * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CullBack )( 
            IAvPlotSurface * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CullBack )( 
            IAvPlotSurface * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexOrder )( 
            IAvPlotSurface * This,
            /* [retval][out] */ AvVertexOrder *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VertexOrder )( 
            IAvPlotSurface * This,
            /* [in] */ AvVertexOrder newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CreaseAngle )( 
            IAvPlotSurface * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CreaseAngle )( 
            IAvPlotSurface * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Shininess )( 
            IAvPlotSurface * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Shininess )( 
            IAvPlotSurface * This,
            /* [in] */ float newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NormalSource )( 
            IAvPlotSurface * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NormalSource )( 
            IAvPlotSurface * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvPlotSurfaceVtbl;

    interface IAvPlotSurface
    {
        CONST_VTBL struct IAvPlotSurfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPlotSurface_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPlotSurface_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPlotSurface_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPlotSurface_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPlotSurface_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPlotSurface_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPlotSurface_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPlotSurface_get_TwoSided(This,pVal)	\
    (This)->lpVtbl -> get_TwoSided(This,pVal)

#define IAvPlotSurface_put_TwoSided(This,newVal)	\
    (This)->lpVtbl -> put_TwoSided(This,newVal)

#define IAvPlotSurface_get_HighLight(This,pVal)	\
    (This)->lpVtbl -> get_HighLight(This,pVal)

#define IAvPlotSurface_put_HighLight(This,newVal)	\
    (This)->lpVtbl -> put_HighLight(This,newVal)

#define IAvPlotSurface_get_FlatShading(This,pVal)	\
    (This)->lpVtbl -> get_FlatShading(This,pVal)

#define IAvPlotSurface_put_FlatShading(This,newVal)	\
    (This)->lpVtbl -> put_FlatShading(This,newVal)

#define IAvPlotSurface_get_CullFront(This,pVal)	\
    (This)->lpVtbl -> get_CullFront(This,pVal)

#define IAvPlotSurface_put_CullFront(This,newVal)	\
    (This)->lpVtbl -> put_CullFront(This,newVal)

#define IAvPlotSurface_get_CullBack(This,pVal)	\
    (This)->lpVtbl -> get_CullBack(This,pVal)

#define IAvPlotSurface_put_CullBack(This,newVal)	\
    (This)->lpVtbl -> put_CullBack(This,newVal)

#define IAvPlotSurface_get_VertexOrder(This,pVal)	\
    (This)->lpVtbl -> get_VertexOrder(This,pVal)

#define IAvPlotSurface_put_VertexOrder(This,newVal)	\
    (This)->lpVtbl -> put_VertexOrder(This,newVal)

#define IAvPlotSurface_get_CreaseAngle(This,pVal)	\
    (This)->lpVtbl -> get_CreaseAngle(This,pVal)

#define IAvPlotSurface_put_CreaseAngle(This,newVal)	\
    (This)->lpVtbl -> put_CreaseAngle(This,newVal)

#define IAvPlotSurface_get_Shininess(This,pVal)	\
    (This)->lpVtbl -> get_Shininess(This,pVal)

#define IAvPlotSurface_put_Shininess(This,newVal)	\
    (This)->lpVtbl -> put_Shininess(This,newVal)

#define IAvPlotSurface_get_NormalSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_NormalSource(This,nCoord,pVal)

#define IAvPlotSurface_put_NormalSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_NormalSource(This,nCoord,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_TwoSided_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotSurface_get_TwoSided_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_TwoSided_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotSurface_put_TwoSided_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_HighLight_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotSurface_get_HighLight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_HighLight_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotSurface_put_HighLight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_FlatShading_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotSurface_get_FlatShading_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_FlatShading_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotSurface_put_FlatShading_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_CullFront_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotSurface_get_CullFront_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_CullFront_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotSurface_put_CullFront_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_CullBack_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPlotSurface_get_CullBack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_CullBack_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPlotSurface_put_CullBack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_VertexOrder_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ AvVertexOrder *pVal);


void __RPC_STUB IAvPlotSurface_get_VertexOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_VertexOrder_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ AvVertexOrder newVal);


void __RPC_STUB IAvPlotSurface_put_VertexOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_CreaseAngle_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvPlotSurface_get_CreaseAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_CreaseAngle_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvPlotSurface_put_CreaseAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_Shininess_Proxy( 
    IAvPlotSurface * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvPlotSurface_get_Shininess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_Shininess_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvPlotSurface_put_Shininess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_get_NormalSource_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlotSurface_get_NormalSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlotSurface_put_NormalSource_Proxy( 
    IAvPlotSurface * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlotSurface_put_NormalSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPlotSurface_INTERFACE_DEFINED__ */


#ifndef __IAvPlot_INTERFACE_DEFINED__
#define __IAvPlot_INTERFACE_DEFINED__

/* interface IAvPlot */
/* [custom][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAvPlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05586FFF-AC02-4f61-AC12-84876B04E6F3")
    IAvPlot : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotType( 
            /* [retval][out] */ AvPlotType *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dimension( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Renderer( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPlot * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvPlot * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvPlot * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotType )( 
            IAvPlot * This,
            /* [retval][out] */ AvPlotType *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dimension )( 
            IAvPlot * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Renderer )( 
            IAvPlot * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvPlot * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvPlot * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvPlot * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvPlot * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvPlot * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvPlot * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvPlot * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        END_INTERFACE
    } IAvPlotVtbl;

    interface IAvPlot
    {
        CONST_VTBL struct IAvPlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPlot_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvPlot_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvPlot_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvPlot_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvPlot_get_PlotType(This,pVal)	\
    (This)->lpVtbl -> get_PlotType(This,pVal)

#define IAvPlot_get_Dimension(This,pVal)	\
    (This)->lpVtbl -> get_Dimension(This,pVal)

#define IAvPlot_get_Renderer(This,pVal)	\
    (This)->lpVtbl -> get_Renderer(This,pVal)

#define IAvPlot_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvPlot_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvPlot_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvPlot_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvPlot_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvPlot_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvPlot_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Name_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlot_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvPlot_put_Name_Proxy( 
    IAvPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlot_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvPlot_GetProperty_Proxy( 
    IAvPlot * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvPlot_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvPlot_SetProperty_Proxy( 
    IAvPlot * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvPlot_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_PlotType_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ AvPlotType *pVal);


void __RPC_STUB IAvPlot_get_PlotType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Dimension_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAvPlot_get_Dimension_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Renderer_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IUnknown **pVal);


void __RPC_STUB IAvPlot_get_Renderer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Position_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvPlot_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Transform_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvPlot_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Border_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvPlot_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Color_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvPlot_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_GraphState_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvPlot_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Marker_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvPlot_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvPlot_get_Label_Proxy( 
    IAvPlot * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvPlot_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPlot_INTERFACE_DEFINED__ */


#ifndef __IAvPlots_INTERFACE_DEFINED__
#define __IAvPlots_INTERFACE_DEFINED__

/* interface IAvPlots */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPlots;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3729E4BC-BE4C-4d74-8632-CBD8151CA4FD")
    IAvPlots : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvPlot **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePlot( 
            /* [in] */ BSTR name,
            /* [in] */ AvPlotType plotType,
            /* [retval][out] */ LPDISPATCH *pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPlotsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPlots * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPlots * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPlots * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPlots * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPlots * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPlots * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPlots * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvPlots * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvPlot **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvPlots * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvPlots * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvPlots * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvPlots * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvPlots * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvPlots * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvPlots * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePlot )( 
            IAvPlots * This,
            /* [in] */ BSTR name,
            /* [in] */ AvPlotType plotType,
            /* [retval][out] */ LPDISPATCH *pItem);
        
        END_INTERFACE
    } IAvPlotsVtbl;

    interface IAvPlots
    {
        CONST_VTBL struct IAvPlotsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPlots_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPlots_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPlots_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPlots_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPlots_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPlots_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPlots_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPlots_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvPlots_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvPlots_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvPlots_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvPlots_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvPlots_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvPlots_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvPlots_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvPlots_CreatePlot(This,name,plotType,pItem)	\
    (This)->lpVtbl -> CreatePlot(This,name,plotType,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPlots_Item_Proxy( 
    IAvPlots * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvPlot **pItem);


void __RPC_STUB IAvPlots_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvPlots_get__NewEnum_Proxy( 
    IAvPlots * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvPlots_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPlots_get_Name_Proxy( 
    IAvPlots * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPlots_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPlots_put_Name_Proxy( 
    IAvPlots * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPlots_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPlots_GetProperty_Proxy( 
    IAvPlots * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvPlots_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPlots_SetProperty_Proxy( 
    IAvPlots * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvPlots_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPlots_get_Count_Proxy( 
    IAvPlots * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvPlots_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPlots_Remove_Proxy( 
    IAvPlots * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvPlots_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPlots_CreatePlot_Proxy( 
    IAvPlots * This,
    /* [in] */ BSTR name,
    /* [in] */ AvPlotType plotType,
    /* [retval][out] */ LPDISPATCH *pItem);


void __RPC_STUB IAvPlots_CreatePlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPlots_INTERFACE_DEFINED__ */


#ifndef __IAvAxes_INTERFACE_DEFINED__
#define __IAvAxes_INTERFACE_DEFINED__

/* interface IAvAxes */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvAxes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2D6CFA3-52A9-45a7-94A2-9034D78049FE")
    IAvAxes : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvAxis **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateAxis( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvAxis **pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvAxesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAxes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAxes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAxes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvAxes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvAxes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvAxes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvAxes * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvAxes * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvAxis **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvAxes * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvAxes * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvAxes * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvAxes * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvAxes * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvAxes * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvAxes * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAxis )( 
            IAvAxes * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvAxis **pItem);
        
        END_INTERFACE
    } IAvAxesVtbl;

    interface IAvAxes
    {
        CONST_VTBL struct IAvAxesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAxes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvAxes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvAxes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvAxes_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvAxes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvAxes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvAxes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvAxes_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvAxes_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvAxes_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvAxes_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvAxes_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvAxes_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvAxes_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvAxes_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvAxes_CreateAxis(This,name,pItem)	\
    (This)->lpVtbl -> CreateAxis(This,name,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAxes_Item_Proxy( 
    IAvAxes * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvAxis **pItem);


void __RPC_STUB IAvAxes_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvAxes_get__NewEnum_Proxy( 
    IAvAxes * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvAxes_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxes_get_Name_Proxy( 
    IAvAxes * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvAxes_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxes_put_Name_Proxy( 
    IAvAxes * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvAxes_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAxes_GetProperty_Proxy( 
    IAvAxes * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvAxes_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAxes_SetProperty_Proxy( 
    IAvAxes * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvAxes_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxes_get_Count_Proxy( 
    IAvAxes * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvAxes_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAxes_Remove_Proxy( 
    IAvAxes * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvAxes_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAxes_CreateAxis_Proxy( 
    IAvAxes * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IAvAxis **pItem);


void __RPC_STUB IAvAxes_CreateAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvAxes_INTERFACE_DEFINED__ */


#ifndef __IAvCaption_INTERFACE_DEFINED__
#define __IAvCaption_INTERFACE_DEFINED__

/* interface IAvCaption */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvCaption;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D95F39AD-5622-4851-9A9F-291BEE5B70ED")
    IAvCaption : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontFace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontFace( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontSize( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontSize( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TextStart( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TextStart( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoSize( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoSize( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HJustify( 
            /* [retval][out] */ AvHJustify *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HJustify( 
            /* [in] */ AvHJustify newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VJustify( 
            /* [retval][out] */ AvVJustify *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VJustify( 
            /* [in] */ AvVJustify newVal) = 0;
        
        virtual /* [helpstring][id][hidden][propget] */ HRESULT STDMETHODCALLTYPE get_PointerPos( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][hidden][propput] */ HRESULT STDMETHODCALLTYPE put_PointerPos( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][hidden][propget] */ HRESULT STDMETHODCALLTYPE get_PointerStyle( 
            /* [retval][out] */ AvPointerStyle *pVal) = 0;
        
        virtual /* [helpstring][id][hidden][propput] */ HRESULT STDMETHODCALLTYPE put_PointerStyle( 
            /* [in] */ AvPointerStyle newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvCaptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvCaption * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvCaption * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvCaption * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvCaption * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvCaption * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvCaption * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvCaption * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvCaption * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvCaption * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvCaption * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvCaption * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvCaption * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvCaption * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvCaption * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvCaption * This,
            /* [retval][out] */ IAvColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvCaption * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IAvCaption * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IAvCaption * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontFace )( 
            IAvCaption * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontFace )( 
            IAvCaption * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            IAvCaption * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontSize )( 
            IAvCaption * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextStart )( 
            IAvCaption * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TextStart )( 
            IAvCaption * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSize )( 
            IAvCaption * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSize )( 
            IAvCaption * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HJustify )( 
            IAvCaption * This,
            /* [retval][out] */ AvHJustify *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HJustify )( 
            IAvCaption * This,
            /* [in] */ AvHJustify newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VJustify )( 
            IAvCaption * This,
            /* [retval][out] */ AvVJustify *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VJustify )( 
            IAvCaption * This,
            /* [in] */ AvVJustify newVal);
        
        /* [helpstring][id][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointerPos )( 
            IAvCaption * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][hidden][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PointerPos )( 
            IAvCaption * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal);
        
        /* [helpstring][id][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointerStyle )( 
            IAvCaption * This,
            /* [retval][out] */ AvPointerStyle *pVal);
        
        /* [helpstring][id][hidden][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PointerStyle )( 
            IAvCaption * This,
            /* [in] */ AvPointerStyle newVal);
        
        END_INTERFACE
    } IAvCaptionVtbl;

    interface IAvCaption
    {
        CONST_VTBL struct IAvCaptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvCaption_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvCaption_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvCaption_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvCaption_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvCaption_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvCaption_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvCaption_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvCaption_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvCaption_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvCaption_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvCaption_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvCaption_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvCaption_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvCaption_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvCaption_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvCaption_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvCaption_get_Text(This,pVal)	\
    (This)->lpVtbl -> get_Text(This,pVal)

#define IAvCaption_put_Text(This,newVal)	\
    (This)->lpVtbl -> put_Text(This,newVal)

#define IAvCaption_get_FontFace(This,pVal)	\
    (This)->lpVtbl -> get_FontFace(This,pVal)

#define IAvCaption_put_FontFace(This,newVal)	\
    (This)->lpVtbl -> put_FontFace(This,newVal)

#define IAvCaption_get_FontSize(This,pVal)	\
    (This)->lpVtbl -> get_FontSize(This,pVal)

#define IAvCaption_put_FontSize(This,newVal)	\
    (This)->lpVtbl -> put_FontSize(This,newVal)

#define IAvCaption_get_TextStart(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_TextStart(This,nCoord,pVal)

#define IAvCaption_put_TextStart(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_TextStart(This,nCoord,newVal)

#define IAvCaption_get_AutoSize(This,pVal)	\
    (This)->lpVtbl -> get_AutoSize(This,pVal)

#define IAvCaption_put_AutoSize(This,newVal)	\
    (This)->lpVtbl -> put_AutoSize(This,newVal)

#define IAvCaption_get_HJustify(This,pVal)	\
    (This)->lpVtbl -> get_HJustify(This,pVal)

#define IAvCaption_put_HJustify(This,newVal)	\
    (This)->lpVtbl -> put_HJustify(This,newVal)

#define IAvCaption_get_VJustify(This,pVal)	\
    (This)->lpVtbl -> get_VJustify(This,pVal)

#define IAvCaption_put_VJustify(This,newVal)	\
    (This)->lpVtbl -> put_VJustify(This,newVal)

#define IAvCaption_get_PointerPos(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_PointerPos(This,nCoord,pVal)

#define IAvCaption_put_PointerPos(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_PointerPos(This,nCoord,newVal)

#define IAvCaption_get_PointerStyle(This,pVal)	\
    (This)->lpVtbl -> get_PointerStyle(This,pVal)

#define IAvCaption_put_PointerStyle(This,newVal)	\
    (This)->lpVtbl -> put_PointerStyle(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_Name_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvCaption_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_Name_Proxy( 
    IAvCaption * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvCaption_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCaption_GetProperty_Proxy( 
    IAvCaption * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvCaption_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCaption_SetProperty_Proxy( 
    IAvCaption * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvCaption_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_Position_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvCaption_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_Transform_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvCaption_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_Border_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvCaption_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_Color_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ IAvColor **pVal);


void __RPC_STUB IAvCaption_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_GraphState_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvCaption_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_Text_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvCaption_get_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_Text_Proxy( 
    IAvCaption * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvCaption_put_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_FontFace_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvCaption_get_FontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_FontFace_Proxy( 
    IAvCaption * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvCaption_put_FontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_FontSize_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvCaption_get_FontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_FontSize_Proxy( 
    IAvCaption * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvCaption_put_FontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_TextStart_Proxy( 
    IAvCaption * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvCaption_get_TextStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_TextStart_Proxy( 
    IAvCaption * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ float newVal);


void __RPC_STUB IAvCaption_put_TextStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_AutoSize_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvCaption_get_AutoSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_AutoSize_Proxy( 
    IAvCaption * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvCaption_put_AutoSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_HJustify_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ AvHJustify *pVal);


void __RPC_STUB IAvCaption_get_HJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_HJustify_Proxy( 
    IAvCaption * This,
    /* [in] */ AvHJustify newVal);


void __RPC_STUB IAvCaption_put_HJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_VJustify_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ AvVJustify *pVal);


void __RPC_STUB IAvCaption_get_VJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_VJustify_Proxy( 
    IAvCaption * This,
    /* [in] */ AvVJustify newVal);


void __RPC_STUB IAvCaption_put_VJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][hidden][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_PointerPos_Proxy( 
    IAvCaption * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvCaption_get_PointerPos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][hidden][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_PointerPos_Proxy( 
    IAvCaption * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ double newVal);


void __RPC_STUB IAvCaption_put_PointerPos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][hidden][propget] */ HRESULT STDMETHODCALLTYPE IAvCaption_get_PointerStyle_Proxy( 
    IAvCaption * This,
    /* [retval][out] */ AvPointerStyle *pVal);


void __RPC_STUB IAvCaption_get_PointerStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][hidden][propput] */ HRESULT STDMETHODCALLTYPE IAvCaption_put_PointerStyle_Proxy( 
    IAvCaption * This,
    /* [in] */ AvPointerStyle newVal);


void __RPC_STUB IAvCaption_put_PointerStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvCaption_INTERFACE_DEFINED__ */


#ifndef __IAvCaptions_INTERFACE_DEFINED__
#define __IAvCaptions_INTERFACE_DEFINED__

/* interface IAvCaptions */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvCaptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0FCA2A2-135B-47af-805C-9FA47DBB3E90")
    IAvCaptions : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvCaption **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateCaption( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvCaption **pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvCaptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvCaptions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvCaptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvCaptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvCaptions * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvCaptions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvCaptions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvCaptions * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvCaptions * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvCaption **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvCaptions * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvCaptions * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvCaptions * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvCaptions * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvCaptions * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvCaptions * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvCaptions * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateCaption )( 
            IAvCaptions * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvCaption **pItem);
        
        END_INTERFACE
    } IAvCaptionsVtbl;

    interface IAvCaptions
    {
        CONST_VTBL struct IAvCaptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvCaptions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvCaptions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvCaptions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvCaptions_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvCaptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvCaptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvCaptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvCaptions_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvCaptions_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvCaptions_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvCaptions_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvCaptions_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvCaptions_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvCaptions_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvCaptions_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvCaptions_CreateCaption(This,name,pItem)	\
    (This)->lpVtbl -> CreateCaption(This,name,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCaptions_Item_Proxy( 
    IAvCaptions * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvCaption **pItem);


void __RPC_STUB IAvCaptions_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvCaptions_get__NewEnum_Proxy( 
    IAvCaptions * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvCaptions_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaptions_get_Name_Proxy( 
    IAvCaptions * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvCaptions_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCaptions_put_Name_Proxy( 
    IAvCaptions * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvCaptions_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCaptions_GetProperty_Proxy( 
    IAvCaptions * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvCaptions_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCaptions_SetProperty_Proxy( 
    IAvCaptions * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvCaptions_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCaptions_get_Count_Proxy( 
    IAvCaptions * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvCaptions_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCaptions_Remove_Proxy( 
    IAvCaptions * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvCaptions_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCaptions_CreateCaption_Proxy( 
    IAvCaptions * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IAvCaption **pItem);


void __RPC_STUB IAvCaptions_CreateCaption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvCaptions_INTERFACE_DEFINED__ */


#ifndef __IAvGraphs_INTERFACE_DEFINED__
#define __IAvGraphs_INTERFACE_DEFINED__

/* interface IAvGraphs */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGraphs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8FE878E-B2FE-495B-8EE4-8147E1429C5D")
    IAvGraphs : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ LPDISPATCH *pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateGraph2D( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvGraph2D **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateGraph3D( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvGraph3D **pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGraphsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGraphs * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGraphs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGraphs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGraphs * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGraphs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGraphs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGraphs * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvGraphs * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ LPDISPATCH *pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvGraphs * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvGraphs * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvGraphs * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvGraphs * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvGraphs * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvGraphs * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvGraphs * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateGraph2D )( 
            IAvGraphs * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvGraph2D **pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateGraph3D )( 
            IAvGraphs * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvGraph3D **pItem);
        
        END_INTERFACE
    } IAvGraphsVtbl;

    interface IAvGraphs
    {
        CONST_VTBL struct IAvGraphsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGraphs_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGraphs_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGraphs_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGraphs_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGraphs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGraphs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGraphs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGraphs_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvGraphs_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvGraphs_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvGraphs_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvGraphs_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvGraphs_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvGraphs_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvGraphs_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvGraphs_CreateGraph2D(This,name,pItem)	\
    (This)->lpVtbl -> CreateGraph2D(This,name,pItem)

#define IAvGraphs_CreateGraph3D(This,name,pItem)	\
    (This)->lpVtbl -> CreateGraph3D(This,name,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraphs_Item_Proxy( 
    IAvGraphs * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ LPDISPATCH *pItem);


void __RPC_STUB IAvGraphs_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphs_get__NewEnum_Proxy( 
    IAvGraphs * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvGraphs_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphs_get_Name_Proxy( 
    IAvGraphs * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGraphs_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGraphs_put_Name_Proxy( 
    IAvGraphs * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGraphs_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraphs_GetProperty_Proxy( 
    IAvGraphs * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGraphs_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraphs_SetProperty_Proxy( 
    IAvGraphs * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGraphs_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraphs_get_Count_Proxy( 
    IAvGraphs * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvGraphs_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraphs_Remove_Proxy( 
    IAvGraphs * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvGraphs_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraphs_CreateGraph2D_Proxy( 
    IAvGraphs * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IAvGraph2D **pItem);


void __RPC_STUB IAvGraphs_CreateGraph2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraphs_CreateGraph3D_Proxy( 
    IAvGraphs * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IAvGraph3D **pItem);


void __RPC_STUB IAvGraphs_CreateGraph3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGraphs_INTERFACE_DEFINED__ */


#ifndef __IAvGraph_INTERFACE_DEFINED__
#define __IAvGraph_INTERFACE_DEFINED__

/* interface IAvGraph */
/* [custom][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IAvGraph;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2FEE80B5-88C7-46e0-BA74-1742BB210525")
    IAvGraph : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LockGraph( 
            /* [in] */ BOOL bUpdate) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnlockGraph( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Renderer( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dimension( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvColor **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGraphVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGraph * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGraph * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGraph * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvGraph * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvGraph * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LockGraph )( 
            IAvGraph * This,
            /* [in] */ BOOL bUpdate);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnlockGraph )( 
            IAvGraph * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Renderer )( 
            IAvGraph * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dimension )( 
            IAvGraph * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvGraph * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvGraph * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvGraph * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvGraph * This,
            /* [retval][out] */ IAvColor **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvGraph * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        END_INTERFACE
    } IAvGraphVtbl;

    interface IAvGraph
    {
        CONST_VTBL struct IAvGraphVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGraph_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGraph_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGraph_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGraph_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvGraph_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvGraph_LockGraph(This,bUpdate)	\
    (This)->lpVtbl -> LockGraph(This,bUpdate)

#define IAvGraph_UnlockGraph(This)	\
    (This)->lpVtbl -> UnlockGraph(This)

#define IAvGraph_get_Renderer(This,pVal)	\
    (This)->lpVtbl -> get_Renderer(This,pVal)

#define IAvGraph_get_Dimension(This,pVal)	\
    (This)->lpVtbl -> get_Dimension(This,pVal)

#define IAvGraph_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvGraph_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvGraph_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvGraph_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvGraph_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_Name_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGraph_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAvGraph_put_Name_Proxy( 
    IAvGraph * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGraph_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvGraph_LockGraph_Proxy( 
    IAvGraph * This,
    /* [in] */ BOOL bUpdate);


void __RPC_STUB IAvGraph_LockGraph_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAvGraph_UnlockGraph_Proxy( 
    IAvGraph * This);


void __RPC_STUB IAvGraph_UnlockGraph_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_Renderer_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ IUnknown **pVal);


void __RPC_STUB IAvGraph_get_Renderer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_Dimension_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAvGraph_get_Dimension_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_Position_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvGraph_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_Transform_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvGraph_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_Border_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvGraph_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_Color_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ IAvColor **pVal);


void __RPC_STUB IAvGraph_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph_get_GraphState_Proxy( 
    IAvGraph * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvGraph_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGraph_INTERFACE_DEFINED__ */


#ifndef __IAvGraph2D_INTERFACE_DEFINED__
#define __IAvGraph2D_INTERFACE_DEFINED__

/* interface IAvGraph2D */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGraph2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A9CCD92-3B03-48FD-BC24-FF9D46FAC3ED")
    IAvGraph2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Axes( 
            /* [retval][out] */ IAvAxes **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Plots( 
            /* [retval][out] */ IAvPlots **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Captions( 
            /* [retval][out] */ IAvCaptions **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AspectRatio( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AspectRatio( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FixedAspect( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FixedAspect( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGraph2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGraph2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGraph2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGraph2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGraph2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGraph2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGraph2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGraph2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvGraph2D * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvGraph2D * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvGraph2D * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvGraph2D * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvGraph2D * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvGraph2D * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvGraph2D * This,
            /* [retval][out] */ IAvColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvGraph2D * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Axes )( 
            IAvGraph2D * This,
            /* [retval][out] */ IAvAxes **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Plots )( 
            IAvGraph2D * This,
            /* [retval][out] */ IAvPlots **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Captions )( 
            IAvGraph2D * This,
            /* [retval][out] */ IAvCaptions **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AspectRatio )( 
            IAvGraph2D * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AspectRatio )( 
            IAvGraph2D * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FixedAspect )( 
            IAvGraph2D * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FixedAspect )( 
            IAvGraph2D * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvGraph2DVtbl;

    interface IAvGraph2D
    {
        CONST_VTBL struct IAvGraph2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGraph2D_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGraph2D_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGraph2D_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGraph2D_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGraph2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGraph2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGraph2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGraph2D_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvGraph2D_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvGraph2D_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvGraph2D_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvGraph2D_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvGraph2D_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvGraph2D_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvGraph2D_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvGraph2D_get_Axes(This,pVal)	\
    (This)->lpVtbl -> get_Axes(This,pVal)

#define IAvGraph2D_get_Plots(This,pVal)	\
    (This)->lpVtbl -> get_Plots(This,pVal)

#define IAvGraph2D_get_Captions(This,pVal)	\
    (This)->lpVtbl -> get_Captions(This,pVal)

#define IAvGraph2D_get_AspectRatio(This,pVal)	\
    (This)->lpVtbl -> get_AspectRatio(This,pVal)

#define IAvGraph2D_put_AspectRatio(This,newVal)	\
    (This)->lpVtbl -> put_AspectRatio(This,newVal)

#define IAvGraph2D_get_FixedAspect(This,pVal)	\
    (This)->lpVtbl -> get_FixedAspect(This,pVal)

#define IAvGraph2D_put_FixedAspect(This,newVal)	\
    (This)->lpVtbl -> put_FixedAspect(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_Name_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGraph2D_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_put_Name_Proxy( 
    IAvGraph2D * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGraph2D_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_GetProperty_Proxy( 
    IAvGraph2D * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGraph2D_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_SetProperty_Proxy( 
    IAvGraph2D * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGraph2D_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_Transform_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvGraph2D_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_Border_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvGraph2D_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_Color_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ IAvColor **pVal);


void __RPC_STUB IAvGraph2D_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_GraphState_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvGraph2D_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_Axes_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ IAvAxes **pVal);


void __RPC_STUB IAvGraph2D_get_Axes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_Plots_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ IAvPlots **pVal);


void __RPC_STUB IAvGraph2D_get_Plots_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_Captions_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ IAvCaptions **pVal);


void __RPC_STUB IAvGraph2D_get_Captions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_AspectRatio_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvGraph2D_get_AspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_put_AspectRatio_Proxy( 
    IAvGraph2D * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvGraph2D_put_AspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_get_FixedAspect_Proxy( 
    IAvGraph2D * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvGraph2D_get_FixedAspect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGraph2D_put_FixedAspect_Proxy( 
    IAvGraph2D * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvGraph2D_put_FixedAspect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGraph2D_INTERFACE_DEFINED__ */


#ifndef __IAvCamera_INTERFACE_DEFINED__
#define __IAvCamera_INTERFACE_DEFINED__

/* interface IAvCamera */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvCamera;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("568903AB-5BCC-4338-B827-252CF077A233")
    IAvCamera : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Viewpoint( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Viewpoint( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CenterOfInterest( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CenterOfInterest( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Orientation( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Orientation( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Orthographic( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Orthographic( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ViewAngle( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ViewAngle( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ViewAll( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvCameraVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvCamera * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvCamera * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvCamera * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvCamera * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvCamera * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvCamera * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvCamera * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvCamera * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvCamera * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvCamera * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvCamera * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Viewpoint )( 
            IAvCamera * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Viewpoint )( 
            IAvCamera * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterOfInterest )( 
            IAvCamera * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CenterOfInterest )( 
            IAvCamera * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAvCamera * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Orientation )( 
            IAvCamera * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orthographic )( 
            IAvCamera * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Orthographic )( 
            IAvCamera * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewAngle )( 
            IAvCamera * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewAngle )( 
            IAvCamera * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ViewAll )( 
            IAvCamera * This);
        
        END_INTERFACE
    } IAvCameraVtbl;

    interface IAvCamera
    {
        CONST_VTBL struct IAvCameraVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvCamera_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvCamera_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvCamera_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvCamera_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvCamera_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvCamera_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvCamera_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvCamera_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvCamera_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvCamera_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvCamera_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvCamera_get_Viewpoint(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Viewpoint(This,nCoord,pVal)

#define IAvCamera_put_Viewpoint(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Viewpoint(This,nCoord,newVal)

#define IAvCamera_get_CenterOfInterest(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_CenterOfInterest(This,nCoord,pVal)

#define IAvCamera_put_CenterOfInterest(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_CenterOfInterest(This,nCoord,newVal)

#define IAvCamera_get_Orientation(This,pVal)	\
    (This)->lpVtbl -> get_Orientation(This,pVal)

#define IAvCamera_put_Orientation(This,newVal)	\
    (This)->lpVtbl -> put_Orientation(This,newVal)

#define IAvCamera_get_Orthographic(This,pVal)	\
    (This)->lpVtbl -> get_Orthographic(This,pVal)

#define IAvCamera_put_Orthographic(This,newVal)	\
    (This)->lpVtbl -> put_Orthographic(This,newVal)

#define IAvCamera_get_ViewAngle(This,pVal)	\
    (This)->lpVtbl -> get_ViewAngle(This,pVal)

#define IAvCamera_put_ViewAngle(This,newVal)	\
    (This)->lpVtbl -> put_ViewAngle(This,newVal)

#define IAvCamera_ViewAll(This)	\
    (This)->lpVtbl -> ViewAll(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCamera_get_Name_Proxy( 
    IAvCamera * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvCamera_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCamera_put_Name_Proxy( 
    IAvCamera * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvCamera_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCamera_GetProperty_Proxy( 
    IAvCamera * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvCamera_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCamera_SetProperty_Proxy( 
    IAvCamera * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvCamera_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCamera_get_Viewpoint_Proxy( 
    IAvCamera * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvCamera_get_Viewpoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCamera_put_Viewpoint_Proxy( 
    IAvCamera * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ double newVal);


void __RPC_STUB IAvCamera_put_Viewpoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCamera_get_CenterOfInterest_Proxy( 
    IAvCamera * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvCamera_get_CenterOfInterest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCamera_put_CenterOfInterest_Proxy( 
    IAvCamera * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ double newVal);


void __RPC_STUB IAvCamera_put_CenterOfInterest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCamera_get_Orientation_Proxy( 
    IAvCamera * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvCamera_get_Orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCamera_put_Orientation_Proxy( 
    IAvCamera * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvCamera_put_Orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCamera_get_Orthographic_Proxy( 
    IAvCamera * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvCamera_get_Orthographic_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCamera_put_Orthographic_Proxy( 
    IAvCamera * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvCamera_put_Orthographic_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvCamera_get_ViewAngle_Proxy( 
    IAvCamera * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvCamera_get_ViewAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvCamera_put_ViewAngle_Proxy( 
    IAvCamera * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvCamera_put_ViewAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvCamera_ViewAll_Proxy( 
    IAvCamera * This);


void __RPC_STUB IAvCamera_ViewAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvCamera_INTERFACE_DEFINED__ */


#ifndef __IAvLight_INTERFACE_DEFINED__
#define __IAvLight_INTERFACE_DEFINED__

/* interface IAvLight */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvLight;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AE9443B-882C-4117-AD7B-71DD49090BDB")
    IAvLight : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightType( 
            /* [retval][out] */ AvLightType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightType( 
            /* [in] */ AvLightType newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Direction( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Intensity( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Intensity( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_On( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_On( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Stationary( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Stationary( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DropOffRate( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DropOffRate( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CutOffAngle( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CutOffAngle( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvLightVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvLight * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvLight * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvLight * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvLight * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvLight * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvLight * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvLight * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvLight * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvLight * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvLight * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvLight * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightType )( 
            IAvLight * This,
            /* [retval][out] */ AvLightType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LightType )( 
            IAvLight * This,
            /* [in] */ AvLightType newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            IAvLight * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Direction )( 
            IAvLight * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvLight * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IAvLight * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Intensity )( 
            IAvLight * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Intensity )( 
            IAvLight * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_On )( 
            IAvLight * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_On )( 
            IAvLight * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stationary )( 
            IAvLight * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stationary )( 
            IAvLight * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvLight * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IAvLight * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DropOffRate )( 
            IAvLight * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DropOffRate )( 
            IAvLight * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CutOffAngle )( 
            IAvLight * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CutOffAngle )( 
            IAvLight * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } IAvLightVtbl;

    interface IAvLight
    {
        CONST_VTBL struct IAvLightVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvLight_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvLight_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvLight_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvLight_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvLight_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvLight_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvLight_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvLight_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvLight_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvLight_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvLight_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvLight_get_LightType(This,pVal)	\
    (This)->lpVtbl -> get_LightType(This,pVal)

#define IAvLight_put_LightType(This,newVal)	\
    (This)->lpVtbl -> put_LightType(This,newVal)

#define IAvLight_get_Direction(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Direction(This,nCoord,pVal)

#define IAvLight_put_Direction(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Direction(This,nCoord,newVal)

#define IAvLight_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvLight_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IAvLight_get_Intensity(This,pVal)	\
    (This)->lpVtbl -> get_Intensity(This,pVal)

#define IAvLight_put_Intensity(This,newVal)	\
    (This)->lpVtbl -> put_Intensity(This,newVal)

#define IAvLight_get_On(This,pVal)	\
    (This)->lpVtbl -> get_On(This,pVal)

#define IAvLight_put_On(This,newVal)	\
    (This)->lpVtbl -> put_On(This,newVal)

#define IAvLight_get_Stationary(This,pVal)	\
    (This)->lpVtbl -> get_Stationary(This,pVal)

#define IAvLight_put_Stationary(This,newVal)	\
    (This)->lpVtbl -> put_Stationary(This,newVal)

#define IAvLight_get_Position(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Position(This,nCoord,pVal)

#define IAvLight_put_Position(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Position(This,nCoord,newVal)

#define IAvLight_get_DropOffRate(This,pVal)	\
    (This)->lpVtbl -> get_DropOffRate(This,pVal)

#define IAvLight_put_DropOffRate(This,newVal)	\
    (This)->lpVtbl -> put_DropOffRate(This,newVal)

#define IAvLight_get_CutOffAngle(This,pVal)	\
    (This)->lpVtbl -> get_CutOffAngle(This,pVal)

#define IAvLight_put_CutOffAngle(This,newVal)	\
    (This)->lpVtbl -> put_CutOffAngle(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_Name_Proxy( 
    IAvLight * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvLight_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_Name_Proxy( 
    IAvLight * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvLight_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvLight_GetProperty_Proxy( 
    IAvLight * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvLight_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvLight_SetProperty_Proxy( 
    IAvLight * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvLight_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_LightType_Proxy( 
    IAvLight * This,
    /* [retval][out] */ AvLightType *pVal);


void __RPC_STUB IAvLight_get_LightType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_LightType_Proxy( 
    IAvLight * This,
    /* [in] */ AvLightType newVal);


void __RPC_STUB IAvLight_put_LightType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_Direction_Proxy( 
    IAvLight * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvLight_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_Direction_Proxy( 
    IAvLight * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ float newVal);


void __RPC_STUB IAvLight_put_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_Color_Proxy( 
    IAvLight * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvLight_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_Color_Proxy( 
    IAvLight * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvLight_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_Intensity_Proxy( 
    IAvLight * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvLight_get_Intensity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_Intensity_Proxy( 
    IAvLight * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvLight_put_Intensity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_On_Proxy( 
    IAvLight * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvLight_get_On_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_On_Proxy( 
    IAvLight * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvLight_put_On_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_Stationary_Proxy( 
    IAvLight * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvLight_get_Stationary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_Stationary_Proxy( 
    IAvLight * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvLight_put_Stationary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_Position_Proxy( 
    IAvLight * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvLight_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_Position_Proxy( 
    IAvLight * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ float newVal);


void __RPC_STUB IAvLight_put_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_DropOffRate_Proxy( 
    IAvLight * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvLight_get_DropOffRate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_DropOffRate_Proxy( 
    IAvLight * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvLight_put_DropOffRate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLight_get_CutOffAngle_Proxy( 
    IAvLight * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvLight_get_CutOffAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLight_put_CutOffAngle_Proxy( 
    IAvLight * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvLight_put_CutOffAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvLight_INTERFACE_DEFINED__ */


#ifndef __IAvLights_INTERFACE_DEFINED__
#define __IAvLights_INTERFACE_DEFINED__

/* interface IAvLights */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvLights;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("702EA795-B730-41bd-8D62-F8A68C8B25BD")
    IAvLights : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvLight **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateLight( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvLight **pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvLightsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvLights * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvLights * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvLights * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvLights * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvLights * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvLights * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvLights * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvLights * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvLight **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvLights * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvLights * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvLights * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvLights * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvLights * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvLights * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvLights * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateLight )( 
            IAvLights * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAvLight **pItem);
        
        END_INTERFACE
    } IAvLightsVtbl;

    interface IAvLights
    {
        CONST_VTBL struct IAvLightsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvLights_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvLights_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvLights_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvLights_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvLights_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvLights_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvLights_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvLights_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvLights_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvLights_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvLights_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvLights_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvLights_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvLights_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvLights_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvLights_CreateLight(This,name,pItem)	\
    (This)->lpVtbl -> CreateLight(This,name,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvLights_Item_Proxy( 
    IAvLights * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvLight **pItem);


void __RPC_STUB IAvLights_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvLights_get__NewEnum_Proxy( 
    IAvLights * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvLights_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLights_get_Name_Proxy( 
    IAvLights * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvLights_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvLights_put_Name_Proxy( 
    IAvLights * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvLights_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvLights_GetProperty_Proxy( 
    IAvLights * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvLights_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvLights_SetProperty_Proxy( 
    IAvLights * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvLights_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvLights_get_Count_Proxy( 
    IAvLights * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvLights_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvLights_Remove_Proxy( 
    IAvLights * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvLights_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvLights_CreateLight_Proxy( 
    IAvLights * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IAvLight **pItem);


void __RPC_STUB IAvLights_CreateLight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvLights_INTERFACE_DEFINED__ */


#ifndef __IAvEnvironment_INTERFACE_DEFINED__
#define __IAvEnvironment_INTERFACE_DEFINED__

/* interface IAvEnvironment */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvEnvironment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4DACC099-7081-4bdc-BE94-CCAC39A2D3F5")
    IAvEnvironment : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AmbientColor( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AmbientColor( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AmbientIntensity( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AmbientIntensity( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FogType( 
            /* [retval][out] */ AvFogType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FogType( 
            /* [in] */ AvFogType newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FogColor( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FogColor( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FogVisibility( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FogVisibility( 
            /* [in] */ double newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvEnvironmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvEnvironment * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvEnvironment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvEnvironment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvEnvironment * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvEnvironment * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvEnvironment * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvEnvironment * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmbientColor )( 
            IAvEnvironment * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmbientColor )( 
            IAvEnvironment * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmbientIntensity )( 
            IAvEnvironment * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmbientIntensity )( 
            IAvEnvironment * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FogType )( 
            IAvEnvironment * This,
            /* [retval][out] */ AvFogType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FogType )( 
            IAvEnvironment * This,
            /* [in] */ AvFogType newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FogColor )( 
            IAvEnvironment * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FogColor )( 
            IAvEnvironment * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FogVisibility )( 
            IAvEnvironment * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FogVisibility )( 
            IAvEnvironment * This,
            /* [in] */ double newVal);
        
        END_INTERFACE
    } IAvEnvironmentVtbl;

    interface IAvEnvironment
    {
        CONST_VTBL struct IAvEnvironmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvEnvironment_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvEnvironment_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvEnvironment_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvEnvironment_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvEnvironment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvEnvironment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvEnvironment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvEnvironment_get_AmbientColor(This,pVal)	\
    (This)->lpVtbl -> get_AmbientColor(This,pVal)

#define IAvEnvironment_put_AmbientColor(This,newVal)	\
    (This)->lpVtbl -> put_AmbientColor(This,newVal)

#define IAvEnvironment_get_AmbientIntensity(This,pVal)	\
    (This)->lpVtbl -> get_AmbientIntensity(This,pVal)

#define IAvEnvironment_put_AmbientIntensity(This,newVal)	\
    (This)->lpVtbl -> put_AmbientIntensity(This,newVal)

#define IAvEnvironment_get_FogType(This,pVal)	\
    (This)->lpVtbl -> get_FogType(This,pVal)

#define IAvEnvironment_put_FogType(This,newVal)	\
    (This)->lpVtbl -> put_FogType(This,newVal)

#define IAvEnvironment_get_FogColor(This,pVal)	\
    (This)->lpVtbl -> get_FogColor(This,pVal)

#define IAvEnvironment_put_FogColor(This,newVal)	\
    (This)->lpVtbl -> put_FogColor(This,newVal)

#define IAvEnvironment_get_FogVisibility(This,pVal)	\
    (This)->lpVtbl -> get_FogVisibility(This,pVal)

#define IAvEnvironment_put_FogVisibility(This,newVal)	\
    (This)->lpVtbl -> put_FogVisibility(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_get_AmbientColor_Proxy( 
    IAvEnvironment * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvEnvironment_get_AmbientColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_put_AmbientColor_Proxy( 
    IAvEnvironment * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvEnvironment_put_AmbientColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_get_AmbientIntensity_Proxy( 
    IAvEnvironment * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvEnvironment_get_AmbientIntensity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_put_AmbientIntensity_Proxy( 
    IAvEnvironment * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvEnvironment_put_AmbientIntensity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_get_FogType_Proxy( 
    IAvEnvironment * This,
    /* [retval][out] */ AvFogType *pVal);


void __RPC_STUB IAvEnvironment_get_FogType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_put_FogType_Proxy( 
    IAvEnvironment * This,
    /* [in] */ AvFogType newVal);


void __RPC_STUB IAvEnvironment_put_FogType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_get_FogColor_Proxy( 
    IAvEnvironment * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvEnvironment_get_FogColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_put_FogColor_Proxy( 
    IAvEnvironment * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvEnvironment_put_FogColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_get_FogVisibility_Proxy( 
    IAvEnvironment * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvEnvironment_get_FogVisibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvEnvironment_put_FogVisibility_Proxy( 
    IAvEnvironment * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvEnvironment_put_FogVisibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvEnvironment_INTERFACE_DEFINED__ */


#ifndef __IAvGraph3D_INTERFACE_DEFINED__
#define __IAvGraph3D_INTERFACE_DEFINED__

/* interface IAvGraph3D */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGraph3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99D5B1AB-8981-4FEF-85B7-FF3CCD77A956")
    IAvGraph3D : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Axes( 
            /* [retval][out] */ IAvAxes **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Plots( 
            /* [retval][out] */ IAvPlots **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Captions( 
            /* [retval][out] */ IAvCaptions **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AspectRatio( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AspectRatio( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FixedAspect( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FixedAspect( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ IAvCamera **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Lights( 
            /* [retval][out] */ IAvLights **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Environment( 
            /* [retval][out] */ IAvEnvironment **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGraph3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGraph3D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGraph3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGraph3D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGraph3D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGraph3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGraph3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGraph3D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvGraph3D * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvGraph3D * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvGraph3D * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvGraph3D * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Axes )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvAxes **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Plots )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvPlots **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Captions )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvCaptions **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AspectRatio )( 
            IAvGraph3D * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AspectRatio )( 
            IAvGraph3D * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FixedAspect )( 
            IAvGraph3D * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FixedAspect )( 
            IAvGraph3D * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvCamera **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lights )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvLights **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Environment )( 
            IAvGraph3D * This,
            /* [retval][out] */ IAvEnvironment **pVal);
        
        END_INTERFACE
    } IAvGraph3DVtbl;

    interface IAvGraph3D
    {
        CONST_VTBL struct IAvGraph3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGraph3D_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGraph3D_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGraph3D_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGraph3D_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGraph3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGraph3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGraph3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGraph3D_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvGraph3D_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvGraph3D_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvGraph3D_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvGraph3D_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvGraph3D_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvGraph3D_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvGraph3D_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvGraph3D_get_Axes(This,pVal)	\
    (This)->lpVtbl -> get_Axes(This,pVal)

#define IAvGraph3D_get_Plots(This,pVal)	\
    (This)->lpVtbl -> get_Plots(This,pVal)

#define IAvGraph3D_get_Captions(This,pVal)	\
    (This)->lpVtbl -> get_Captions(This,pVal)

#define IAvGraph3D_get_AspectRatio(This,pVal)	\
    (This)->lpVtbl -> get_AspectRatio(This,pVal)

#define IAvGraph3D_put_AspectRatio(This,newVal)	\
    (This)->lpVtbl -> put_AspectRatio(This,newVal)

#define IAvGraph3D_get_FixedAspect(This,pVal)	\
    (This)->lpVtbl -> get_FixedAspect(This,pVal)

#define IAvGraph3D_put_FixedAspect(This,newVal)	\
    (This)->lpVtbl -> put_FixedAspect(This,newVal)

#define IAvGraph3D_get_Camera(This,pVal)	\
    (This)->lpVtbl -> get_Camera(This,pVal)

#define IAvGraph3D_get_Lights(This,pVal)	\
    (This)->lpVtbl -> get_Lights(This,pVal)

#define IAvGraph3D_get_Environment(This,pVal)	\
    (This)->lpVtbl -> get_Environment(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Name_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGraph3D_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_put_Name_Proxy( 
    IAvGraph3D * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGraph3D_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_GetProperty_Proxy( 
    IAvGraph3D * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGraph3D_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_SetProperty_Proxy( 
    IAvGraph3D * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGraph3D_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Transform_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvGraph3D_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Border_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvGraph3D_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Color_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvColor **pVal);


void __RPC_STUB IAvGraph3D_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_GraphState_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvGraph3D_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Axes_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvAxes **pVal);


void __RPC_STUB IAvGraph3D_get_Axes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Plots_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvPlots **pVal);


void __RPC_STUB IAvGraph3D_get_Plots_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Captions_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvCaptions **pVal);


void __RPC_STUB IAvGraph3D_get_Captions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_AspectRatio_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvGraph3D_get_AspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_put_AspectRatio_Proxy( 
    IAvGraph3D * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvGraph3D_put_AspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_FixedAspect_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvGraph3D_get_FixedAspect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_put_FixedAspect_Proxy( 
    IAvGraph3D * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvGraph3D_put_FixedAspect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Camera_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvCamera **pVal);


void __RPC_STUB IAvGraph3D_get_Camera_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Lights_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvLights **pVal);


void __RPC_STUB IAvGraph3D_get_Lights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGraph3D_get_Environment_Proxy( 
    IAvGraph3D * This,
    /* [retval][out] */ IAvEnvironment **pVal);


void __RPC_STUB IAvGraph3D_get_Environment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGraph3D_INTERFACE_DEFINED__ */


#ifndef __IAvAxisTickmark_INTERFACE_DEFINED__
#define __IAvAxisTickmark_INTERFACE_DEFINED__

/* interface IAvAxisTickmark */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvAxisTickmark;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5AEB708-CCB7-477c-B436-F06B4E512696")
    IAvAxisTickmark : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Ascend( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Ascend( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Descend( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Descend( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumTicks( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumTicks( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvAxisTickmarkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAxisTickmark * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAxisTickmark * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAxisTickmark * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvAxisTickmark * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvAxisTickmark * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvAxisTickmark * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvAxisTickmark * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IAvAxisTickmark * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IAvAxisTickmark * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ascend )( 
            IAvAxisTickmark * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Ascend )( 
            IAvAxisTickmark * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Descend )( 
            IAvAxisTickmark * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Descend )( 
            IAvAxisTickmark * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvAxisTickmark * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IAvAxisTickmark * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumTicks )( 
            IAvAxisTickmark * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumTicks )( 
            IAvAxisTickmark * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IAvAxisTickmarkVtbl;

    interface IAvAxisTickmark
    {
        CONST_VTBL struct IAvAxisTickmarkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAxisTickmark_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvAxisTickmark_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvAxisTickmark_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvAxisTickmark_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvAxisTickmark_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvAxisTickmark_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvAxisTickmark_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvAxisTickmark_put_Visible(This,newVal)	\
    (This)->lpVtbl -> put_Visible(This,newVal)

#define IAvAxisTickmark_get_Visible(This,pVal)	\
    (This)->lpVtbl -> get_Visible(This,pVal)

#define IAvAxisTickmark_get_Ascend(This,pVal)	\
    (This)->lpVtbl -> get_Ascend(This,pVal)

#define IAvAxisTickmark_put_Ascend(This,newVal)	\
    (This)->lpVtbl -> put_Ascend(This,newVal)

#define IAvAxisTickmark_get_Descend(This,pVal)	\
    (This)->lpVtbl -> get_Descend(This,pVal)

#define IAvAxisTickmark_put_Descend(This,newVal)	\
    (This)->lpVtbl -> put_Descend(This,newVal)

#define IAvAxisTickmark_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvAxisTickmark_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IAvAxisTickmark_get_NumTicks(This,pVal)	\
    (This)->lpVtbl -> get_NumTicks(This,pVal)

#define IAvAxisTickmark_put_NumTicks(This,newVal)	\
    (This)->lpVtbl -> put_NumTicks(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_put_Visible_Proxy( 
    IAvAxisTickmark * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvAxisTickmark_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_get_Visible_Proxy( 
    IAvAxisTickmark * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvAxisTickmark_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_get_Ascend_Proxy( 
    IAvAxisTickmark * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvAxisTickmark_get_Ascend_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_put_Ascend_Proxy( 
    IAvAxisTickmark * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvAxisTickmark_put_Ascend_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_get_Descend_Proxy( 
    IAvAxisTickmark * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvAxisTickmark_get_Descend_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_put_Descend_Proxy( 
    IAvAxisTickmark * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvAxisTickmark_put_Descend_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_get_Color_Proxy( 
    IAvAxisTickmark * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvAxisTickmark_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_put_Color_Proxy( 
    IAvAxisTickmark * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvAxisTickmark_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_get_NumTicks_Proxy( 
    IAvAxisTickmark * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvAxisTickmark_get_NumTicks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisTickmark_put_NumTicks_Proxy( 
    IAvAxisTickmark * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvAxisTickmark_put_NumTicks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvAxisTickmark_INTERFACE_DEFINED__ */


#ifndef __IAvAxisScale_INTERFACE_DEFINED__
#define __IAvAxisScale_INTERFACE_DEFINED__

/* interface IAvAxisScale */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvAxisScale;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F79A9C48-6FC8-463c-9A0B-D3B83AB894CB")
    IAvAxisScale : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RangeStart( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RangeStart( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RangeEnd( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RangeEnd( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Increment( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Increment( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvAxisScaleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAxisScale * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAxisScale * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAxisScale * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvAxisScale * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvAxisScale * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvAxisScale * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvAxisScale * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RangeStart )( 
            IAvAxisScale * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeStart )( 
            IAvAxisScale * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RangeEnd )( 
            IAvAxisScale * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeEnd )( 
            IAvAxisScale * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Increment )( 
            IAvAxisScale * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Increment )( 
            IAvAxisScale * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IAvAxisScale * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IAvAxisScale * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvAxisScaleVtbl;

    interface IAvAxisScale
    {
        CONST_VTBL struct IAvAxisScaleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAxisScale_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvAxisScale_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvAxisScale_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvAxisScale_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvAxisScale_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvAxisScale_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvAxisScale_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvAxisScale_put_RangeStart(This,newVal)	\
    (This)->lpVtbl -> put_RangeStart(This,newVal)

#define IAvAxisScale_get_RangeStart(This,pVal)	\
    (This)->lpVtbl -> get_RangeStart(This,pVal)

#define IAvAxisScale_put_RangeEnd(This,newVal)	\
    (This)->lpVtbl -> put_RangeEnd(This,newVal)

#define IAvAxisScale_get_RangeEnd(This,pVal)	\
    (This)->lpVtbl -> get_RangeEnd(This,pVal)

#define IAvAxisScale_put_Increment(This,newVal)	\
    (This)->lpVtbl -> put_Increment(This,newVal)

#define IAvAxisScale_get_Increment(This,pVal)	\
    (This)->lpVtbl -> get_Increment(This,pVal)

#define IAvAxisScale_get_Source(This,pVal)	\
    (This)->lpVtbl -> get_Source(This,pVal)

#define IAvAxisScale_put_Source(This,newVal)	\
    (This)->lpVtbl -> put_Source(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_put_RangeStart_Proxy( 
    IAvAxisScale * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvAxisScale_put_RangeStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_get_RangeStart_Proxy( 
    IAvAxisScale * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvAxisScale_get_RangeStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_put_RangeEnd_Proxy( 
    IAvAxisScale * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvAxisScale_put_RangeEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_get_RangeEnd_Proxy( 
    IAvAxisScale * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvAxisScale_get_RangeEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_put_Increment_Proxy( 
    IAvAxisScale * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvAxisScale_put_Increment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_get_Increment_Proxy( 
    IAvAxisScale * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvAxisScale_get_Increment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_get_Source_Proxy( 
    IAvAxisScale * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvAxisScale_get_Source_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisScale_put_Source_Proxy( 
    IAvAxisScale * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvAxisScale_put_Source_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvAxisScale_INTERFACE_DEFINED__ */


#ifndef __IAvAxisLabel_INTERFACE_DEFINED__
#define __IAvAxisLabel_INTERFACE_DEFINED__

/* interface IAvAxisLabel */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvAxisLabel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12211370-1FA9-4ed2-BB2E-3D87425EC9E2")
    IAvAxisLabel : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontFace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontFace( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontSize( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontSize( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Base( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Base( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HJustify( 
            /* [retval][out] */ AvHJustify *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HJustify( 
            /* [in] */ AvHJustify newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VJustify( 
            /* [retval][out] */ AvVJustify *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VJustify( 
            /* [in] */ AvVJustify newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvAxisLabelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAxisLabel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAxisLabel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAxisLabel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvAxisLabel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvAxisLabel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvAxisLabel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvAxisLabel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IAvAxisLabel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IAvAxisLabel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontFace )( 
            IAvAxisLabel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontFace )( 
            IAvAxisLabel * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            IAvAxisLabel * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontSize )( 
            IAvAxisLabel * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvAxisLabel * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IAvAxisLabel * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Base )( 
            IAvAxisLabel * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Base )( 
            IAvAxisLabel * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IAvAxisLabel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IAvAxisLabel * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HJustify )( 
            IAvAxisLabel * This,
            /* [retval][out] */ AvHJustify *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HJustify )( 
            IAvAxisLabel * This,
            /* [in] */ AvHJustify newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VJustify )( 
            IAvAxisLabel * This,
            /* [retval][out] */ AvVJustify *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VJustify )( 
            IAvAxisLabel * This,
            /* [in] */ AvVJustify newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rotation )( 
            IAvAxisLabel * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rotation )( 
            IAvAxisLabel * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } IAvAxisLabelVtbl;

    interface IAvAxisLabel
    {
        CONST_VTBL struct IAvAxisLabelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAxisLabel_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvAxisLabel_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvAxisLabel_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvAxisLabel_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvAxisLabel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvAxisLabel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvAxisLabel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvAxisLabel_put_Visible(This,newVal)	\
    (This)->lpVtbl -> put_Visible(This,newVal)

#define IAvAxisLabel_get_Visible(This,pVal)	\
    (This)->lpVtbl -> get_Visible(This,pVal)

#define IAvAxisLabel_get_FontFace(This,pVal)	\
    (This)->lpVtbl -> get_FontFace(This,pVal)

#define IAvAxisLabel_put_FontFace(This,newVal)	\
    (This)->lpVtbl -> put_FontFace(This,newVal)

#define IAvAxisLabel_get_FontSize(This,pVal)	\
    (This)->lpVtbl -> get_FontSize(This,pVal)

#define IAvAxisLabel_put_FontSize(This,newVal)	\
    (This)->lpVtbl -> put_FontSize(This,newVal)

#define IAvAxisLabel_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvAxisLabel_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IAvAxisLabel_get_Base(This,pVal)	\
    (This)->lpVtbl -> get_Base(This,pVal)

#define IAvAxisLabel_put_Base(This,newVal)	\
    (This)->lpVtbl -> put_Base(This,newVal)

#define IAvAxisLabel_get_Source(This,pVal)	\
    (This)->lpVtbl -> get_Source(This,pVal)

#define IAvAxisLabel_put_Source(This,newVal)	\
    (This)->lpVtbl -> put_Source(This,newVal)

#define IAvAxisLabel_get_HJustify(This,pVal)	\
    (This)->lpVtbl -> get_HJustify(This,pVal)

#define IAvAxisLabel_put_HJustify(This,newVal)	\
    (This)->lpVtbl -> put_HJustify(This,newVal)

#define IAvAxisLabel_get_VJustify(This,pVal)	\
    (This)->lpVtbl -> get_VJustify(This,pVal)

#define IAvAxisLabel_put_VJustify(This,newVal)	\
    (This)->lpVtbl -> put_VJustify(This,newVal)

#define IAvAxisLabel_get_Rotation(This,pVal)	\
    (This)->lpVtbl -> get_Rotation(This,pVal)

#define IAvAxisLabel_put_Rotation(This,newVal)	\
    (This)->lpVtbl -> put_Rotation(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_Visible_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvAxisLabel_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_Visible_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvAxisLabel_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_FontFace_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvAxisLabel_get_FontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_FontFace_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvAxisLabel_put_FontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_FontSize_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvAxisLabel_get_FontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_FontSize_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvAxisLabel_put_FontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_Color_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvAxisLabel_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_Color_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvAxisLabel_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_Base_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvAxisLabel_get_Base_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_Base_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvAxisLabel_put_Base_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_Source_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvAxisLabel_get_Source_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_Source_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvAxisLabel_put_Source_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_HJustify_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ AvHJustify *pVal);


void __RPC_STUB IAvAxisLabel_get_HJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_HJustify_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ AvHJustify newVal);


void __RPC_STUB IAvAxisLabel_put_HJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_VJustify_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ AvVJustify *pVal);


void __RPC_STUB IAvAxisLabel_get_VJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_VJustify_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ AvVJustify newVal);


void __RPC_STUB IAvAxisLabel_put_VJustify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_get_Rotation_Proxy( 
    IAvAxisLabel * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvAxisLabel_get_Rotation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxisLabel_put_Rotation_Proxy( 
    IAvAxisLabel * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvAxisLabel_put_Rotation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvAxisLabel_INTERFACE_DEFINED__ */


#ifndef __IAvAxis_INTERFACE_DEFINED__
#define __IAvAxis_INTERFACE_DEFINED__

/* interface IAvAxis */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvAxis;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6090E4B8-3F48-4C35-82FA-82038ECC8C37")
    IAvAxis : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [retval][out] */ IAvAxisScale **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Major( 
            /* [retval][out] */ IAvAxisTickmark **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Minor( 
            /* [retval][out] */ IAvAxisTickmark **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvAxisLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Format( 
            /* [retval][out] */ IAvFormat **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Vertical( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Vertical( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RefLine( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RefLine( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineCap( 
            /* [in] */ AvLineEndPoint pt,
            /* [retval][out] */ AvLineCapStyle *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineCap( 
            /* [in] */ AvLineEndPoint pt,
            /* [in] */ AvLineCapStyle newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CapSize( 
            /* [in] */ AvLineEndPoint pt,
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CapSize( 
            /* [in] */ AvLineEndPoint pt,
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [in] */ AvLineEndPoint pt,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndPoint( 
            /* [in] */ AvLineEndPoint pt,
            /* [in] */ double newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvAxisVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAxis * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAxis * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAxis * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvAxis * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvAxis * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvAxis * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvAxis * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvAxis * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvAxis * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvAxis * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvAxis * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvAxis * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvAxis * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvAxis * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvAxis * This,
            /* [retval][out] */ IAvColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvAxis * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            IAvAxis * This,
            /* [retval][out] */ IAvAxisScale **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Major )( 
            IAvAxis * This,
            /* [retval][out] */ IAvAxisTickmark **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Minor )( 
            IAvAxis * This,
            /* [retval][out] */ IAvAxisTickmark **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvAxis * This,
            /* [retval][out] */ IAvAxisLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Format )( 
            IAvAxis * This,
            /* [retval][out] */ IAvFormat **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertical )( 
            IAvAxis * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Vertical )( 
            IAvAxis * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefLine )( 
            IAvAxis * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefLine )( 
            IAvAxis * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineCap )( 
            IAvAxis * This,
            /* [in] */ AvLineEndPoint pt,
            /* [retval][out] */ AvLineCapStyle *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineCap )( 
            IAvAxis * This,
            /* [in] */ AvLineEndPoint pt,
            /* [in] */ AvLineCapStyle newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CapSize )( 
            IAvAxis * This,
            /* [in] */ AvLineEndPoint pt,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CapSize )( 
            IAvAxis * This,
            /* [in] */ AvLineEndPoint pt,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            IAvAxis * This,
            /* [in] */ AvLineEndPoint pt,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPoint )( 
            IAvAxis * This,
            /* [in] */ AvLineEndPoint pt,
            /* [in] */ double newVal);
        
        END_INTERFACE
    } IAvAxisVtbl;

    interface IAvAxis
    {
        CONST_VTBL struct IAvAxisVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAxis_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvAxis_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvAxis_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvAxis_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvAxis_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvAxis_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvAxis_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvAxis_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvAxis_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvAxis_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvAxis_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvAxis_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvAxis_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvAxis_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvAxis_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvAxis_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvAxis_get_Scale(This,pVal)	\
    (This)->lpVtbl -> get_Scale(This,pVal)

#define IAvAxis_get_Major(This,pVal)	\
    (This)->lpVtbl -> get_Major(This,pVal)

#define IAvAxis_get_Minor(This,pVal)	\
    (This)->lpVtbl -> get_Minor(This,pVal)

#define IAvAxis_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvAxis_get_Format(This,pVal)	\
    (This)->lpVtbl -> get_Format(This,pVal)

#define IAvAxis_get_Vertical(This,pVal)	\
    (This)->lpVtbl -> get_Vertical(This,pVal)

#define IAvAxis_put_Vertical(This,newVal)	\
    (This)->lpVtbl -> put_Vertical(This,newVal)

#define IAvAxis_get_RefLine(This,pVal)	\
    (This)->lpVtbl -> get_RefLine(This,pVal)

#define IAvAxis_put_RefLine(This,newVal)	\
    (This)->lpVtbl -> put_RefLine(This,newVal)

#define IAvAxis_get_LineCap(This,pt,pVal)	\
    (This)->lpVtbl -> get_LineCap(This,pt,pVal)

#define IAvAxis_put_LineCap(This,pt,newVal)	\
    (This)->lpVtbl -> put_LineCap(This,pt,newVal)

#define IAvAxis_get_CapSize(This,pt,pVal)	\
    (This)->lpVtbl -> get_CapSize(This,pt,pVal)

#define IAvAxis_put_CapSize(This,pt,newVal)	\
    (This)->lpVtbl -> put_CapSize(This,pt,newVal)

#define IAvAxis_get_EndPoint(This,pt,pVal)	\
    (This)->lpVtbl -> get_EndPoint(This,pt,pVal)

#define IAvAxis_put_EndPoint(This,pt,newVal)	\
    (This)->lpVtbl -> put_EndPoint(This,pt,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Name_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvAxis_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxis_put_Name_Proxy( 
    IAvAxis * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvAxis_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAxis_GetProperty_Proxy( 
    IAvAxis * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvAxis_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvAxis_SetProperty_Proxy( 
    IAvAxis * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvAxis_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Position_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvAxis_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Transform_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvAxis_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Border_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvAxis_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Color_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvColor **pVal);


void __RPC_STUB IAvAxis_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_GraphState_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvAxis_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Scale_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvAxisScale **pVal);


void __RPC_STUB IAvAxis_get_Scale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Major_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvAxisTickmark **pVal);


void __RPC_STUB IAvAxis_get_Major_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Minor_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvAxisTickmark **pVal);


void __RPC_STUB IAvAxis_get_Minor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Label_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvAxisLabel **pVal);


void __RPC_STUB IAvAxis_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Format_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ IAvFormat **pVal);


void __RPC_STUB IAvAxis_get_Format_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_Vertical_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvAxis_get_Vertical_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxis_put_Vertical_Proxy( 
    IAvAxis * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvAxis_put_Vertical_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_RefLine_Proxy( 
    IAvAxis * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvAxis_get_RefLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxis_put_RefLine_Proxy( 
    IAvAxis * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvAxis_put_RefLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_LineCap_Proxy( 
    IAvAxis * This,
    /* [in] */ AvLineEndPoint pt,
    /* [retval][out] */ AvLineCapStyle *pVal);


void __RPC_STUB IAvAxis_get_LineCap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxis_put_LineCap_Proxy( 
    IAvAxis * This,
    /* [in] */ AvLineEndPoint pt,
    /* [in] */ AvLineCapStyle newVal);


void __RPC_STUB IAvAxis_put_LineCap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_CapSize_Proxy( 
    IAvAxis * This,
    /* [in] */ AvLineEndPoint pt,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvAxis_get_CapSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxis_put_CapSize_Proxy( 
    IAvAxis * This,
    /* [in] */ AvLineEndPoint pt,
    /* [in] */ float newVal);


void __RPC_STUB IAvAxis_put_CapSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvAxis_get_EndPoint_Proxy( 
    IAvAxis * This,
    /* [in] */ AvLineEndPoint pt,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvAxis_get_EndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvAxis_put_EndPoint_Proxy( 
    IAvAxis * This,
    /* [in] */ AvLineEndPoint pt,
    /* [in] */ double newVal);


void __RPC_STUB IAvAxis_put_EndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvAxis_INTERFACE_DEFINED__ */


#ifndef __IAvXYPlot_INTERFACE_DEFINED__
#define __IAvXYPlot_INTERFACE_DEFINED__

/* interface IAvXYPlot */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvXYPlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("391AF9B5-DC87-47ef-B131-F04257529579")
    IAvXYPlot : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YSource( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvXYPlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvXYPlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvXYPlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvXYPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvXYPlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvXYPlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvXYPlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvXYPlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvXYPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvXYPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvXYPlot * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvXYPlot * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvXYPlot * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvXYPlot * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvXYPlot * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvXYPlot * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvXYPlot * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvXYPlot * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvXYPlot * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XSource )( 
            IAvXYPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XSource )( 
            IAvXYPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YSource )( 
            IAvXYPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YSource )( 
            IAvXYPlot * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvXYPlotVtbl;

    interface IAvXYPlot
    {
        CONST_VTBL struct IAvXYPlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvXYPlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvXYPlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvXYPlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvXYPlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvXYPlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvXYPlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvXYPlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvXYPlot_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvXYPlot_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvXYPlot_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvXYPlot_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvXYPlot_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvXYPlot_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvXYPlot_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvXYPlot_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvXYPlot_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvXYPlot_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvXYPlot_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvXYPlot_get_XSource(This,pVal)	\
    (This)->lpVtbl -> get_XSource(This,pVal)

#define IAvXYPlot_put_XSource(This,newVal)	\
    (This)->lpVtbl -> put_XSource(This,newVal)

#define IAvXYPlot_get_YSource(This,pVal)	\
    (This)->lpVtbl -> get_YSource(This,pVal)

#define IAvXYPlot_put_YSource(This,newVal)	\
    (This)->lpVtbl -> put_YSource(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_Name_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYPlot_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_put_Name_Proxy( 
    IAvXYPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYPlot_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_GetProperty_Proxy( 
    IAvXYPlot * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvXYPlot_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_SetProperty_Proxy( 
    IAvXYPlot * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvXYPlot_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_Position_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvXYPlot_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_Transform_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvXYPlot_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_Border_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvXYPlot_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_Color_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvXYPlot_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_GraphState_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvXYPlot_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_Marker_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvXYPlot_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_Label_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvXYPlot_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_XSource_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYPlot_get_XSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_put_XSource_Proxy( 
    IAvXYPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYPlot_put_XSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_get_YSource_Proxy( 
    IAvXYPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYPlot_get_YSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYPlot_put_YSource_Proxy( 
    IAvXYPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYPlot_put_YSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvXYPlot_INTERFACE_DEFINED__ */


#ifndef __IAvVector2D_INTERFACE_DEFINED__
#define __IAvVector2D_INTERFACE_DEFINED__

/* interface IAvVector2D */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvVector2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F63093C7-17E7-4287-BB15-C22E90601A28")
    IAvVector2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Grid( 
            /* [retval][out] */ IAvPlotGrid **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DirectionSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DirectionSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MagnitudeScale( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MagnitudeScale( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MagnitudeSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MagnitudeSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseColorSource( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseColorSource( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowArrow( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowArrow( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvVector2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvVector2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvVector2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvVector2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvVector2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvVector2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvVector2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvVector2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvVector2D * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvVector2D * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvVector2D * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvVector2D * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Grid )( 
            IAvVector2D * This,
            /* [retval][out] */ IAvPlotGrid **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DirectionSource )( 
            IAvVector2D * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DirectionSource )( 
            IAvVector2D * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MagnitudeScale )( 
            IAvVector2D * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MagnitudeScale )( 
            IAvVector2D * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MagnitudeSource )( 
            IAvVector2D * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MagnitudeSource )( 
            IAvVector2D * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseColorSource )( 
            IAvVector2D * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseColorSource )( 
            IAvVector2D * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowArrow )( 
            IAvVector2D * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowArrow )( 
            IAvVector2D * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleSource )( 
            IAvVector2D * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleSource )( 
            IAvVector2D * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvVector2DVtbl;

    interface IAvVector2D
    {
        CONST_VTBL struct IAvVector2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvVector2D_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvVector2D_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvVector2D_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvVector2D_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvVector2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvVector2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvVector2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvVector2D_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvVector2D_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvVector2D_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvVector2D_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvVector2D_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvVector2D_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvVector2D_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvVector2D_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvVector2D_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvVector2D_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvVector2D_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvVector2D_get_Grid(This,pVal)	\
    (This)->lpVtbl -> get_Grid(This,pVal)

#define IAvVector2D_get_DirectionSource(This,pVal)	\
    (This)->lpVtbl -> get_DirectionSource(This,pVal)

#define IAvVector2D_put_DirectionSource(This,newVal)	\
    (This)->lpVtbl -> put_DirectionSource(This,newVal)

#define IAvVector2D_get_MagnitudeScale(This,pVal)	\
    (This)->lpVtbl -> get_MagnitudeScale(This,pVal)

#define IAvVector2D_put_MagnitudeScale(This,newVal)	\
    (This)->lpVtbl -> put_MagnitudeScale(This,newVal)

#define IAvVector2D_get_MagnitudeSource(This,pVal)	\
    (This)->lpVtbl -> get_MagnitudeSource(This,pVal)

#define IAvVector2D_put_MagnitudeSource(This,newVal)	\
    (This)->lpVtbl -> put_MagnitudeSource(This,newVal)

#define IAvVector2D_put_UseColorSource(This,newVal)	\
    (This)->lpVtbl -> put_UseColorSource(This,newVal)

#define IAvVector2D_get_UseColorSource(This,pVal)	\
    (This)->lpVtbl -> get_UseColorSource(This,pVal)

#define IAvVector2D_get_ShowArrow(This,pVal)	\
    (This)->lpVtbl -> get_ShowArrow(This,pVal)

#define IAvVector2D_put_ShowArrow(This,newVal)	\
    (This)->lpVtbl -> put_ShowArrow(This,newVal)

#define IAvVector2D_get_ScaleSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_ScaleSource(This,nCoord,pVal)

#define IAvVector2D_put_ScaleSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_ScaleSource(This,nCoord,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Name_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvVector2D_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvVector2D_put_Name_Proxy( 
    IAvVector2D * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvVector2D_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvVector2D_GetProperty_Proxy( 
    IAvVector2D * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvVector2D_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvVector2D_SetProperty_Proxy( 
    IAvVector2D * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvVector2D_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Position_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvVector2D_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Transform_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvVector2D_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Border_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvVector2D_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Color_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvVector2D_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_GraphState_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvVector2D_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Marker_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvVector2D_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Label_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvVector2D_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_Grid_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ IAvPlotGrid **pVal);


void __RPC_STUB IAvVector2D_get_Grid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_DirectionSource_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvVector2D_get_DirectionSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvVector2D_put_DirectionSource_Proxy( 
    IAvVector2D * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvVector2D_put_DirectionSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_MagnitudeScale_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvVector2D_get_MagnitudeScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvVector2D_put_MagnitudeScale_Proxy( 
    IAvVector2D * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvVector2D_put_MagnitudeScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_MagnitudeSource_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvVector2D_get_MagnitudeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvVector2D_put_MagnitudeSource_Proxy( 
    IAvVector2D * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvVector2D_put_MagnitudeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvVector2D_put_UseColorSource_Proxy( 
    IAvVector2D * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvVector2D_put_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_UseColorSource_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvVector2D_get_UseColorSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_ShowArrow_Proxy( 
    IAvVector2D * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvVector2D_get_ShowArrow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvVector2D_put_ShowArrow_Proxy( 
    IAvVector2D * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvVector2D_put_ShowArrow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvVector2D_get_ScaleSource_Proxy( 
    IAvVector2D * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvVector2D_get_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvVector2D_put_ScaleSource_Proxy( 
    IAvVector2D * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvVector2D_put_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvVector2D_INTERFACE_DEFINED__ */


#ifndef __IAvContour_INTERFACE_DEFINED__
#define __IAvContour_INTERFACE_DEFINED__

/* interface IAvContour */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvContour;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60EFA440-9E5A-46db-B5B5-08ABF278BB7F")
    IAvContour : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XYSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XYSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RangeStart( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RangeStart( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RangeEnd( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RangeEnd( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumLevels( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumLevels( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RangeSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RangeSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Fill( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Fill( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvContourVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvContour * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvContour * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvContour * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvContour * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvContour * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvContour * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvContour * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvContour * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvContour * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvContour * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvContour * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvContour * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvContour * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvContour * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvContour * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvContour * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvContour * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvContour * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XYSource )( 
            IAvContour * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XYSource )( 
            IAvContour * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RangeStart )( 
            IAvContour * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeStart )( 
            IAvContour * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RangeEnd )( 
            IAvContour * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeEnd )( 
            IAvContour * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumLevels )( 
            IAvContour * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumLevels )( 
            IAvContour * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RangeSource )( 
            IAvContour * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeSource )( 
            IAvContour * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fill )( 
            IAvContour * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Fill )( 
            IAvContour * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleSource )( 
            IAvContour * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleSource )( 
            IAvContour * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvContourVtbl;

    interface IAvContour
    {
        CONST_VTBL struct IAvContourVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvContour_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvContour_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvContour_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvContour_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvContour_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvContour_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvContour_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvContour_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvContour_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvContour_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvContour_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvContour_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvContour_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvContour_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvContour_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvContour_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvContour_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvContour_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvContour_get_XYSource(This,pVal)	\
    (This)->lpVtbl -> get_XYSource(This,pVal)

#define IAvContour_put_XYSource(This,newVal)	\
    (This)->lpVtbl -> put_XYSource(This,newVal)

#define IAvContour_put_RangeStart(This,newVal)	\
    (This)->lpVtbl -> put_RangeStart(This,newVal)

#define IAvContour_get_RangeStart(This,pVal)	\
    (This)->lpVtbl -> get_RangeStart(This,pVal)

#define IAvContour_put_RangeEnd(This,newVal)	\
    (This)->lpVtbl -> put_RangeEnd(This,newVal)

#define IAvContour_get_RangeEnd(This,pVal)	\
    (This)->lpVtbl -> get_RangeEnd(This,pVal)

#define IAvContour_put_NumLevels(This,newVal)	\
    (This)->lpVtbl -> put_NumLevels(This,newVal)

#define IAvContour_get_NumLevels(This,pVal)	\
    (This)->lpVtbl -> get_NumLevels(This,pVal)

#define IAvContour_put_RangeSource(This,newVal)	\
    (This)->lpVtbl -> put_RangeSource(This,newVal)

#define IAvContour_get_RangeSource(This,pVal)	\
    (This)->lpVtbl -> get_RangeSource(This,pVal)

#define IAvContour_get_Fill(This,pVal)	\
    (This)->lpVtbl -> get_Fill(This,pVal)

#define IAvContour_put_Fill(This,newVal)	\
    (This)->lpVtbl -> put_Fill(This,newVal)

#define IAvContour_get_ScaleSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_ScaleSource(This,nCoord,pVal)

#define IAvContour_put_ScaleSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_ScaleSource(This,nCoord,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Name_Proxy( 
    IAvContour * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvContour_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_Name_Proxy( 
    IAvContour * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvContour_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContour_GetProperty_Proxy( 
    IAvContour * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvContour_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvContour_SetProperty_Proxy( 
    IAvContour * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvContour_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Position_Proxy( 
    IAvContour * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvContour_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Transform_Proxy( 
    IAvContour * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvContour_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Border_Proxy( 
    IAvContour * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvContour_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Color_Proxy( 
    IAvContour * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvContour_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_GraphState_Proxy( 
    IAvContour * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvContour_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Marker_Proxy( 
    IAvContour * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvContour_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Label_Proxy( 
    IAvContour * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvContour_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_XYSource_Proxy( 
    IAvContour * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvContour_get_XYSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_XYSource_Proxy( 
    IAvContour * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvContour_put_XYSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_RangeStart_Proxy( 
    IAvContour * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvContour_put_RangeStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_RangeStart_Proxy( 
    IAvContour * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvContour_get_RangeStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_RangeEnd_Proxy( 
    IAvContour * This,
    /* [in] */ double newVal);


void __RPC_STUB IAvContour_put_RangeEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_RangeEnd_Proxy( 
    IAvContour * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAvContour_get_RangeEnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_NumLevels_Proxy( 
    IAvContour * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvContour_put_NumLevels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_NumLevels_Proxy( 
    IAvContour * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvContour_get_NumLevels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_RangeSource_Proxy( 
    IAvContour * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvContour_put_RangeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_RangeSource_Proxy( 
    IAvContour * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvContour_get_RangeSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_Fill_Proxy( 
    IAvContour * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvContour_get_Fill_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_Fill_Proxy( 
    IAvContour * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvContour_put_Fill_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvContour_get_ScaleSource_Proxy( 
    IAvContour * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvContour_get_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvContour_put_ScaleSource_Proxy( 
    IAvContour * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvContour_put_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvContour_INTERFACE_DEFINED__ */


#ifndef __IAvImage_INTERFACE_DEFINED__
#define __IAvImage_INTERFACE_DEFINED__

/* interface IAvImage */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("816EFDD3-AC8F-4f9e-B2A3-83F8C72B4335")
    IAvImage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Grid( 
            /* [retval][out] */ IAvPlotGrid **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Flip( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Flip( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Repeat( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Repeat( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvImage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvImage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvImage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvImage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvImage * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvImage * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvImage * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvImage * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvImage * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvImage * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvImage * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvImage * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvImage * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvImage * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Grid )( 
            IAvImage * This,
            /* [retval][out] */ IAvPlotGrid **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flip )( 
            IAvImage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Flip )( 
            IAvImage * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Repeat )( 
            IAvImage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Repeat )( 
            IAvImage * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleSource )( 
            IAvImage * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleSource )( 
            IAvImage * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvImageVtbl;

    interface IAvImage
    {
        CONST_VTBL struct IAvImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvImage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvImage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvImage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvImage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvImage_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvImage_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvImage_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvImage_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvImage_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvImage_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvImage_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvImage_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvImage_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvImage_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvImage_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvImage_get_Grid(This,pVal)	\
    (This)->lpVtbl -> get_Grid(This,pVal)

#define IAvImage_get_Flip(This,pVal)	\
    (This)->lpVtbl -> get_Flip(This,pVal)

#define IAvImage_put_Flip(This,newVal)	\
    (This)->lpVtbl -> put_Flip(This,newVal)

#define IAvImage_get_Repeat(This,pVal)	\
    (This)->lpVtbl -> get_Repeat(This,pVal)

#define IAvImage_put_Repeat(This,newVal)	\
    (This)->lpVtbl -> put_Repeat(This,newVal)

#define IAvImage_get_ScaleSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_ScaleSource(This,nCoord,pVal)

#define IAvImage_put_ScaleSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_ScaleSource(This,nCoord,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Name_Proxy( 
    IAvImage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvImage_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImage_put_Name_Proxy( 
    IAvImage * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvImage_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvImage_GetProperty_Proxy( 
    IAvImage * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvImage_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvImage_SetProperty_Proxy( 
    IAvImage * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvImage_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Position_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvImage_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Transform_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvImage_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Border_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvImage_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Color_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvImage_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_GraphState_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvImage_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Marker_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvImage_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Label_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvImage_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Grid_Proxy( 
    IAvImage * This,
    /* [retval][out] */ IAvPlotGrid **pVal);


void __RPC_STUB IAvImage_get_Grid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Flip_Proxy( 
    IAvImage * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvImage_get_Flip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImage_put_Flip_Proxy( 
    IAvImage * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvImage_put_Flip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_Repeat_Proxy( 
    IAvImage * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvImage_get_Repeat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImage_put_Repeat_Proxy( 
    IAvImage * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvImage_put_Repeat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImage_get_ScaleSource_Proxy( 
    IAvImage * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvImage_get_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImage_put_ScaleSource_Proxy( 
    IAvImage * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvImage_put_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvImage_INTERFACE_DEFINED__ */


#ifndef __IAvHeightPlot_INTERFACE_DEFINED__
#define __IAvHeightPlot_INTERFACE_DEFINED__

/* interface IAvHeightPlot */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvHeightPlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12D0D98A-9C22-4a6a-9D77-2B242F130883")
    IAvHeightPlot : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Grid( 
            /* [retval][out] */ IAvPlotGrid **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface( 
            /* [retval][out] */ IAvPlotSurface **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XYSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XYSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvHeightPlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvHeightPlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvHeightPlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvHeightPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvHeightPlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvHeightPlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvHeightPlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvHeightPlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvHeightPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvHeightPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvHeightPlot * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvHeightPlot * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Grid )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvPlotGrid **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Surface )( 
            IAvHeightPlot * This,
            /* [retval][out] */ IAvPlotSurface **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XYSource )( 
            IAvHeightPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XYSource )( 
            IAvHeightPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleSource )( 
            IAvHeightPlot * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleSource )( 
            IAvHeightPlot * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvHeightPlotVtbl;

    interface IAvHeightPlot
    {
        CONST_VTBL struct IAvHeightPlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvHeightPlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvHeightPlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvHeightPlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvHeightPlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvHeightPlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvHeightPlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvHeightPlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvHeightPlot_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvHeightPlot_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvHeightPlot_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvHeightPlot_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvHeightPlot_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvHeightPlot_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvHeightPlot_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvHeightPlot_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvHeightPlot_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvHeightPlot_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvHeightPlot_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvHeightPlot_get_Grid(This,pVal)	\
    (This)->lpVtbl -> get_Grid(This,pVal)

#define IAvHeightPlot_get_Surface(This,pVal)	\
    (This)->lpVtbl -> get_Surface(This,pVal)

#define IAvHeightPlot_get_XYSource(This,pVal)	\
    (This)->lpVtbl -> get_XYSource(This,pVal)

#define IAvHeightPlot_put_XYSource(This,newVal)	\
    (This)->lpVtbl -> put_XYSource(This,newVal)

#define IAvHeightPlot_get_ScaleSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_ScaleSource(This,nCoord,pVal)

#define IAvHeightPlot_put_ScaleSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_ScaleSource(This,nCoord,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Name_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvHeightPlot_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_put_Name_Proxy( 
    IAvHeightPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvHeightPlot_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_GetProperty_Proxy( 
    IAvHeightPlot * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvHeightPlot_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_SetProperty_Proxy( 
    IAvHeightPlot * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvHeightPlot_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Position_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvHeightPlot_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Transform_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvHeightPlot_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Border_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvHeightPlot_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Color_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvHeightPlot_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_GraphState_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvHeightPlot_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Marker_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvHeightPlot_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Label_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvHeightPlot_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Grid_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvPlotGrid **pVal);


void __RPC_STUB IAvHeightPlot_get_Grid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_Surface_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ IAvPlotSurface **pVal);


void __RPC_STUB IAvHeightPlot_get_Surface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_XYSource_Proxy( 
    IAvHeightPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvHeightPlot_get_XYSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_put_XYSource_Proxy( 
    IAvHeightPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvHeightPlot_put_XYSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_get_ScaleSource_Proxy( 
    IAvHeightPlot * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvHeightPlot_get_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvHeightPlot_put_ScaleSource_Proxy( 
    IAvHeightPlot * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvHeightPlot_put_ScaleSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvHeightPlot_INTERFACE_DEFINED__ */


#ifndef __IAvXYZPlot_INTERFACE_DEFINED__
#define __IAvXYZPlot_INTERFACE_DEFINED__

/* interface IAvXYZPlot */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvXYZPlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AECA0D74-72B3-4bf5-9955-5D8933FE774B")
    IAvXYZPlot : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Normal( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Normal( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NormalSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NormalSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvXYZPlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvXYZPlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvXYZPlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvXYZPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvXYZPlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvXYZPlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvXYZPlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvXYZPlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvXYZPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvXYZPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvXYZPlot * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvXYZPlot * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvXYZPlot * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvXYZPlot * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvXYZPlot * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvXYZPlot * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvXYZPlot * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvXYZPlot * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvXYZPlot * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XSource )( 
            IAvXYZPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XSource )( 
            IAvXYZPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YSource )( 
            IAvXYZPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YSource )( 
            IAvXYZPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZSource )( 
            IAvXYZPlot * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZSource )( 
            IAvXYZPlot * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Normal )( 
            IAvXYZPlot * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Normal )( 
            IAvXYZPlot * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NormalSource )( 
            IAvXYZPlot * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NormalSource )( 
            IAvXYZPlot * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IAvXYZPlotVtbl;

    interface IAvXYZPlot
    {
        CONST_VTBL struct IAvXYZPlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvXYZPlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvXYZPlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvXYZPlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvXYZPlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvXYZPlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvXYZPlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvXYZPlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvXYZPlot_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvXYZPlot_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvXYZPlot_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvXYZPlot_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvXYZPlot_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvXYZPlot_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvXYZPlot_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvXYZPlot_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvXYZPlot_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvXYZPlot_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvXYZPlot_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvXYZPlot_get_XSource(This,pVal)	\
    (This)->lpVtbl -> get_XSource(This,pVal)

#define IAvXYZPlot_put_XSource(This,newVal)	\
    (This)->lpVtbl -> put_XSource(This,newVal)

#define IAvXYZPlot_get_YSource(This,pVal)	\
    (This)->lpVtbl -> get_YSource(This,pVal)

#define IAvXYZPlot_put_YSource(This,newVal)	\
    (This)->lpVtbl -> put_YSource(This,newVal)

#define IAvXYZPlot_get_ZSource(This,pVal)	\
    (This)->lpVtbl -> get_ZSource(This,pVal)

#define IAvXYZPlot_put_ZSource(This,newVal)	\
    (This)->lpVtbl -> put_ZSource(This,newVal)

#define IAvXYZPlot_get_Normal(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_Normal(This,nCoord,pVal)

#define IAvXYZPlot_put_Normal(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_Normal(This,nCoord,newVal)

#define IAvXYZPlot_get_NormalSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_NormalSource(This,nCoord,pVal)

#define IAvXYZPlot_put_NormalSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_NormalSource(This,nCoord,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Name_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYZPlot_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_put_Name_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYZPlot_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_GetProperty_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvXYZPlot_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_SetProperty_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvXYZPlot_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Position_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvXYZPlot_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Transform_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvXYZPlot_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Border_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvXYZPlot_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Color_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvXYZPlot_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_GraphState_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvXYZPlot_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Marker_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvXYZPlot_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Label_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvXYZPlot_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_XSource_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYZPlot_get_XSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_put_XSource_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYZPlot_put_XSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_YSource_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYZPlot_get_YSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_put_YSource_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYZPlot_put_YSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_ZSource_Proxy( 
    IAvXYZPlot * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYZPlot_get_ZSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_put_ZSource_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYZPlot_put_ZSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_Normal_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvXYZPlot_get_Normal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_put_Normal_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ float newVal);


void __RPC_STUB IAvXYZPlot_put_Normal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_get_NormalSource_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvXYZPlot_get_NormalSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvXYZPlot_put_NormalSource_Proxy( 
    IAvXYZPlot * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvXYZPlot_put_NormalSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvXYZPlot_INTERFACE_DEFINED__ */


#ifndef __IAvQuadMesh_INTERFACE_DEFINED__
#define __IAvQuadMesh_INTERFACE_DEFINED__

/* interface IAvQuadMesh */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvQuadMesh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8439FFEF-535E-4ed1-880B-7A96303A6711")
    IAvQuadMesh : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Grid( 
            /* [retval][out] */ IAvPlotGrid **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface( 
            /* [retval][out] */ IAvPlotSurface **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VertexSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VertexSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectSide( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectSide( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectTop( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectTop( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvQuadMeshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvQuadMesh * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvQuadMesh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvQuadMesh * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvQuadMesh * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvQuadMesh * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvQuadMesh * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvQuadMesh * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvQuadMesh * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvQuadMesh * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvQuadMesh * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvQuadMesh * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Grid )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvPlotGrid **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Surface )( 
            IAvQuadMesh * This,
            /* [retval][out] */ IAvPlotSurface **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexSource )( 
            IAvQuadMesh * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VertexSource )( 
            IAvQuadMesh * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectSide )( 
            IAvQuadMesh * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectSide )( 
            IAvQuadMesh * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectTop )( 
            IAvQuadMesh * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectTop )( 
            IAvQuadMesh * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvQuadMeshVtbl;

    interface IAvQuadMesh
    {
        CONST_VTBL struct IAvQuadMeshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvQuadMesh_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvQuadMesh_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvQuadMesh_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvQuadMesh_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvQuadMesh_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvQuadMesh_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvQuadMesh_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvQuadMesh_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvQuadMesh_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvQuadMesh_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvQuadMesh_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvQuadMesh_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvQuadMesh_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvQuadMesh_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvQuadMesh_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvQuadMesh_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvQuadMesh_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvQuadMesh_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvQuadMesh_get_Grid(This,pVal)	\
    (This)->lpVtbl -> get_Grid(This,pVal)

#define IAvQuadMesh_get_Surface(This,pVal)	\
    (This)->lpVtbl -> get_Surface(This,pVal)

#define IAvQuadMesh_get_VertexSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_VertexSource(This,nCoord,pVal)

#define IAvQuadMesh_put_VertexSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_VertexSource(This,nCoord,newVal)

#define IAvQuadMesh_get_ConnectSide(This,pVal)	\
    (This)->lpVtbl -> get_ConnectSide(This,pVal)

#define IAvQuadMesh_put_ConnectSide(This,newVal)	\
    (This)->lpVtbl -> put_ConnectSide(This,newVal)

#define IAvQuadMesh_get_ConnectTop(This,pVal)	\
    (This)->lpVtbl -> get_ConnectTop(This,pVal)

#define IAvQuadMesh_put_ConnectTop(This,newVal)	\
    (This)->lpVtbl -> put_ConnectTop(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Name_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvQuadMesh_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_put_Name_Proxy( 
    IAvQuadMesh * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvQuadMesh_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_GetProperty_Proxy( 
    IAvQuadMesh * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvQuadMesh_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_SetProperty_Proxy( 
    IAvQuadMesh * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvQuadMesh_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Position_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvQuadMesh_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Transform_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvQuadMesh_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Border_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvQuadMesh_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Color_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvQuadMesh_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_GraphState_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvQuadMesh_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Marker_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvQuadMesh_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Label_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvQuadMesh_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Grid_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvPlotGrid **pVal);


void __RPC_STUB IAvQuadMesh_get_Grid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_Surface_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ IAvPlotSurface **pVal);


void __RPC_STUB IAvQuadMesh_get_Surface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_VertexSource_Proxy( 
    IAvQuadMesh * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvQuadMesh_get_VertexSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_put_VertexSource_Proxy( 
    IAvQuadMesh * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvQuadMesh_put_VertexSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_ConnectSide_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvQuadMesh_get_ConnectSide_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_put_ConnectSide_Proxy( 
    IAvQuadMesh * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvQuadMesh_put_ConnectSide_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_get_ConnectTop_Proxy( 
    IAvQuadMesh * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvQuadMesh_get_ConnectTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvQuadMesh_put_ConnectTop_Proxy( 
    IAvQuadMesh * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvQuadMesh_put_ConnectTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvQuadMesh_INTERFACE_DEFINED__ */


#ifndef __IAvPolyList_INTERFACE_DEFINED__
#define __IAvPolyList_INTERFACE_DEFINED__

/* interface IAvPolyList */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvPolyList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3140D8EF-87F3-466f-8D93-2AD04BD01977")
    IAvPolyList : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAvPosition **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ IAvTransform **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Border( 
            /* [retval][out] */ IAvBorder **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ IAvPlotColor **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphState( 
            /* [retval][out] */ IAvGraphState **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IAvPlotMarker **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ IAvPlotLabel **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Grid( 
            /* [retval][out] */ IAvPlotGrid **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Surface( 
            /* [retval][out] */ IAvPlotSurface **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VertexSource( 
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VertexSource( 
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VertexListSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VertexListSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PolyType( 
            /* [retval][out] */ AvPolyType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PolyType( 
            /* [in] */ AvPolyType newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseCountTag( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseCountTag( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvPolyListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvPolyList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvPolyList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvPolyList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvPolyList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvPolyList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvPolyList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvPolyList * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvPolyList * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvPolyList * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvPolyList * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvPolyList * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvPosition **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvTransform **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Border )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvBorder **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvPlotColor **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphState )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvGraphState **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvPlotMarker **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvPlotLabel **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Grid )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvPlotGrid **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Surface )( 
            IAvPolyList * This,
            /* [retval][out] */ IAvPlotSurface **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexSource )( 
            IAvPolyList * This,
            /* [in] */ AvCoord nCoord,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VertexSource )( 
            IAvPolyList * This,
            /* [in] */ AvCoord nCoord,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexListSource )( 
            IAvPolyList * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VertexListSource )( 
            IAvPolyList * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolyType )( 
            IAvPolyList * This,
            /* [retval][out] */ AvPolyType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PolyType )( 
            IAvPolyList * This,
            /* [in] */ AvPolyType newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseCountTag )( 
            IAvPolyList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseCountTag )( 
            IAvPolyList * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvPolyListVtbl;

    interface IAvPolyList
    {
        CONST_VTBL struct IAvPolyListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvPolyList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvPolyList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvPolyList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvPolyList_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvPolyList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvPolyList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvPolyList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvPolyList_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvPolyList_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvPolyList_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvPolyList_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvPolyList_get_Position(This,pVal)	\
    (This)->lpVtbl -> get_Position(This,pVal)

#define IAvPolyList_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvPolyList_get_Border(This,pVal)	\
    (This)->lpVtbl -> get_Border(This,pVal)

#define IAvPolyList_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IAvPolyList_get_GraphState(This,pVal)	\
    (This)->lpVtbl -> get_GraphState(This,pVal)

#define IAvPolyList_get_Marker(This,pVal)	\
    (This)->lpVtbl -> get_Marker(This,pVal)

#define IAvPolyList_get_Label(This,pVal)	\
    (This)->lpVtbl -> get_Label(This,pVal)

#define IAvPolyList_get_Grid(This,pVal)	\
    (This)->lpVtbl -> get_Grid(This,pVal)

#define IAvPolyList_get_Surface(This,pVal)	\
    (This)->lpVtbl -> get_Surface(This,pVal)

#define IAvPolyList_get_VertexSource(This,nCoord,pVal)	\
    (This)->lpVtbl -> get_VertexSource(This,nCoord,pVal)

#define IAvPolyList_put_VertexSource(This,nCoord,newVal)	\
    (This)->lpVtbl -> put_VertexSource(This,nCoord,newVal)

#define IAvPolyList_get_VertexListSource(This,pVal)	\
    (This)->lpVtbl -> get_VertexListSource(This,pVal)

#define IAvPolyList_put_VertexListSource(This,newVal)	\
    (This)->lpVtbl -> put_VertexListSource(This,newVal)

#define IAvPolyList_get_PolyType(This,pVal)	\
    (This)->lpVtbl -> get_PolyType(This,pVal)

#define IAvPolyList_put_PolyType(This,newVal)	\
    (This)->lpVtbl -> put_PolyType(This,newVal)

#define IAvPolyList_get_UseCountTag(This,pVal)	\
    (This)->lpVtbl -> get_UseCountTag(This,pVal)

#define IAvPolyList_put_UseCountTag(This,newVal)	\
    (This)->lpVtbl -> put_UseCountTag(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Name_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPolyList_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPolyList_put_Name_Proxy( 
    IAvPolyList * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPolyList_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPolyList_GetProperty_Proxy( 
    IAvPolyList * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvPolyList_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvPolyList_SetProperty_Proxy( 
    IAvPolyList * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvPolyList_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Position_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvPosition **pVal);


void __RPC_STUB IAvPolyList_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Transform_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvTransform **pVal);


void __RPC_STUB IAvPolyList_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Border_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvBorder **pVal);


void __RPC_STUB IAvPolyList_get_Border_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Color_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvPlotColor **pVal);


void __RPC_STUB IAvPolyList_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_GraphState_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvGraphState **pVal);


void __RPC_STUB IAvPolyList_get_GraphState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Marker_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvPlotMarker **pVal);


void __RPC_STUB IAvPolyList_get_Marker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Label_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvPlotLabel **pVal);


void __RPC_STUB IAvPolyList_get_Label_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Grid_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvPlotGrid **pVal);


void __RPC_STUB IAvPolyList_get_Grid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_Surface_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ IAvPlotSurface **pVal);


void __RPC_STUB IAvPolyList_get_Surface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_VertexSource_Proxy( 
    IAvPolyList * This,
    /* [in] */ AvCoord nCoord,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPolyList_get_VertexSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPolyList_put_VertexSource_Proxy( 
    IAvPolyList * This,
    /* [in] */ AvCoord nCoord,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPolyList_put_VertexSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_VertexListSource_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvPolyList_get_VertexListSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPolyList_put_VertexListSource_Proxy( 
    IAvPolyList * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvPolyList_put_VertexListSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_PolyType_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ AvPolyType *pVal);


void __RPC_STUB IAvPolyList_get_PolyType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPolyList_put_PolyType_Proxy( 
    IAvPolyList * This,
    /* [in] */ AvPolyType newVal);


void __RPC_STUB IAvPolyList_put_PolyType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvPolyList_get_UseCountTag_Proxy( 
    IAvPolyList * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvPolyList_get_UseCountTag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvPolyList_put_UseCountTag_Proxy( 
    IAvPolyList * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvPolyList_put_UseCountTag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvPolyList_INTERFACE_DEFINED__ */


#ifndef __IAvGroups_INTERFACE_DEFINED__
#define __IAvGroups_INTERFACE_DEFINED__

/* interface IAvGroups */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGroups;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("601796EB-57BF-40A5-90DA-ED13D147366B")
    IAvGroups : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvGroup **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSubGroup( 
            BSTR name,
            /* [retval][out] */ IAvGroup **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LPDISPATCH pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGroupsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGroups * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGroups * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGroups * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGroups * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGroups * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGroups * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGroups * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvGroups * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvGroup **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvGroups * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvGroups * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvGroups * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvGroups * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvGroups * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvGroups * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvGroups * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSubGroup )( 
            IAvGroups * This,
            BSTR name,
            /* [retval][out] */ IAvGroup **pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAvGroups * This,
            /* [in] */ LPDISPATCH pItem);
        
        END_INTERFACE
    } IAvGroupsVtbl;

    interface IAvGroups
    {
        CONST_VTBL struct IAvGroupsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGroups_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGroups_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGroups_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGroups_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGroups_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGroups_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGroups_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGroups_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvGroups_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvGroups_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvGroups_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvGroups_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvGroups_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvGroups_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvGroups_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvGroups_CreateSubGroup(This,name,pItem)	\
    (This)->lpVtbl -> CreateSubGroup(This,name,pItem)

#define IAvGroups_Add(This,pItem)	\
    (This)->lpVtbl -> Add(This,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroups_Item_Proxy( 
    IAvGroups * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvGroup **pItem);


void __RPC_STUB IAvGroups_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvGroups_get__NewEnum_Proxy( 
    IAvGroups * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvGroups_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroups_get_Name_Proxy( 
    IAvGroups * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGroups_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGroups_put_Name_Proxy( 
    IAvGroups * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGroups_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroups_GetProperty_Proxy( 
    IAvGroups * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGroups_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroups_SetProperty_Proxy( 
    IAvGroups * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGroups_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroups_get_Count_Proxy( 
    IAvGroups * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvGroups_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroups_Remove_Proxy( 
    IAvGroups * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvGroups_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroups_CreateSubGroup_Proxy( 
    IAvGroups * This,
    BSTR name,
    /* [retval][out] */ IAvGroup **pItem);


void __RPC_STUB IAvGroups_CreateSubGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroups_Add_Proxy( 
    IAvGroups * This,
    /* [in] */ LPDISPATCH pItem);


void __RPC_STUB IAvGroups_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGroups_INTERFACE_DEFINED__ */


#ifndef __IAvGroup_INTERFACE_DEFINED__
#define __IAvGroup_INTERFACE_DEFINED__

/* interface IAvGroup */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76D7712C-789A-426B-9AE0-D415381D2B50")
    IAvGroup : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Groups( 
            /* [retval][out] */ IAvGroups **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Pages( 
            /* [retval][out] */ IAvPages **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Graphs( 
            /* [retval][out] */ IAvGraphs **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Datasets( 
            /* [retval][out] */ IAvDatasets **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ IAvAttributes **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SoftLinks( 
            /* [retval][out] */ IAvSoftLinks **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Context( 
            /* [retval][out] */ IAvContext **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectFromPath( 
            /* [in] */ BSTR path,
            /* [in] */ VARIANT_BOOL bFollowLinks,
            /* [retval][out] */ IDispatch **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGroup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvGroup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvGroup * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvGroup * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvGroup * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvGroup * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Groups )( 
            IAvGroup * This,
            /* [retval][out] */ IAvGroups **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pages )( 
            IAvGroup * This,
            /* [retval][out] */ IAvPages **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Graphs )( 
            IAvGroup * This,
            /* [retval][out] */ IAvGraphs **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Datasets )( 
            IAvGroup * This,
            /* [retval][out] */ IAvDatasets **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IAvGroup * This,
            /* [retval][out] */ IAvAttributes **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SoftLinks )( 
            IAvGroup * This,
            /* [retval][out] */ IAvSoftLinks **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Context )( 
            IAvGroup * This,
            /* [retval][out] */ IAvContext **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectFromPath )( 
            IAvGroup * This,
            /* [in] */ BSTR path,
            /* [in] */ VARIANT_BOOL bFollowLinks,
            /* [retval][out] */ IDispatch **pVal);
        
        END_INTERFACE
    } IAvGroupVtbl;

    interface IAvGroup
    {
        CONST_VTBL struct IAvGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGroup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGroup_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvGroup_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvGroup_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvGroup_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvGroup_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvGroup_get_Groups(This,pVal)	\
    (This)->lpVtbl -> get_Groups(This,pVal)

#define IAvGroup_get_Pages(This,pVal)	\
    (This)->lpVtbl -> get_Pages(This,pVal)

#define IAvGroup_get_Graphs(This,pVal)	\
    (This)->lpVtbl -> get_Graphs(This,pVal)

#define IAvGroup_get_Datasets(This,pVal)	\
    (This)->lpVtbl -> get_Datasets(This,pVal)

#define IAvGroup_get_Attributes(This,pVal)	\
    (This)->lpVtbl -> get_Attributes(This,pVal)

#define IAvGroup_get_SoftLinks(This,pVal)	\
    (This)->lpVtbl -> get_SoftLinks(This,pVal)

#define IAvGroup_get_Context(This,pVal)	\
    (This)->lpVtbl -> get_Context(This,pVal)

#define IAvGroup_GetObjectFromPath(This,path,bFollowLinks,pVal)	\
    (This)->lpVtbl -> GetObjectFromPath(This,path,bFollowLinks,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Name_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGroup_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGroup_put_Name_Proxy( 
    IAvGroup * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGroup_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroup_GetProperty_Proxy( 
    IAvGroup * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGroup_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroup_SetProperty_Proxy( 
    IAvGroup * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGroup_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Count_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvGroup_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Groups_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ IAvGroups **pVal);


void __RPC_STUB IAvGroup_get_Groups_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Pages_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ IAvPages **pVal);


void __RPC_STUB IAvGroup_get_Pages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Graphs_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ IAvGraphs **pVal);


void __RPC_STUB IAvGroup_get_Graphs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Datasets_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ IAvDatasets **pVal);


void __RPC_STUB IAvGroup_get_Datasets_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Attributes_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ IAvAttributes **pVal);


void __RPC_STUB IAvGroup_get_Attributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_SoftLinks_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ IAvSoftLinks **pVal);


void __RPC_STUB IAvGroup_get_SoftLinks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGroup_get_Context_Proxy( 
    IAvGroup * This,
    /* [retval][out] */ IAvContext **pVal);


void __RPC_STUB IAvGroup_get_Context_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGroup_GetObjectFromPath_Proxy( 
    IAvGroup * This,
    /* [in] */ BSTR path,
    /* [in] */ VARIANT_BOOL bFollowLinks,
    /* [retval][out] */ IDispatch **pVal);


void __RPC_STUB IAvGroup_GetObjectFromPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGroup_INTERFACE_DEFINED__ */


#ifndef __IAvGHLink_INTERFACE_DEFINED__
#define __IAvGHLink_INTERFACE_DEFINED__

/* interface IAvGHLink */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGHLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9517FA1C-5F70-4F24-AC41-FE40DC573351")
    IAvGHLink : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Groups( 
            /* [retval][out] */ IAvGroups **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Pages( 
            /* [retval][out] */ IAvPages **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Graphs( 
            /* [retval][out] */ IAvGraphs **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Datasets( 
            /* [retval][out] */ IAvDatasets **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ IAvAttributes **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SoftLinks( 
            /* [retval][out] */ IAvSoftLinks **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Context( 
            /* [retval][out] */ IAvContext **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectFromPath( 
            /* [in] */ BSTR path,
            /* [in] */ VARIANT_BOOL bFollowLinks,
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Group( 
            /* [retval][out] */ IAvGroup **pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Group( 
            /* [in] */ IAvGroup *newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGHLinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGHLink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGHLink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGHLink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGHLink * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGHLink * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGHLink * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGHLink * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvGHLink * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvGHLink * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvGHLink * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvGHLink * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvGHLink * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Groups )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvGroups **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pages )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvPages **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Graphs )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvGraphs **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Datasets )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvDatasets **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvAttributes **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SoftLinks )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvSoftLinks **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Context )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvContext **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectFromPath )( 
            IAvGHLink * This,
            /* [in] */ BSTR path,
            /* [in] */ VARIANT_BOOL bFollowLinks,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Group )( 
            IAvGHLink * This,
            /* [retval][out] */ IAvGroup **pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Group )( 
            IAvGHLink * This,
            /* [in] */ IAvGroup *newVal);
        
        END_INTERFACE
    } IAvGHLinkVtbl;

    interface IAvGHLink
    {
        CONST_VTBL struct IAvGHLinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGHLink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGHLink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGHLink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGHLink_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGHLink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGHLink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGHLink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGHLink_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvGHLink_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvGHLink_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvGHLink_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvGHLink_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvGHLink_get_Groups(This,pVal)	\
    (This)->lpVtbl -> get_Groups(This,pVal)

#define IAvGHLink_get_Pages(This,pVal)	\
    (This)->lpVtbl -> get_Pages(This,pVal)

#define IAvGHLink_get_Graphs(This,pVal)	\
    (This)->lpVtbl -> get_Graphs(This,pVal)

#define IAvGHLink_get_Datasets(This,pVal)	\
    (This)->lpVtbl -> get_Datasets(This,pVal)

#define IAvGHLink_get_Attributes(This,pVal)	\
    (This)->lpVtbl -> get_Attributes(This,pVal)

#define IAvGHLink_get_SoftLinks(This,pVal)	\
    (This)->lpVtbl -> get_SoftLinks(This,pVal)

#define IAvGHLink_get_Context(This,pVal)	\
    (This)->lpVtbl -> get_Context(This,pVal)

#define IAvGHLink_GetObjectFromPath(This,path,bFollowLinks,pVal)	\
    (This)->lpVtbl -> GetObjectFromPath(This,path,bFollowLinks,pVal)

#define IAvGHLink_get_Group(This,pVal)	\
    (This)->lpVtbl -> get_Group(This,pVal)

#define IAvGHLink_put_Group(This,newVal)	\
    (This)->lpVtbl -> put_Group(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Name_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGHLink_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGHLink_put_Name_Proxy( 
    IAvGHLink * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGHLink_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGHLink_GetProperty_Proxy( 
    IAvGHLink * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGHLink_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGHLink_SetProperty_Proxy( 
    IAvGHLink * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGHLink_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Count_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvGHLink_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Groups_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvGroups **pVal);


void __RPC_STUB IAvGHLink_get_Groups_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Pages_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvPages **pVal);


void __RPC_STUB IAvGHLink_get_Pages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Graphs_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvGraphs **pVal);


void __RPC_STUB IAvGHLink_get_Graphs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Datasets_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvDatasets **pVal);


void __RPC_STUB IAvGHLink_get_Datasets_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Attributes_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvAttributes **pVal);


void __RPC_STUB IAvGHLink_get_Attributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_SoftLinks_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvSoftLinks **pVal);


void __RPC_STUB IAvGHLink_get_SoftLinks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Context_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvContext **pVal);


void __RPC_STUB IAvGHLink_get_Context_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGHLink_GetObjectFromPath_Proxy( 
    IAvGHLink * This,
    /* [in] */ BSTR path,
    /* [in] */ VARIANT_BOOL bFollowLinks,
    /* [retval][out] */ IDispatch **pVal);


void __RPC_STUB IAvGHLink_GetObjectFromPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGHLink_get_Group_Proxy( 
    IAvGHLink * This,
    /* [retval][out] */ IAvGroup **pVal);


void __RPC_STUB IAvGHLink_get_Group_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGHLink_put_Group_Proxy( 
    IAvGHLink * This,
    /* [in] */ IAvGroup *newVal);


void __RPC_STUB IAvGHLink_put_Group_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGHLink_INTERFACE_DEFINED__ */


#ifndef __IAvSoftLinks_INTERFACE_DEFINED__
#define __IAvSoftLinks_INTERFACE_DEFINED__

/* interface IAvSoftLinks */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvSoftLinks;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A468ABBB-859F-4CD7-966D-D8F8F26BAB28")
    IAvSoftLinks : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvSoftLink **pItem) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LPDISPATCH pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSoftLink( 
            BSTR name,
            /* [retval][out] */ IAvSoftLink **pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvSoftLinksVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvSoftLinks * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvSoftLinks * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvSoftLinks * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvSoftLinks * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvSoftLinks * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvSoftLinks * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvSoftLinks * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAvSoftLinks * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAvSoftLink **pItem);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAvSoftLinks * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvSoftLinks * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvSoftLinks * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvSoftLinks * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvSoftLinks * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAvSoftLinks * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAvSoftLinks * This,
            LPDISPATCH pItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSoftLink )( 
            IAvSoftLinks * This,
            BSTR name,
            /* [retval][out] */ IAvSoftLink **pItem);
        
        END_INTERFACE
    } IAvSoftLinksVtbl;

    interface IAvSoftLinks
    {
        CONST_VTBL struct IAvSoftLinksVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvSoftLinks_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvSoftLinks_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvSoftLinks_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvSoftLinks_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvSoftLinks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvSoftLinks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvSoftLinks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvSoftLinks_Item(This,Index,pItem)	\
    (This)->lpVtbl -> Item(This,Index,pItem)

#define IAvSoftLinks_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IAvSoftLinks_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvSoftLinks_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvSoftLinks_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvSoftLinks_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvSoftLinks_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IAvSoftLinks_Remove(This,pItem)	\
    (This)->lpVtbl -> Remove(This,pItem)

#define IAvSoftLinks_CreateSoftLink(This,name,pItem)	\
    (This)->lpVtbl -> CreateSoftLink(This,name,pItem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_Item_Proxy( 
    IAvSoftLinks * This,
    /* [in] */ VARIANT Index,
    /* [retval][out] */ IAvSoftLink **pItem);


void __RPC_STUB IAvSoftLinks_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_get__NewEnum_Proxy( 
    IAvSoftLinks * This,
    /* [retval][out] */ LPUNKNOWN *pVal);


void __RPC_STUB IAvSoftLinks_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_get_Name_Proxy( 
    IAvSoftLinks * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvSoftLinks_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_put_Name_Proxy( 
    IAvSoftLinks * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvSoftLinks_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_GetProperty_Proxy( 
    IAvSoftLinks * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvSoftLinks_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_SetProperty_Proxy( 
    IAvSoftLinks * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvSoftLinks_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_get_Count_Proxy( 
    IAvSoftLinks * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvSoftLinks_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_Remove_Proxy( 
    IAvSoftLinks * This,
    LPDISPATCH pItem);


void __RPC_STUB IAvSoftLinks_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLinks_CreateSoftLink_Proxy( 
    IAvSoftLinks * This,
    BSTR name,
    /* [retval][out] */ IAvSoftLink **pItem);


void __RPC_STUB IAvSoftLinks_CreateSoftLink_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvSoftLinks_INTERFACE_DEFINED__ */


#ifndef __IAvSoftLink_INTERFACE_DEFINED__
#define __IAvSoftLink_INTERFACE_DEFINED__

/* interface IAvSoftLink */
/* [custom][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvSoftLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56DB64FC-31F8-48D9-866D-284F4641F5AC")
    IAvSoftLink : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLinkObj( 
            /* [retval][out] */ LPDISPATCH *pDisp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvSoftLinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvSoftLink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvSoftLink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvSoftLink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvSoftLink * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvSoftLink * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvSoftLink * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvSoftLink * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAvSoftLink * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAvSoftLink * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvSoftLink * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvSoftLink * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IAvSoftLink * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            IAvSoftLink * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLinkObj )( 
            IAvSoftLink * This,
            /* [retval][out] */ LPDISPATCH *pDisp);
        
        END_INTERFACE
    } IAvSoftLinkVtbl;

    interface IAvSoftLink
    {
        CONST_VTBL struct IAvSoftLinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvSoftLink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvSoftLink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvSoftLink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvSoftLink_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvSoftLink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvSoftLink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvSoftLink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvSoftLink_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IAvSoftLink_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IAvSoftLink_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvSoftLink_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvSoftLink_get_Path(This,pVal)	\
    (This)->lpVtbl -> get_Path(This,pVal)

#define IAvSoftLink_put_Path(This,newVal)	\
    (This)->lpVtbl -> put_Path(This,newVal)

#define IAvSoftLink_GetLinkObj(This,pDisp)	\
    (This)->lpVtbl -> GetLinkObj(This,pDisp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSoftLink_get_Name_Proxy( 
    IAvSoftLink * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvSoftLink_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSoftLink_put_Name_Proxy( 
    IAvSoftLink * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvSoftLink_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLink_GetProperty_Proxy( 
    IAvSoftLink * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvSoftLink_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLink_SetProperty_Proxy( 
    IAvSoftLink * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvSoftLink_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvSoftLink_get_Path_Proxy( 
    IAvSoftLink * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvSoftLink_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvSoftLink_put_Path_Proxy( 
    IAvSoftLink * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvSoftLink_put_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvSoftLink_GetLinkObj_Proxy( 
    IAvSoftLink * This,
    /* [retval][out] */ LPDISPATCH *pDisp);


void __RPC_STUB IAvSoftLink_GetLinkObj_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvSoftLink_INTERFACE_DEFINED__ */


#ifndef __IAvFileLoader_INTERFACE_DEFINED__
#define __IAvFileLoader_INTERFACE_DEFINED__

/* interface IAvFileLoader */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvFileLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C8CD2C7-68A8-4683-A14E-8FA9B7A51DB3")
    IAvFileLoader : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR wzPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ IAvGroup *pRoot,
            /* [in] */ BSTR wzPath,
            /* [in] */ VARIANT_BOOL bRemember) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Root( 
            /* [retval][out] */ IAvGroup **ppRoot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadTemplate( 
            /* [in] */ BSTR wzPath,
            /* [in] */ BSTR wzParams) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AsyncLoad( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AsyncLoad( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadPercent( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AsyncSave( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AsyncSave( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SavePercent( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SaveEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Continue( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvFileLoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvFileLoader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvFileLoader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvFileLoader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvFileLoader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvFileLoader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvFileLoader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvFileLoader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAvFileLoader * This,
            /* [in] */ BSTR wzPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAvFileLoader * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IAvFileLoader * This,
            /* [in] */ IAvGroup *pRoot,
            /* [in] */ BSTR wzPath,
            /* [in] */ VARIANT_BOOL bRemember);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Root )( 
            IAvFileLoader * This,
            /* [retval][out] */ IAvGroup **ppRoot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadTemplate )( 
            IAvFileLoader * This,
            /* [in] */ BSTR wzPath,
            /* [in] */ BSTR wzParams);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncLoad )( 
            IAvFileLoader * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AsyncLoad )( 
            IAvFileLoader * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadPercent )( 
            IAvFileLoader * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AsyncSave )( 
            IAvFileLoader * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AsyncSave )( 
            IAvFileLoader * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SavePercent )( 
            IAvFileLoader * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaveEnabled )( 
            IAvFileLoader * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Continue )( 
            IAvFileLoader * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IAvFileLoaderVtbl;

    interface IAvFileLoader
    {
        CONST_VTBL struct IAvFileLoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvFileLoader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvFileLoader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvFileLoader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvFileLoader_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvFileLoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvFileLoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvFileLoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvFileLoader_Load(This,wzPath)	\
    (This)->lpVtbl -> Load(This,wzPath)

#define IAvFileLoader_Save(This)	\
    (This)->lpVtbl -> Save(This)

#define IAvFileLoader_SaveAs(This,pRoot,wzPath,bRemember)	\
    (This)->lpVtbl -> SaveAs(This,pRoot,wzPath,bRemember)

#define IAvFileLoader_get_Root(This,ppRoot)	\
    (This)->lpVtbl -> get_Root(This,ppRoot)

#define IAvFileLoader_LoadTemplate(This,wzPath,wzParams)	\
    (This)->lpVtbl -> LoadTemplate(This,wzPath,wzParams)

#define IAvFileLoader_get_AsyncLoad(This,pVal)	\
    (This)->lpVtbl -> get_AsyncLoad(This,pVal)

#define IAvFileLoader_put_AsyncLoad(This,newVal)	\
    (This)->lpVtbl -> put_AsyncLoad(This,newVal)

#define IAvFileLoader_get_LoadPercent(This,pVal)	\
    (This)->lpVtbl -> get_LoadPercent(This,pVal)

#define IAvFileLoader_get_AsyncSave(This,pVal)	\
    (This)->lpVtbl -> get_AsyncSave(This,pVal)

#define IAvFileLoader_put_AsyncSave(This,newVal)	\
    (This)->lpVtbl -> put_AsyncSave(This,newVal)

#define IAvFileLoader_get_SavePercent(This,pVal)	\
    (This)->lpVtbl -> get_SavePercent(This,pVal)

#define IAvFileLoader_get_SaveEnabled(This,pVal)	\
    (This)->lpVtbl -> get_SaveEnabled(This,pVal)

#define IAvFileLoader_put_Continue(This,newVal)	\
    (This)->lpVtbl -> put_Continue(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_Load_Proxy( 
    IAvFileLoader * This,
    /* [in] */ BSTR wzPath);


void __RPC_STUB IAvFileLoader_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_Save_Proxy( 
    IAvFileLoader * This);


void __RPC_STUB IAvFileLoader_Save_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_SaveAs_Proxy( 
    IAvFileLoader * This,
    /* [in] */ IAvGroup *pRoot,
    /* [in] */ BSTR wzPath,
    /* [in] */ VARIANT_BOOL bRemember);


void __RPC_STUB IAvFileLoader_SaveAs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_get_Root_Proxy( 
    IAvFileLoader * This,
    /* [retval][out] */ IAvGroup **ppRoot);


void __RPC_STUB IAvFileLoader_get_Root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_LoadTemplate_Proxy( 
    IAvFileLoader * This,
    /* [in] */ BSTR wzPath,
    /* [in] */ BSTR wzParams);


void __RPC_STUB IAvFileLoader_LoadTemplate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_get_AsyncLoad_Proxy( 
    IAvFileLoader * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFileLoader_get_AsyncLoad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_put_AsyncLoad_Proxy( 
    IAvFileLoader * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFileLoader_put_AsyncLoad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_get_LoadPercent_Proxy( 
    IAvFileLoader * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvFileLoader_get_LoadPercent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_get_AsyncSave_Proxy( 
    IAvFileLoader * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFileLoader_get_AsyncSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_put_AsyncSave_Proxy( 
    IAvFileLoader * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFileLoader_put_AsyncSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_get_SavePercent_Proxy( 
    IAvFileLoader * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvFileLoader_get_SavePercent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_get_SaveEnabled_Proxy( 
    IAvFileLoader * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFileLoader_get_SaveEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFileLoader_put_Continue_Proxy( 
    IAvFileLoader * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFileLoader_put_Continue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvFileLoader_INTERFACE_DEFINED__ */


#ifndef __IAvGenerator_INTERFACE_DEFINED__
#define __IAvGenerator_INTERFACE_DEFINED__

/* interface IAvGenerator */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvGenerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78D7A6DD-ED7D-460c-92C8-1DC27A346C33")
    IAvGenerator : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeneratorOp( 
            /* [retval][out] */ AvGeneratorOp *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GeneratorOp( 
            /* [in] */ AvGeneratorOp newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Target( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Arg( 
            /* [in] */ AvArgType ArgId,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Arg( 
            /* [in] */ AvArgType ArgId,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Progress( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ VARIANT_BOOL bAsynch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvGeneratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvGenerator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvGenerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvGenerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvGenerator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvGenerator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvGenerator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvGenerator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeneratorOp )( 
            IAvGenerator * This,
            /* [retval][out] */ AvGeneratorOp *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GeneratorOp )( 
            IAvGenerator * This,
            /* [in] */ AvGeneratorOp newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IAvGenerator * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Target )( 
            IAvGenerator * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arg )( 
            IAvGenerator * This,
            /* [in] */ AvArgType ArgId,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Arg )( 
            IAvGenerator * This,
            /* [in] */ AvArgType ArgId,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )( 
            IAvGenerator * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvGenerator * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvGenerator * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IAvGenerator * This,
            /* [in] */ VARIANT_BOOL bAsynch);
        
        END_INTERFACE
    } IAvGeneratorVtbl;

    interface IAvGenerator
    {
        CONST_VTBL struct IAvGeneratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvGenerator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvGenerator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvGenerator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvGenerator_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvGenerator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvGenerator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvGenerator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvGenerator_get_GeneratorOp(This,pVal)	\
    (This)->lpVtbl -> get_GeneratorOp(This,pVal)

#define IAvGenerator_put_GeneratorOp(This,newVal)	\
    (This)->lpVtbl -> put_GeneratorOp(This,newVal)

#define IAvGenerator_get_Target(This,pVal)	\
    (This)->lpVtbl -> get_Target(This,pVal)

#define IAvGenerator_put_Target(This,newVal)	\
    (This)->lpVtbl -> put_Target(This,newVal)

#define IAvGenerator_get_Arg(This,ArgId,pVal)	\
    (This)->lpVtbl -> get_Arg(This,ArgId,pVal)

#define IAvGenerator_put_Arg(This,ArgId,newVal)	\
    (This)->lpVtbl -> put_Arg(This,ArgId,newVal)

#define IAvGenerator_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IAvGenerator_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvGenerator_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvGenerator_Run(This,bAsynch)	\
    (This)->lpVtbl -> Run(This,bAsynch)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGenerator_get_GeneratorOp_Proxy( 
    IAvGenerator * This,
    /* [retval][out] */ AvGeneratorOp *pVal);


void __RPC_STUB IAvGenerator_get_GeneratorOp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGenerator_put_GeneratorOp_Proxy( 
    IAvGenerator * This,
    /* [in] */ AvGeneratorOp newVal);


void __RPC_STUB IAvGenerator_put_GeneratorOp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGenerator_get_Target_Proxy( 
    IAvGenerator * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvGenerator_get_Target_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGenerator_put_Target_Proxy( 
    IAvGenerator * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvGenerator_put_Target_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGenerator_get_Arg_Proxy( 
    IAvGenerator * This,
    /* [in] */ AvArgType ArgId,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGenerator_get_Arg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvGenerator_put_Arg_Proxy( 
    IAvGenerator * This,
    /* [in] */ AvArgType ArgId,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGenerator_put_Arg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvGenerator_get_Progress_Proxy( 
    IAvGenerator * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvGenerator_get_Progress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGenerator_GetProperty_Proxy( 
    IAvGenerator * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvGenerator_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGenerator_SetProperty_Proxy( 
    IAvGenerator * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvGenerator_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvGenerator_Run_Proxy( 
    IAvGenerator * This,
    /* [in] */ VARIANT_BOOL bAsynch);


void __RPC_STUB IAvGenerator_Run_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvGenerator_INTERFACE_DEFINED__ */


#ifndef __IAvFilter_INTERFACE_DEFINED__
#define __IAvFilter_INTERFACE_DEFINED__

/* interface IAvFilter */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("115CCBD7-AC11-46d3-927D-0BD2AB75DFAC")
    IAvFilter : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterOp( 
            /* [retval][out] */ AvFilterOp *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterOp( 
            /* [in] */ AvFilterOp newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Target( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Arg( 
            /* [in] */ AvArgType ArgId,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Arg( 
            /* [in] */ AvArgType ArgId,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoUpdate( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Progress( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ VARIANT_BOOL bAsynch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvFilter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvFilter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvFilter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvFilter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvFilter * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterOp )( 
            IAvFilter * This,
            /* [retval][out] */ AvFilterOp *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterOp )( 
            IAvFilter * This,
            /* [in] */ AvFilterOp newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IAvFilter * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IAvFilter * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IAvFilter * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Target )( 
            IAvFilter * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arg )( 
            IAvFilter * This,
            /* [in] */ AvArgType ArgId,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Arg )( 
            IAvFilter * This,
            /* [in] */ AvArgType ArgId,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoUpdate )( 
            IAvFilter * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoUpdate )( 
            IAvFilter * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )( 
            IAvFilter * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAvFilter * This,
            /* [in] */ BSTR propName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAvFilter * This,
            /* [in] */ BSTR propName,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IAvFilter * This,
            /* [in] */ VARIANT_BOOL bAsynch);
        
        END_INTERFACE
    } IAvFilterVtbl;

    interface IAvFilter
    {
        CONST_VTBL struct IAvFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvFilter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvFilter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvFilter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvFilter_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAvFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAvFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAvFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAvFilter_get_FilterOp(This,pVal)	\
    (This)->lpVtbl -> get_FilterOp(This,pVal)

#define IAvFilter_put_FilterOp(This,newVal)	\
    (This)->lpVtbl -> put_FilterOp(This,newVal)

#define IAvFilter_get_Source(This,pVal)	\
    (This)->lpVtbl -> get_Source(This,pVal)

#define IAvFilter_put_Source(This,newVal)	\
    (This)->lpVtbl -> put_Source(This,newVal)

#define IAvFilter_get_Target(This,pVal)	\
    (This)->lpVtbl -> get_Target(This,pVal)

#define IAvFilter_put_Target(This,newVal)	\
    (This)->lpVtbl -> put_Target(This,newVal)

#define IAvFilter_get_Arg(This,ArgId,pVal)	\
    (This)->lpVtbl -> get_Arg(This,ArgId,pVal)

#define IAvFilter_put_Arg(This,ArgId,newVal)	\
    (This)->lpVtbl -> put_Arg(This,ArgId,newVal)

#define IAvFilter_get_AutoUpdate(This,pVal)	\
    (This)->lpVtbl -> get_AutoUpdate(This,pVal)

#define IAvFilter_put_AutoUpdate(This,newVal)	\
    (This)->lpVtbl -> put_AutoUpdate(This,newVal)

#define IAvFilter_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IAvFilter_GetProperty(This,propName,pVal)	\
    (This)->lpVtbl -> GetProperty(This,propName,pVal)

#define IAvFilter_SetProperty(This,propName,newVal)	\
    (This)->lpVtbl -> SetProperty(This,propName,newVal)

#define IAvFilter_Run(This,bAsynch)	\
    (This)->lpVtbl -> Run(This,bAsynch)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFilter_get_FilterOp_Proxy( 
    IAvFilter * This,
    /* [retval][out] */ AvFilterOp *pVal);


void __RPC_STUB IAvFilter_get_FilterOp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFilter_put_FilterOp_Proxy( 
    IAvFilter * This,
    /* [in] */ AvFilterOp newVal);


void __RPC_STUB IAvFilter_put_FilterOp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFilter_get_Source_Proxy( 
    IAvFilter * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvFilter_get_Source_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFilter_put_Source_Proxy( 
    IAvFilter * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvFilter_put_Source_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFilter_get_Target_Proxy( 
    IAvFilter * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvFilter_get_Target_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFilter_put_Target_Proxy( 
    IAvFilter * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvFilter_put_Target_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFilter_get_Arg_Proxy( 
    IAvFilter * This,
    /* [in] */ AvArgType ArgId,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvFilter_get_Arg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFilter_put_Arg_Proxy( 
    IAvFilter * This,
    /* [in] */ AvArgType ArgId,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvFilter_put_Arg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFilter_get_AutoUpdate_Proxy( 
    IAvFilter * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAvFilter_get_AutoUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvFilter_put_AutoUpdate_Proxy( 
    IAvFilter * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAvFilter_put_AutoUpdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvFilter_get_Progress_Proxy( 
    IAvFilter * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvFilter_get_Progress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFilter_GetProperty_Proxy( 
    IAvFilter * This,
    /* [in] */ BSTR propName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IAvFilter_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFilter_SetProperty_Proxy( 
    IAvFilter * This,
    /* [in] */ BSTR propName,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IAvFilter_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAvFilter_Run_Proxy( 
    IAvFilter * This,
    /* [in] */ VARIANT_BOOL bAsynch);


void __RPC_STUB IAvFilter_Run_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvFilter_INTERFACE_DEFINED__ */


#ifndef __IAvImageSave_INTERFACE_DEFINED__
#define __IAvImageSave_INTERFACE_DEFINED__

/* interface IAvImageSave */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IAvImageSave;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE7ABDD3-7630-455a-B7C8-6C9C28CE2FFA")
    IAvImageSave : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraphPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GraphPath( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ LPDISPATCH *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ LPDISPATCH *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BitsPerChannel( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BitsPerChannel( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChannelsPerPixel( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChannelsPerPixel( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAvImageSaveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvImageSave * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvImageSave * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvImageSave * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GraphPath )( 
            IAvImageSave * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GraphPath )( 
            IAvImageSave * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            IAvImageSave * This,
            /* [retval][out] */ LPDISPATCH *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            IAvImageSave * This,
            /* [retval][out] */ LPDISPATCH *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IAvImageSave * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IAvImageSave * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IAvImageSave * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            IAvImageSave * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IAvImageSave * This,
            /* [retval][out] */ float *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IAvImageSave * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitsPerChannel )( 
            IAvImageSave * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitsPerChannel )( 
            IAvImageSave * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChannelsPerPixel )( 
            IAvImageSave * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ChannelsPerPixel )( 
            IAvImageSave * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IAvImageSaveVtbl;

    interface IAvImageSave
    {
        CONST_VTBL struct IAvImageSaveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvImageSave_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAvImageSave_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAvImageSave_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAvImageSave_get_GraphPath(This,pVal)	\
    (This)->lpVtbl -> get_GraphPath(This,pVal)

#define IAvImageSave_put_GraphPath(This,newVal)	\
    (This)->lpVtbl -> put_GraphPath(This,newVal)

#define IAvImageSave_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define IAvImageSave_get_Camera(This,pVal)	\
    (This)->lpVtbl -> get_Camera(This,pVal)

#define IAvImageSave_get_Width(This,pVal)	\
    (This)->lpVtbl -> get_Width(This,pVal)

#define IAvImageSave_put_Width(This,newVal)	\
    (This)->lpVtbl -> put_Width(This,newVal)

#define IAvImageSave_get_Height(This,pVal)	\
    (This)->lpVtbl -> get_Height(This,pVal)

#define IAvImageSave_put_Height(This,newVal)	\
    (This)->lpVtbl -> put_Height(This,newVal)

#define IAvImageSave_get_Resolution(This,pVal)	\
    (This)->lpVtbl -> get_Resolution(This,pVal)

#define IAvImageSave_put_Resolution(This,newVal)	\
    (This)->lpVtbl -> put_Resolution(This,newVal)

#define IAvImageSave_get_BitsPerChannel(This,pVal)	\
    (This)->lpVtbl -> get_BitsPerChannel(This,pVal)

#define IAvImageSave_put_BitsPerChannel(This,newVal)	\
    (This)->lpVtbl -> put_BitsPerChannel(This,newVal)

#define IAvImageSave_get_ChannelsPerPixel(This,pVal)	\
    (This)->lpVtbl -> get_ChannelsPerPixel(This,pVal)

#define IAvImageSave_put_ChannelsPerPixel(This,newVal)	\
    (This)->lpVtbl -> put_ChannelsPerPixel(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_GraphPath_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAvImageSave_get_GraphPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImageSave_put_GraphPath_Proxy( 
    IAvImageSave * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAvImageSave_put_GraphPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_Transform_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ LPDISPATCH *pVal);


void __RPC_STUB IAvImageSave_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_Camera_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ LPDISPATCH *pVal);


void __RPC_STUB IAvImageSave_get_Camera_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_Width_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvImageSave_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImageSave_put_Width_Proxy( 
    IAvImageSave * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvImageSave_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_Height_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvImageSave_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImageSave_put_Height_Proxy( 
    IAvImageSave * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvImageSave_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_Resolution_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAvImageSave_get_Resolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImageSave_put_Resolution_Proxy( 
    IAvImageSave * This,
    /* [in] */ float newVal);


void __RPC_STUB IAvImageSave_put_Resolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_BitsPerChannel_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvImageSave_get_BitsPerChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImageSave_put_BitsPerChannel_Proxy( 
    IAvImageSave * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvImageSave_put_BitsPerChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAvImageSave_get_ChannelsPerPixel_Proxy( 
    IAvImageSave * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAvImageSave_get_ChannelsPerPixel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAvImageSave_put_ChannelsPerPixel_Proxy( 
    IAvImageSave * This,
    /* [in] */ long newVal);


void __RPC_STUB IAvImageSave_put_ChannelsPerPixel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAvImageSave_INTERFACE_DEFINED__ */



#ifndef __AVLib_LIBRARY_DEFINED__
#define __AVLib_LIBRARY_DEFINED__

/* library AVLib */
/* [helpstring][version][uuid] */ 




























































EXTERN_C const IID LIBID_AVLib;

EXTERN_C const CLSID CLSID_AvGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("FB1AF0E6-9BE2-4B38-8108-64C2AE5F6EBE")
AvGroup;
#endif

EXTERN_C const CLSID CLSID_AvFileLoader;

#ifdef __cplusplus

class DECLSPEC_UUID("6387739C-4794-4B79-804E-22BEF25F0821")
AvFileLoader;
#endif
#endif /* __AVLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


