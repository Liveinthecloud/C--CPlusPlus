#include<stdio.h>
#include<windows.h>
int WINAPI WinMain(
                   HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow )
{
	MessageBox(0,"hello,world","prompt",SW_SHOWNORMAL);
	return 0;
}