/**
*** Copyright (C) 1985-2000 Intel Corporation.  All rights reserved.
***
*** The information and source code contained herein is the exclusive
*** property of Intel Corporation and may not be disclosed, examined
*** or reproduced in whole or in part without explicit written authorization
*** from the company.
***
*** static char cvs_id[] = "$Id: omp.h,v 1.2 2000/08/18 15:09:23 cstoller Exp $";
**/

/**
 **  KAI C++ Compiler
 **
 **  (C) Copyright 1998 by Kuck and Associates, Inc. All Rights Reserved.
 **/

#ifndef __OMP_H
#   define __OMP_H


#   ifdef __cplusplus
    extern "C" {
#   endif

#   if defined(_WIN32) || defined(__hpux) || defined(_AIX) || defined(unixware)

#       define omp_set_num_threads    ompc_set_num_threads
#       define omp_set_dynamic        ompc_set_dynamic
#       define omp_set_nested         ompc_set_nested



#       define kmp_set_stacksize      kmpc_set_stacksize
#       define kmp_set_blocktime      kmpc_set_blocktime
#       define kmp_set_library        kmpc_set_library
#       define kmp_set_parallel_name  kmpc_set_parallel_name
#       define kmp_set_stats          kmpc_set_stats

#       define kmp_malloc             kmpc_malloc
#       define kmp_calloc             kmpc_calloc
#       define kmp_realloc            kmpc_realloc
#       define kmp_free               kmpc_free

#   elif defined(__sgi) || defined(__linux) || defined(_SX) || defined(__sun) || defined(__alpha)

#       define omp_set_num_threads    ompc_set_num_threads
#       define omp_set_dynamic        ompc_set_dynamic
#       define omp_set_nested         ompc_set_nested

#       define omp_get_num_threads    omp_get_num_threads_
#       define omp_get_dynamic        omp_get_dynamic_
#       define omp_get_nested         omp_get_nested_
#       define omp_get_max_threads    omp_get_max_threads_
#       define omp_get_thread_num     omp_get_thread_num_
#       define omp_get_num_procs      omp_get_num_procs_
#       define omp_in_parallel        omp_in_parallel_
#       define omp_init_lock          omp_init_lock_
#       define omp_destroy_lock       omp_destroy_lock_
#       define omp_set_lock           omp_set_lock_
#       define omp_unset_lock         omp_unset_lock_
#       define omp_test_lock          omp_test_lock_
#       define omp_init_nest_lock     omp_init_nest_lock_
#       define omp_destroy_nest_lock  omp_destroy_nest_lock_
#       define omp_set_nest_lock      omp_set_nest_lock_
#       define omp_unset_nest_lock    omp_unset_nest_lock_
#       define omp_test_nest_lock     omp_test_nest_lock_
#       define omp_get_wtime          omp_get_wtime_         
#       define omp_get_wtick          omp_get_wtick_         



#       define kmp_set_stacksize      kmpc_set_stacksize
#       define kmp_set_blocktime      kmpc_set_blocktime
#       define kmp_set_library        kmpc_set_library
#       define kmp_set_parallel_name  kmpc_set_parallel_name
#       define kmp_set_stats          kmpc_set_stats

#       define kmp_malloc             kmpc_malloc
#       define kmp_calloc             kmpc_calloc
#       define kmp_realloc            kmpc_realloc
#       define kmp_free               kmpc_free

#       define kmp_get_stacksize      kmp_get_stacksize_
#       define kmp_get_blocktime      kmp_get_blocktime_
#       define kmp_get_library        kmp_get_library_

#       define kmp_set_library_serial      kmp_set_library_serial_
#       define kmp_set_library_turnaround  kmp_set_library_turnaround_
#       define kmp_set_library_throughput  kmp_set_library_throughput_
#       define kmp_set_library_gang        kmp_set_library_gang_

#   elif defined( _CRAY) || defined(_UNICOS)

#       define omp_set_num_threads    OMPC_SET_NUM_THREADS 
#       define omp_set_dynamic        OMPC_SET_DYNAMIC
#       define omp_set_nested         OMPC_SET_NESTED
#       define omp_get_num_threads    OMP_GET_NUM_THREADS
#       define omp_get_dynamic        OMP_GET_DYNAMIC
#       define omp_get_nested         OMP_GET_NESTED
#       define omp_get_max_threads    OMP_GET_MAX_THREADS
#       define omp_get_thread_num     OMP_GET_THREAD_NUM
#       define omp_get_num_procs      OMP_GET_NUM_PROCS
#       define omp_in_parallel        OMP_IN_PARALLEL
#       define omp_init_lock          OMP_INIT_LOCK
#       define omp_destroy_lock       OMP_DESTROY_LOCK
#       define omp_set_lock           OMP_SET_LOCK
#       define omp_unset_lock         OMP_UNSET_LOCK
#       define omp_test_lock          OMP_TEST_LOCK
#       define omp_init_nest_lock     OMP_INIT_NEST_LOCK
#       define omp_destroy_nest_lock  OMP_DESTROY_NEST_LOCK
#       define omp_set_nest_lock      OMP_SET_NEST_LOCK
#       define omp_unset_nest_lock    OMP_UNSET_NEST_LOCK
#       define omp_test_nest_lock     OMP_TEST_NEST_LOCK
#       define omp_get_wtime          OMP_GET_WTIME         
#       define omp_get_wtick          OMP_GET_WTICK         



#       define kmp_set_stacksize      KMPC_SET_STACKSIZE
#       define kmp_set_blocktime      KMPC_SET_BLOCKTIME
#       define kmp_set_library        KMPC_SET_LIBRARY
#       define kmp_set_parallel_name  KMPC_SET_PARALLEL_NAME
#       define kmp_set_stats          KMPC_SET_STATS

#       define kmp_malloc             KMPC_MALLOC
#       define kmp_calloc             KMPC_CALLOC
#       define kmp_realloc            KMPC_REALLOC
#       define kmp_free               KMPC_FREE

#       define kmp_get_stacksize      KMP_GET_STACKSIZE
#       define kmp_get_blocktime      KMP_GET_BLOCKTIME
#       define kmp_get_library        KMP_GET_LIBRARY

#       define kmp_set_library_serial      KMP_SET_LIBRARY_SERIAL
#       define kmp_set_library_turnaround  KMP_SET_LIBRARY_TURNAROUND
#       define kmp_set_library_throughput  KMP_SET_LIBRARY_THROUGHPUT
#       define kmp_set_library_gang        KMP_SET_LIBRARY_GANG

#   endif



#   if defined(_WIN32) 
#       define __KAI_KMPC_CONVENTION __cdecl
#   else
#       define __KAI_KMPC_CONVENTION 
#   endif

    typedef int     omp_int_t;
    typedef double  omp_wtime_t;

    /* set API functions */
    extern void      __KAI_KMPC_CONVENTION     omp_set_num_threads (omp_int_t);
    extern void      __KAI_KMPC_CONVENTION     omp_set_dynamic     (omp_int_t);
    extern void      __KAI_KMPC_CONVENTION     omp_set_nested      (omp_int_t);

    /* query API functions */
    extern omp_int_t __KAI_KMPC_CONVENTION     omp_get_num_threads  (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     omp_get_dynamic      (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     omp_get_nested       (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     omp_get_max_threads  (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     omp_get_thread_num   (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     omp_get_num_procs    (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     omp_in_parallel      (void);


    /* lock API functions */
    typedef void *  omp_lock_t;

    extern void      __KAI_KMPC_CONVENTION     omp_init_lock    (omp_lock_t *);
    extern void      __KAI_KMPC_CONVENTION     omp_set_lock     (omp_lock_t *);
    extern void      __KAI_KMPC_CONVENTION     omp_unset_lock   (omp_lock_t *);
    extern void      __KAI_KMPC_CONVENTION     omp_destroy_lock (omp_lock_t *);

    extern omp_int_t __KAI_KMPC_CONVENTION     omp_test_lock    (omp_lock_t *);


    /* nested lock API functions */
    typedef void *  omp_nest_lock_t;

    extern void      __KAI_KMPC_CONVENTION     omp_init_nest_lock    (omp_nest_lock_t *);
    extern void      __KAI_KMPC_CONVENTION     omp_set_nest_lock     (omp_nest_lock_t *);
    extern void      __KAI_KMPC_CONVENTION     omp_unset_nest_lock   (omp_nest_lock_t *);
    extern void      __KAI_KMPC_CONVENTION     omp_destroy_nest_lock (omp_nest_lock_t *);

    extern omp_int_t __KAI_KMPC_CONVENTION     omp_test_nest_lock    (omp_nest_lock_t *);

    /* time API functions */
    extern omp_wtime_t __KAI_KMPC_CONVENTION   omp_get_wtime (void);
    extern omp_wtime_t __KAI_KMPC_CONVENTION   omp_get_wtick (void);


    /* kmp API functions */
    extern omp_int_t __KAI_KMPC_CONVENTION     kmp_get_stacksize          (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     kmp_get_blocktime          (void);
    extern omp_int_t __KAI_KMPC_CONVENTION     kmp_get_library            (void);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_stacksize          (omp_int_t);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_blocktime          (omp_int_t);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_library            (omp_int_t);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_parallel_name      (char*);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_stats              (omp_int_t);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_library_serial     (void);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_library_turnaround (void);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_library_throughput (void);
    extern void      __KAI_KMPC_CONVENTION     kmp_set_library_gang       (void);

#   include <stdlib.h>

    extern void *    __KAI_KMPC_CONVENTION     kmp_malloc  (size_t);
    extern void *    __KAI_KMPC_CONVENTION     kmp_calloc  (size_t, size_t);
    extern void *    __KAI_KMPC_CONVENTION     kmp_realloc (void *, size_t);
    extern void      __KAI_KMPC_CONVENTION     kmp_free    (void *);




#   undef __KAI_KMPC_CONVENTION 

#   ifdef __cplusplus
    }
#   endif

#endif /*__OMP_H*/

