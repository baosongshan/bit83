#include"common.h"

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
{}

int main()
{
	//Test();
	//TestCur();

	return 0;
}