NDK_TOOLCHAIN_VERSION=4.9

APP_PLATFORM    := android-15
APP_STL         := gnustl_static
APP_CFLAGS      := -Wno-format -Wno-multichar -fno-omit-frame-pointer -fms-extensions
APP_CFLAGS      += -Wno-pragmas -Werror=return-type
APP_CPPFLAGS    := $(APP_CFLAGS) -Wno-conversion-null -D__GXX_EXPERIMENTAL_CXX0X__ -fexceptions -frtti -std=c++11  -DBIB_NO_THROW -Dlboost_system -Dlboost_filesystem -DqDispatchQueueManager -DqCRCreativeSDK -DJUST_NNF -DGL_GLEXT_PROTOTYPES
APP_ABI         :=  armeabi-v7a