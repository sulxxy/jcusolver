/*
 * JCusolver - Java bindings for CUSOLVER, the NVIDIA CUDA solver
 * library, to be used with JCuda
 *
 * Copyright (c) 2010-2015 Marco Hutter - http://www.jcuda.org
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jcuda_jcusolver_JCusolverDn */

#ifndef _Included_jcuda_jcusolver_JCusolverDn
#define _Included_jcuda_jcusolver_JCusolverDn
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCreateNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCreateNative
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDestroyNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDestroyNative
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSetStreamNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;Ljcuda/runtime/cudaStream_t;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSetStreamNative
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnGetStreamNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;Ljcuda/runtime/cudaStream_t;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnGetStreamNative
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSpotrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSpotrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDpotrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDpotrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCpotrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCpotrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZpotrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZpotrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSpotrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSpotrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDpotrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDpotrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCpotrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCpotrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZpotrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZpotrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSpotrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSpotrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDpotrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDpotrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCpotrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCpotrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZpotrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZpotrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgetrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgetrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgetrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgetrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgetrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgetrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgetrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgetrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgetrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgetrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgetrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgetrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgetrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgetrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgetrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgetrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSlaswpNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;IIILjcuda/Pointer;I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSlaswpNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jint, jint, jobject, jint);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDlaswpNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;IIILjcuda/Pointer;I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDlaswpNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jint, jint, jobject, jint);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnClaswpNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;IIILjcuda/Pointer;I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnClaswpNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jint, jint, jobject, jint);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZlaswpNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;IIILjcuda/Pointer;I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZlaswpNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jint, jint, jobject, jint);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgetrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgetrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgetrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgetrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgetrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgetrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgetrsNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgetrsNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgeqrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgeqrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgeqrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgeqrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgeqrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgeqrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgeqrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgeqrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSormqrNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIIIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSormqrNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDormqrNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIIIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDormqrNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCunmqrNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIIIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCunmqrNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZunmqrNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IIIIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZunmqrNative
  (JNIEnv *, jclass, jobject, jint, jint, jint, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgeqrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgeqrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgeqrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgeqrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgeqrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgeqrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgeqrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgeqrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgebrdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgebrdNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgebrdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgebrdNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgebrdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgebrdNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgebrdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgebrdNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jobject, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSsytrdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;CILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrdNative
  (JNIEnv *, jclass, jobject, jchar, jint, jobject, jint, jobject, jobject, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDsytrdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;CILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrdNative
  (JNIEnv *, jclass, jobject, jchar, jint, jobject, jint, jobject, jobject, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgebrd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgebrd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgebrd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgebrd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgebrd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgebrd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgebrd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgebrd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgesvd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgesvd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgesvd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgesvd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgesvd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgesvd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgesvd_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;II[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgesvd_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSgesvdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;CCIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgesvdNative
  (JNIEnv *, jclass, jobject, jchar, jchar, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject, jint, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDgesvdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;CCIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgesvdNative
  (JNIEnv *, jclass, jobject, jchar, jchar, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject, jint, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCgesvdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;CCIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgesvdNative
  (JNIEnv *, jclass, jobject, jchar, jchar, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject, jint, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZgesvdNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;CCIILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgesvdNative
  (JNIEnv *, jclass, jobject, jchar, jchar, jint, jint, jobject, jint, jobject, jobject, jint, jobject, jint, jobject, jint, jobject, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSsytrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDsytrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCsytrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCsytrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZsytrfNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;IILjcuda/Pointer;ILjcuda/Pointer;Ljcuda/Pointer;ILjcuda/Pointer;)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZsytrfNative
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jobject, jobject, jint, jobject);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnSsytrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnDsytrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnCsytrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCsytrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jintArray);

/*
 * Class:     jcuda_jcusolver_JCusolverDn
 * Method:    cusolverDnZsytrf_bufferSizeNative
 * Signature: (Ljcuda/jcusolver/cusolverDnHandle;ILjcuda/Pointer;I[I)I
 */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZsytrf_1bufferSizeNative
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jintArray);

#ifdef __cplusplus
}
#endif
#endif
