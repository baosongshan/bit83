#include"common.h"

const char *title = "�����֤��ѯϵͳ";

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
			//�����ز�ѯ
			SearchID();
		}
		else if(strcmp(cmd, "2") == 0)
		{
			//�Ϸ�����֤
			CheckID();
		}
		else if(strcmp(cmd, "exit") == 0)
			break;
		else
		{
			printf("Input Cmd Error��Please input again...\n");
		}
	}

	SystemEnd();
	return 0;
}

/*
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
{
	//���ñ���
	system("title ��ݲ�ѯ��֤ϵͳ");
	//���ô��ڿ��
	system("mode con cols=60 lines=20");
	//��ɫ����
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