#include"idsearch.h"

extern char *title;

bool Check(const char *id)
{
	//������֤��λ��
	int id_len = strlen(id);
	if(id_len != 18)
		return false;

	int wi[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char Y[11] = {'1','0','X', '9','8','7','6','5','4','3','2'};
	int sum = 0;
	for(int i=0; i<17; ++i)
	{
		sum += (id[i]-'0')*wi[i];
	}
	int mod = sum %11;

	if(Y[mod] == id[17])
		return true;
	return false;
}
void CheckID()
{
	DrawFrame();
	SetCurPos((56-strlen(title))/2, 1);
	printf("%s", title);
	SetCurPos((56-strlen("exit �˳�ϵͳ"))/2, 17);
	printf("%s", "exit �˳�ϵͳ");

	SetCurPos(10, 5);
	printf("%s","���������֤��:");

	char id[19] = {0};
	scanf("%s", id);

	bool flag = Check(id);
	if(flag)
	{
		//�Ϸ�
		DrawRow(2, 8);
		SetCurPos((56-strlen("�����֤:�� ��"))/2, 9);
		printf("%s", "�����֤:�� ��");

		SetCurPos((56-strlen("�밴���������..."))/2, 12);
		system("pause");
	}
	else
	{
		//�Ƿ�
		system("color 04");
		DrawRow(2, 8);
		SetCurPos((56-strlen("�����֤:�� ��"))/2, 9);
		printf("%s", "�����֤:�� ��");
		SetCurPos((56-strlen("�밴���������..."))/2, 12);
		system("pause");
		system("color 0F");
	}
}

//410103\098902291933
void Search(const char *id, char *address)
{
	FILE *fp = fopen("id.dat", "r");
	if(NULL == fp)
	{
		system("color 04");
		DrawRow(2, 8);
		SetCurPos((56-strlen("���ݿⲻ����!"))/2, 9);
		printf("%s", "���ݿⲻ����!");
		SetCurPos((56-strlen("�밴���������..."))/2, 12);
		system("pause");
		system("color 0F");
		return;
	}

	char addrinfo[7] = {0};
	strncpy(addrinfo, id, 6);

	char buffer[MAX_BUFFER_SIZE] = {0};
	while(!feof(fp))
	{
		fgets(buffer, MAX_BUFFER_SIZE, fp);
		//110100 ������ ��Ͻ�� (ֱϽ��)
		//110100
		char *res = strstr(buffer, addrinfo);
		if(res != NULL)
		{
			strcpy(address, res+6);
			break;
		}
		//buffer[0] = '\0';
		memset(buffer, 0, MAX_BUFFER_SIZE);
	}

	fclose(fp);
}
void SearchID()
{
	DrawFrame();
	SetCurPos((56-strlen(title))/2, 1);
	printf("%s", title);
	SetCurPos((56-strlen("exit �˳�ϵͳ"))/2, 17);
	printf("%s", "exit �˳�ϵͳ");

	SetCurPos(10, 5);
	printf("%s","���������֤��:");

	char id[19] = {0};
	scanf("%s", id);

	bool flag = Check(id);
	if(!flag)
	{
		//�Ƿ�
		system("color 04");
		DrawRow(2, 8);
		SetCurPos((56-strlen("�����֤:�� ��"))/2, 9);
		printf("%s", "�����֤:�� ��");
		SetCurPos((56-strlen("�밴���������..."))/2, 12);
		system("pause");
		system("color 0F");
		return;
	}

	char address[MAX_ADDRESS_SIZE] = {0};
	Search(id, address);
	if(address[0] == '\0')
		return;

	DrawRow(2, 8);
	SetCurPos((56-strlen("������Ϊ:"))/2, 9);
	printf("%s", "������Ϊ:");
	SetCurPos((56-strlen(address))/2, 10);
	printf("%s", address);

	SetCurPos((56-strlen("�밴���������..."))/2, 12);
	system("pause");
}