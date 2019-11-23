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
	//���ñ���
	system(buf);  //system("title �����֤��ѯϵͳ")

	//���ô��ڿ��
	system("mode con cols=60 lines=20");

	//������ɫ
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
	//���û�ӭ��Ϣ
	if(isfirst)
	{
		SetCurPos((56 - strlen("-�� �� �� ��-")) / 2, 7);
		printf("%s", "-�� �� �� ��-");

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
	//����ϵͳ��Ϣ
	SetCurPos((56-strlen("[1] ���֤�����ز�ѯ"))/2, 7);
	printf("%s", "[1] ���֤�����ز�ѯ");
	SetCurPos((56-strlen("[2] ���֤�Ϸ�����֤"))/2, 9);
	printf("%s", "[2] ���֤�Ϸ�����֤");
	DrawRow(2, 14);
	
	SetCurPos((56-strlen("exit �˳�ϵͳ"))/2, 17);
	printf("%s", "exit �˳�ϵͳ");

	SetCurPos((56-strlen("������:>"))/2, 15);
	printf("%s", "������:>");
}


void SystemEnd()
{
	SetCurPos(0, 19);
	//printf("%s","�밴���������...");
	//system("pause");
}