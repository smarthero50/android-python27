LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := com_googlecode_android_scripting_Exec
LOCAL_SRC_FILES := com_googlecode_android_scripting_Exec.cpp
LOCAL_C_INCLUDES += $(NDK_ROOT)/sources/cpufeatures
LOCAL_STATIC_LIBRARIES += cpufeatures
TARGET_ARCH_ABI := armeabi  armeabi-v7a
APP_OPTIM := 'release'
LOCAL_LDLIBS    := -llog

include $(BUILD_SHARED_LIBRARY)
include $(NDK_ROOT)/sources/cpufeatures/Android.mk
