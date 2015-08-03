LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := testJni

LOCAL_SRC_FILES := $(LOCAL_PATH)/../src/JniWrapper.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../src

LOCAL_LDLIBS := -lGLESv2 -llog

include $(BUILD_SHARED_LIBRARY)