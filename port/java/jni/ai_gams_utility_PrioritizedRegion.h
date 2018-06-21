/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "gams/GamsExport.h"
/* Header for class ai_gams_utility_PrioritizedRegion */

#ifndef _Included_ai_gams_utility_PrioritizedRegion
#define _Included_ai_gams_utility_PrioritizedRegion
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_PrioritizedRegion
 * Signature: ()J
 */
GAMS_EXPORT jlong JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1PrioritizedRegion
  (JNIEnv *, jobject);

/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_toString
 * Signature: (J)Ljava/lang/String;
 */
GAMS_EXPORT jstring JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1toString
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_fromContainer
 * Signature: (JJLjava/lang/String;)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1fromContainer
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_toContainer
 * Signature: (JJLjava/lang/String;)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1toContainer
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_modify
 * Signature: (J)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1modify
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_freePrioritizedRegion
 * Signature: (J)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1freePrioritizedRegion
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_getPriority
 * Signature: (J)J
 */
GAMS_EXPORT jlong JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1getPriority
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_PrioritizedRegion
 * Method:    jni_setPriority
 * Signature: (JJ)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_PrioritizedRegion_jni_1setPriority
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif