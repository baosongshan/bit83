#include"common.h"

const char *title = "身份验证查询系统";

int main(int argc, char *argv[])
{
	char cmd[MAX_CMD_SIZE] = {0};
	while(1)
	{
		DrawFrame(title);
		DrawMenu(title);
		scanf("%s", cmd);
		if(strcmp(cmd,"1") == 0)
		{
			//归属地查询
			SearchID();
		}
		else if(strcmp(cmd, "2") == 0)
		{
			//合法性验证
			CheckID();
		}
		else if(strcmp(cmd, "exit") == 0)
			break;
		else
		{
			printf("Input Cmd Error！Please input again...\n");
		}
	}

	SystemEnd();
	return 0;
}

/*
void Test()
{
	//设置标题
	system("title 身份查询验证系统");
	//设置窗口宽高
	system("mode con cols=60 lines=20");
	//颜色设置
	system("color 74");
	//设置暂停
	system("pause");

}

void TestCur()
{
	//设置标题
	system("title 身份查询验证系统");
	//设置窗口宽高
	system("mode con cols=60 lines=20");
	//颜色设置

	int len = strlen("身份查询验证系统");
	//设置光标位置
	//HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	//COORD pos = {(60-len)/2, 5};
	//SetConsoleCursorPosition(handle, pos);
	SetCurPos(20, 15);

	printf("%s\n", "身份查询验证系统");
	HideCursor();
}

struct Pointer
{
	int x;
	int y;
};

void TestFrame()
{
	//设置标题
	system("title 身份查询验证系统");
	//设置窗口宽高
	system("mode con cols=60 lines=20");
	//颜色设置
	//DrawCol(30,0);
	DrawRow(0, 3);
}

int main()
{
	//Test();
	//TestCur();
	TestFrame();

	return 0;
}
*/