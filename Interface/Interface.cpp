#include "utils/log.h"

extern "C"
void testInit() {
    ALOGI(TAG, "Interface init test");
    return;
}

extern "C"
void testProcess() {
    ALOGI(TAG, "Interface process test");
    return;
}

extern "C"
int testDeinit() {
    ALOGI(TAG, "Interface deinit test");
    return 1;
}