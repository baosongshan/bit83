#include"common.h"

void Test()
{
	//���ñ���
	system("title ��ݲ�ѯ��֤ϵͳ");
	//���ô��ڿ��
	system("mode con cols=60 lines=20");
	//��ɫ����
	system("color 74");
	//������ͣ
	system("pause");

}

void TestCur()
{
	//���ñ���
	system("title ��ݲ�ѯ��֤ϵͳ");
	//���ô��ڿ��
	system("mode con cols=60 lines=20");
	//��ɫ����

	int len = strlen("��ݲ�ѯ��֤ϵͳ");
	//���ù��λ��
	//HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	//COORD pos = {(60-len)/2, 5};
	//SetConsoleCursorPosition(handle, pos);
	SetCurPos(20, 15);

	printf("%s\n", "��ݲ�ѯ��֤ϵͳ");
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