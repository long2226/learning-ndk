/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jack_ndkbase_jni_HandleImage */

#ifndef _Included_com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage
#define _Included_com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage
#ifdef __cplusplus
extern "C" {
#endif
/*
* Class:     com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage
* Method:    test
* Signature: Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage_test
        (JNIEnv *, jclass);

/*
 * Class:     com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage
 * Method:    readBitmap
 * Signature: (Ljava/lang/Object;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage_readBitmap
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage
 * Method:    processByteArray
 * Signature: ([BII)Lcom/jack/learning/ndk/mkhandleimage/ProcessResult;
 */
JNIEXPORT jobject JNICALL Java_com_jack_learning_ndk_mkhandleimage_JNIMKHandleImage_processByteArray
  (JNIEnv *, jclass, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif