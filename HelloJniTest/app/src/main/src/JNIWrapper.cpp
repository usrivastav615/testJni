//
// Created by Amol Jindal on 03/08/15.
//

#include "JNIWrapper.h"
#include<jni.h>

#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,"CPP FUNCTION",__VA_ARGS__)

void RegisterNativeMethods(JavaVM *vm, JNIEnv *env);

jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    JNIEnv* env;

    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK)
    {
        return -1;
    }

    RegisterNativeMethods(vm, env);

    return JNI_VERSION_1_6;
}


JNIEXPORT jstring JNICALL getTextString(JNIEnv *env, jobject obj)
{
    char msg[60] = "Hello Test Jni ";
    jstring result;
    result = env->NewStringUTF(msg);
    return result;
}


void RegisterNativeMethods(JavaVM *vm, JNIEnv *env)
{
    JNINativeMethod nativeMethods[] =
            {
                    {"getText","()Ljava/lang/String;", (void *)getTextString}
            };

    jclass jniWrapperClass = env->FindClass("com/example/ajindal/hellojnitest/MainActivity");
    env->RegisterNatives(jniWrapperClass, nativeMethods, sizeof(nativeMethods)/sizeof(nativeMethods[0]));
}

