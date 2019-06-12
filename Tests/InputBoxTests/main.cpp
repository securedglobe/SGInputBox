#define UNICODE
#define _UNICODE
#include <windows.h>
#include <tchar.h>
#include <cstdio>
#include <cstdlib>
#include "SG_InputBox.h"

static void Fail(const char* msg)
{
    std::printf("FAIL %s\n", msg);
    std::exit(1);
}

int main()
{
    if (ASPECT_RATIO_X != 2)
        Fail("ax");
    if (INPUTBOX_WIDTH != 1000)
        Fail("width");
    if (INPUTBOX_HEIGHT != 300)
        Fail("height");
    if (BUTTON_WIDTH != 240)
        Fail("btn");
    if (wcscmp(CLASSNAME, L"SG_Inputbox") != 0)
        Fail("class");
    std::printf("OK InputBoxTests\n");
    return 0;
}
