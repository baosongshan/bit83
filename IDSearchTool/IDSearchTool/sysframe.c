#include"sysframe.h"

void SetCurPos(int x, int y)
{
	COORD pos = {x, y};
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, pos);
}

void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO  cursor_info = {1, 0};
	SetConsoleCursorInfo(handle, &cursor_info);
}