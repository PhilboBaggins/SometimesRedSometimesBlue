#include <time.h>
#include <stdlib.h>
#include <windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

static WNDCLASSEX wndclass;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow)
{
    static char appName[] = "SomtimesRedSometimesBlue";
    HWND hwnd;
    MSG msg;

    wndclass.cbSize         = sizeof(wndclass);
    wndclass.style          = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc    = WndProc;
    wndclass.cbClsExtra     = 0;
    wndclass.cbWndExtra     = 0;
    wndclass.hInstance      = hInstance;
    wndclass.hIcon          = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hIconSm        = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor        = LoadCursor(NULL, IDC_ARROW);
    wndclass.lpszClassName  = appName;
    wndclass.lpszMenuName   = NULL;

    // Red or blue
    srand((unsigned int)time(NULL));
    if ((rand() % 2) == 0)
    {
        wndclass.hbrBackground  = (HBRUSH)CreateSolidBrush(RGB(255, 0, 0));
    }
    else
    {
        wndclass.hbrBackground  = (HBRUSH)CreateSolidBrush(RGB(0, 0, 255));
    }

    RegisterClassEx(&wndclass);

    hwnd = CreateWindow(appName,
                        "Sometimes red sometimes blue",
                        WS_OVERLAPPEDWINDOW,
                        CW_USEDEFAULT, CW_USEDEFAULT,
                        CW_USEDEFAULT, CW_USEDEFAULT,
                        NULL, NULL, hInstance, NULL);

    ShowWindow(hwnd, iCmdShow);
    UpdateWindow(hwnd);

    // Main loop
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;
    HDC hdc;
    RECT r;

    switch (iMsg)
    {
        case WM_PAINT:
            hdc = BeginPaint(hwnd, &ps);
            GetClientRect(hwnd, &r);
            FillRect(hdc, &r, wndclass.hbrBackground);
            EndPaint(hwnd, &ps);
            return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProc(hwnd, iMsg, wParam, lParam);
}
