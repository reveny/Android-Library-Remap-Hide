//
// Created by reveny on 10/07/2023.
//

#include "../Include/Logger.h"
#include "RemapTools.h"

#include <pthread.h>
#include <unistd.h>
#include <dlfcn.h>

[[noreturn]] void *thread(void *) {
    while (1) {
        LOGI("Still running here");
        sleep(3);
    }
}

__attribute__((constructor))
void init() {
    LOGE("Loaded Test");

    pthread_t t;
    pthread_create(&t, nullptr, thread, nullptr);

    //Don't leave any traces, remap the loader lib as well
    RemapTools::RemapLibrary("libRevenyInjector.so");
}