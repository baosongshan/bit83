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

void RecoverCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO  cursor_info = {100, 1};
	SetConsoleCursorInfo(handle, &cursor_info);
}

void DrawRow(int x, int y)
{
	for(int i=0; i<56; ++i)
	{
		SetCurPos(x+i,y);
		printf("=");
	}
}
void DrawCol(int x, int y)
{
	for(int i=0; i<20; ++i)
	{
		SetCurPos(x, y+i);
		printf("||");
	}
}

void DrawFrame(const char *title)
{
	char buf[MAX_BUFFER_SIZE] = {0};
	strcat(buf, "title ");
	strcat(buf, title);
	//设置标题
	system(buf);  //system("title 身份验证查询系统")

	//设置窗口宽高
	system("mode con cols=60 lines=20");

	//设置颜色
	system("color 0F");

	DrawCol(0, 0);
	DrawCol(58,0);
	DrawRow(2, 0);
	DrawRow(2, 2);
	DrawRow(2, 16);
	DrawRow(2, 18);
}

static bool isfirst = true;
void DrawMenu(const char *title)
{
	SetCurPos((56 - strlen(title)) / 2, 1);
	printf("%s", title);
	////////////////////////////////////////////////
	//设置欢迎信息
	if(isfirst)
	{
		SetCurPos((56 - strlen("-比 特 科 技-")) / 2, 7);
		printf("%s", "-比 特 科 技-");

		char welcome_info[] = "W e l C o m e  !";
		SetCurPos((56 - strlen(welcome_info)) / 2, 9);

		HideCursor();
		for (int i = 0; i < strlen(welcome_info); ++i)
		{
			printf("%c", welcome_info[i]);
			Sleep(300);
		}
		isfirst = false;
		Sleep(500);
	}
	
	RecoverCursor();
	//设置系统信息
	SetCurPos((56-strlen("[1] 身份证归属地查询"))/2, 7);
	printf("%s", "[1] 身份证归属地查询");
	SetCurPos((56-strlen("[2] 身份证合法性验证"))/2, 9);
	printf("%s", "[2] 身份证合法性验证");
	DrawRow(2, 14);
	
	SetCurPos((56-strlen("exit 退出系统"))/2, 17);
	printf("%s", "exit 退出系统");

	SetCurPos((56-strlen("请输入:>"))/2, 15);
	printf("%s", "请输入:>");
}


void SystemEnd()
{
	SetCurPos(0, 19);
	//printf("%s","请按任意键结束...");
	//system("pause");
}