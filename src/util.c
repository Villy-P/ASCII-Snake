#include "util.h"

#include <windows.h>

int wasKeyDown(int key) {
    if (0x00000001 & GetAsyncKeyState(key))
        return 1;
    return 0;
}