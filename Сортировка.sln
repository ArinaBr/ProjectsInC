#include <iostream>
#include <windows.h>
using namespace std;

DWORD threadFunc(LPVOID param)
{
    long val = (long)param;
    Sleep((int)val * 1000);
    cout << val << " ";
    return 0;
}
int main()
{
    HANDLE handles[6];
    int arr[] = { 1, 3, 2, 11, 6, 4 };

    for (int i = 0; i < 6; i++)
    {
        handles[i] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&threadFunc,
            (LPVOID)arr[i], 0, NULL);
    }

    WaitForMultipleObjects(6, handles, 1, INFINITE);
}
