/*                                                                                */
/*   Copyright  (C) 2005 Intel Corporation.  All rights reserved.                 */
/*                                                                                */
/*   The information and source code contained herein is the exclusive property   */
/*   of Intel Corporation and may not be disclosed, examined, or reproduced in    */
/*   whole or in part without explicit written authorization from the Company.    */
/*                                                                                */
/*                                                                                */
#ifndef _AVCRT_H_
#define _AVCRT_H_

#ifdef __cplusplus
extern "C" {
#endif

// Some work-arounds for projects where <windows.h> is not included
#ifndef _WINDOWS_
#ifndef BOOL
#define BOOL int
#endif
#ifndef TRUE 
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef __IDispatch_FWD_DEFINED__
#define __IDispatch_FWD_DEFINED__
#define IDispatch void
#endif 	/* __IDispatch_FWD_DEFINED__ */
#endif /* _WINDOWS_H */

#ifndef AVLIB_BUILD
#ifdef _DEBUG
#pragma comment(lib, "AvCRTd.lib")
#else
#pragma comment(lib, "AvCRT.lib")
#endif
#endif

// AvType Defines
#define AV_CHAR_TYPE    1
#define AV_UCHAR_TYPE   2
#define AV_SHORT_TYPE   3
#define AV_USHORT_TYPE  4
#define AV_LONG_TYPE    5
#define AV_ULONG_TYPE   6
#define AV_LLONG_TYPE   7
#define AV_ULLONG_TYPE  8
#define AV_FLOAT_TYPE   9
#define AV_DOUBLE_TYPE  10
#define AV_LDOUBLE_TYPE 11
// values 12-20 are reserved
 
//
// avAlloc()
// Allocates an array
// Parameters:
//    ndim: the rank of the array
//    dims: a pointer to an array of ints.  The size of dims must be equal 
//       to ndim.  The dims arrays specifies the dimensions of the array to be
//       allocated.
//    type: the desired type of the array.  Use defines above or create a new
//       type with avCreateAsciiStringType, avCreateUnicodeStringType, 
//       or avCreateType.
//    szName: the name to be used to identify the array.  
// Return value: 
//    A pointer to the allocated block of memory.
//    Returns NULL if aglMalloc was unable to allocate the memory.
//
void * avAlloc(int ndim, const int *dims, int type, const char * szName);

//
// avFree()
// Frees an array that was created using avAlloc()
// Parameters:
//     pData: a pointer to an array that was created using avAlloc()
// Return value:
//     none
void avFree(void *pData);

//
// avStartWatch
// Adds the array pointed to by pData to the list of viewable arrays.
//
// Parameters:
//    pData: a pointer to the array data
//    ndim: the rank of the array
//    dims: a pointer to an array of ints.  The size of dims must be equal 
//       to ndim.  The dims arrays specifies the dimensions of the array.
//    type: the desired type of the array. See avAlloc
//    szName: the name to be used to identify the array.  
// Return value: 
//    True if the operation was successful
//
BOOL avStartWatch(void *pData, int ndim, const int *dims, int type, const char * szName);
//
// avEndWatch()
//
// Removes the given array from the list of viewable arrays
//
// Parameters:
//    pData: a pointer to the array to be removed
// Return value: 
//    True if the operation was successful
//
BOOL avEndWatch(void *pData);

//
// avUpdate()
//
// Updates the content of the given array
//
// Parameters:
//    pData: a pointer to an array that has been previously used as an argument
//    to avStartWatch()
// Return value: 
//    True if the operation was successful
//
BOOL avUpdate(void *pData);

//
// avCreateGraph2D()
//
// Creates a 2D graph based on given param string
//
// Parameters:
//    szName: Name to be used for the graph
//    szParams: a string of name, value pairs used to initalize the graph
// Return value: 
//    True if the operation was successful
//
BOOL avCreateGraph2D(const char *szName, const char *szParams);

//
// avCreateGraph3D()
//
// Creates a 3D graph based on given param string
//
// Parameters:
//    szName: Name to be used for the graph
//    szParams: a string of name, value pairs used to initalize the graph
// Return value: 
//    True if the operation was successful
//
BOOL avCreateGraph3D(const char *szName, const char *szParams);

//
// avCreateAsciiStringType()
//
// Creates an ascii string type that can store up to nChars characters.
//
// Parameters:
//    nChars: The maximum string length that will be used with elements of this 
//            type.
// Return value: 
//    0 if the operation was unsuccessful
//    Otherwise, a handle that can be used with avStartWatch(), 
//    avAlloc(), or avInsertType()
//
int avCreateAsciiStringType(int nChars);

//
// avCreateUnicodeStringType()
//
// Creates an Unicode string (2 bytes per character) type that can store 
//   up to nChars characters.
//
// Parameters:
//    nChars: The maximum string length that will be used with elements of this 
//            type.
// Return value: 
//    0 if the operation was unsuccessful
//    Otherwise, a handle that can be used with avStartWatch(), 
//    avAlloc(), avInsertType()
//
int avCreateUnicodeStringType(int nChars);

//
// avCreateType()
//
// Creates a new compound type
//
// Parameters:
//    nSize: The size in bytes of the type.
// Return value: 
//    0 if the operation was unsuccessful
//    Otherwise, a handle that can be used can be used with avStartWatch, avAlloc, and 
//      avInsertType
//
int avCreateType(int nSize);

//
// avInsertType()
//
// Adds an element to a compound type
//
// Parameters:
//    nTypeHandle: A handle referencing a compound type created using avCreateType
//    szName: The name of the element to be inserted
//    nOffset: The offset (in bytes) of the element within the compound type
//    nFieldHandle: The type of the element to be inserted
//    nExtent: The extent of the element
// Return value:
//    True if the operation was successful
//
BOOL avInsertType(int nTypeHandle, const char * szName, int nOffset, int nFieldHandle, int nExtent);
 
// avNewViewer()
// Creates a new instance of the Array Viewer application
//
// Parameters:
//   None   
// Return value:
//   A handle that can be used with avVisible, avCloseViewer, etc.
//   Returns 0 if there was an error.
int  avNewViewer();

// avCloseViewer
// Closes the Array Viewer application referenced by nViewer.
//
// Parameters:
// nViewer: The handle returned by avNewViewer
// Return value:
//   false on error
//   true if successful
//
BOOL  avCloseViewer(int nViewer);

// avVisible()
// Hides or shows the Array Viewer application referenced by nViewer.
//
// Parameters:
// nViewer: The handle returned by avNewViewer
// bShow:: TRUE it make the viewer visible, FALSE to hide it
// Return value:
//   false on error
//   true if successful
//
BOOL avVisible(int nViewer, BOOL bShow);

// avSetViewerPath()
// Sets the object to be displayed by the Array Viewer.
//
// Parameters:
// nViewer: The handle returned by avNewViewer
// szPath:: An object path name of the object to be displayed
// Return value:
//   false on error
//   true if successful
//
BOOL avSetViewerPath(int nViewer, const char *szPath);

// avViewerRefresh()
// Causes the Array Viewer screens to be refreshed
//
// Parameters:
// nViewer: The handle returned by avNewViewer
// Return value:
//   false on error
//   true if successful
//
BOOL avViewerRefresh(int nViewer);

// avViewerUpdate()
// Causes the any controls in the Array Viewer View pane to be updated.
// The operation is much faster than using avViewerRefresh, but will not
// update the Tree control or non-control View pane state.
//
// Parameters:
// nViewer: The handle returned by avNewViewer
// Return value:
//   false on error
//   true if successful
//
BOOL avViewerUpdate(int nViewer);

// avSetViewerStatusBarText()
// Sets the status bar text
//
// Parameters:
// nViewer: The handle returned by avNewViewer
// szText: The text to be displayed
// Return value:
//   false on error
//   true if successful
//
BOOL avSetViewerStatusBarText(int nViewer, const char *szText);

// avSetViewerWindowText()
// Sets the text on the Viewer title bar
//
// Parameters:
// nViewer: The handle returned by avNewViewer
// szText: The text to be displayed
// Return value:
//   false on error
//   true if successful
//
BOOL avSetViewerWindowText(int nViewer, const char *szText);

// 
// avGetObject
// 
// Returns an interface to the AvGroup or AvDataset object referenced
// by szPath.  Use avOpen() to open a file first.
//
// Parameters:
//  szPath: A path to the Group or Dataset element
// Return value:
//   An interface to the object if successful
//   NULL in the event of an error or if the object does not exist
//
IDispatch *avGetObject(const char * szPath);


//
// avGetArrayPointer
//
// Returns a pointer to the array data of the AvDataset object referenced
// by szPath.
//
// Parameters:
//   szDatasetPath: A path to a Dataset
// Return value:
//   A pointer to the array data, or null if the dataset does not exist.
// 
void *avGetArrayPointer(const char * szDatasetPath);

//
// avGetArraySize
// 
// Returns the size (in bytes) of the the array data of the AvDataset object 
// referenced by szDatasetPath.
//
// Parameters:
//   szDatasetPath: A path to a Dataset
// Return value:
//   The size of the array data, or null if the dataset does not exist.
// 
__int64 avGetArraySize(const char * szDatasetPath);

//
// avGetExtent
// 
// Returns the extent for the given dimension of the AvDataset object 
// referenced by szDatasetPath.
//
// Parameters:
//   szDatasetPath: A path to a Dataset
//   dim: The dimension of the extent to be returned.
// Return value:
//   The number of elements in the extent, or 0 if the object does not exist
//   or the dimension is greater than the rank of the dataset.
// Note: The dimensions are ordered using C conventions.
// 
int avGetExtent(const char * szDatasetPath, int nDim);

//
// avOpen
//
// Opens the indicated file.  Any currently opened file will be closed.
//
// Parameters:
//    szFilePath: The file to be opened.
//    bCreate: If TRUE a file will be created if no file with the given name 
//               exists.
// Return value:
//    True if successful
//
BOOL avOpen(const char * szFilePath, BOOL bCreate);

//
// avLoadTemplate
//
// Loads a template file
//
// Parameters:
//    szFilePath: The template file to be opened.
//    szNameValuePairs: A string containing a comma delimented list in the
//      format "A1=B1, A2=B2, ...". Where "An", "Bn" can be a string of any 
//      except '=' or ','.  Occurances of "An" in the template file will be 
//      replaced by "Bn".
// Return value:
//    True if successful
//
BOOL avLoadTemplate(const char * szFilePath, const char *szNameValuePairs);

//
// avSave
//
// Saves current set of arrays to the given file.
//
// Parameters:
//    szFilePath: The name of the file.  
//
// Return value:
//    True if succesful
//
BOOL avSave(const char * szFilePath);

//
// avSaveImage
//
// Saves current set of arrays to the given file.
//
// Parameters:
//    szFilePath: The name of the image file to create. 
//         The following extensions are supported:
//         .png: PNG Image format
//         .jpg: JPEG Image format
//         .bmp: Window Bitmap
//         .tif: TIFF Image format
//    szGraphPath: The path to the graph object to be rendered
//    nHeight: The image width.
//    nWidth: The image resolution.
//    fResolution: Device resolution in Pixels per Inch
// 
//
// Return value:
//    True if succesful
//
BOOL avSaveImage(const char * szFilePath, const char *szGraphPath, int nHeight, int nWidth, float fResolution);

//
// avClose
//
// Closes any file opened with avOpen.
// Releases all memory allocations.
//
// Parameters:
//    None
//
// Return value:
//    None
//
void avClose();

//
// avGetErrorMessage
//
// Returns the last error message.
//
// Parameters:
//    None
//
// Return value:
//    Pointer to error message string
//
const char * avGetErrorMessage();


//
// avThreadDetach
// Call before returning from a secondary thread
//
// Parameters:
//   None
//
void avThreadDetach();



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _AVCRT_H_ */
