#include <stdio.h>
#include <string>
#include <jni.h>
#include <dlfcn.h>
#include <unistd.h>

#include "Include/Logger.h"
#include "RemapTools.h"

extern "C" {
    JNIEXPORT void JNICALL
    Java_com_reveny_remap_hide_MainActivity_Load(JNIEnv *env, jobject thiz, jstring native_lib_dir) {
        LOGE("Load injector in pid %d", getpid());
        const char* dir = env->GetStringUTFChars(native_lib_dir, 0);
        std::string path = std::string(dir) + "/libTest.so";

        //Open the library containing the actual code
        void *open = dlopen(path.c_str(), RTLD_NOW);
        if (open == nullptr) {
            LOGE("Error opening libTest.so %s", dlerror());
        }

        RemapTools::RemapLibrary("libTest.so");
    }
}