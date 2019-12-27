#include<stdio.h>
#include<time.h>



/*
/*
1��	�����������͵��������ֵ��
    1�ֽڣ�char��
    2�ֽڣ�short��
    4�ֽڣ�int,float����
    8�ֽڣ�double����
2�������ָ������ֵ����#pragma pack(value)ʱ��ָ������ֵvalue
3���Զ������͵��������ֵ���ṹ�����ĳ�Ա���������ֵ����ֵ
4���Զ������͵���Ч����ֵ���Զ������͵��������ֵ��ָ������ֵ�н�С��ֵ
*/

#pragma pack(4)

unsigned short *pucCharArray[10][10];
typedef union unRec
{
	unsigned long ullndex;  // long long 
	unsigned short usLevel[7];
	unsigned char ucPos;
}REC_S;
REC_S stMax, *pstMax;
void main()
{
	printf("%d\n",sizeof(pucCharArray)); //400 
	printf("%d\n",sizeof(stMax));        //16
	printf("%d\n",sizeof(pstMax));       //4
	printf("%d\n",sizeof(*pstMax));      //16
}


/*
typedef struct Test  // 4
{
	short a; //2 + 2
	struct tmp //����
	{
		int b; //4  //�Ƴ�Ա
		double c; //8
		char d; //1+3
	};
	int e; //4
}Test;

void main()
{
	printf("%d\n" ,sizeof(Test)); //6
	
	Test::tmp t; //
	t.b = 10;

}

/*
//λ�� λ��
//1 ���ܿ��ֽڴ洢
//2 ���ܿ����ʹ洢

struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;//4
	int _d : 30;//4
};
void main()
{
	printf("%d\n" ,sizeof(struct A)); //
}


/*
//5 -->
typedef struct Test
{
	char a : 1; //1
	int  b : 1; //4
	int  c : 20;
}Test;
void main()
{
	printf("%d\n" ,sizeof(Test)); //
}

/*
typedef struct Test
{
	char a : 1;  //����λ
	char b : 1;
	char c : 5;
	char d : 3;
}Test;
void main()
{
	printf("%d\n" ,sizeof(Test)); //6
}

/*
typedef struct Test  // 4
{
	double a;
	char b;
	int i;
}Test;
typedef struct Test1
{
	char c1; //1+7
	Test  t; //16
	double d;//8
}Test1;
void main()
{
	printf("%d\n" ,sizeof(Test1)); //6
}

/*
typedef struct Test  // 4
{
	short a; //2 + 2
	struct tmp
	{
		int b; //4
		double c; //8
		char d; //1+3
	};
	int e; //4
}Test;
void main()
{
	printf("%d\n" ,sizeof(Test)); //6
	Test t;
	t.
}

/*
#pragma pack(1)
//40  72  24
typedef struct Test  // 4
{
	short a; //2 + 2
	struct 
	{
		int b; //4
		double c; //8
		char d; //1+3
	};
	int e; //4
}Test;
void main()
{
	printf("%d\n" ,sizeof(Test)); //6
}

/*
#pragma pack(4)
typedef struct Test  // 4
{
	short a; //2 + 6
	struct 
	{
		int b; //4 + 4
		double c; //8
		char d; //1 + 7
	};
	int e; //4 + 4
}Test;
void main()
{
	printf("%d\n" ,sizeof(Test)); //6
}

/*
#pragma pack(2) //����ָ������ֵ 

typedef struct Test  // 4
{
	char a; //1
	char b; //1
	int c;  //4
	char d; //1+1
}Test;

void main()
{
	printf("%d\n" ,sizeof(Test)); //6
}

/*
#pragma pack(2) //����ָ������ֵ 

typedef struct Test  // 4
{
	char c1; //1 + 1
	int i;   //4
	char c2; //1 + 1
}Test;

void main()
{
	printf("%d\n" ,sizeof(Test)); //6
}

/*
typedef struct Test  // 4
{
	char c0; //1
	char c1; //1 + 2
	int i;   //4
	char c2; //1
}Test;

void main()
{
	printf("%d\n" ,sizeof(Test)); //6
}

/*
typedef struct Test  // 4
{
	char c1; //1 + 3
	int i;   //4
	char c2; //1 + 3
}Test;

void main()
{
	printf("%d\n" ,sizeof(Test)); //6
	Test t;
	t.c1 = 'A';
	t.i = 1;
	t.c2 = 'B';
}

/*
typedef struct Date
{
	int year;
	int month;
	int day;
}Date;

typedef struct Time
{
	int hour;
	int minute;
	int second;
}Time;

typedef struct DateTime
{
	Date dt;
	Time te;
}DateTime;

void main()
{
	DateTime de = {{2019,12,27},{20,03,30}};
}

/*
typedef struct DateTime
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
}DateTime;

//time ctime localtime

void main()
{
	DateTime dt;

	time_t te;
	time(&te);
	//printf("%s\n", ctime(&te));

	struct tm *ptm = localtime(&te);
	printf("%d��%d��%d�� %dʱ%d��%d��\n",ptm->tm_year+1900,
										 ptm->tm_mon+1,
										 ptm->tm_mday,
										 ptm->tm_hour,
										 ptm->tm_min,
										 ptm->tm_sec);

}

/*
typedef struct Node
{
	int data;
	struct Node *n; //4
}Node;

void main()
{
	Node node = {1}; //��ʼ��

	//��ֵ
	//node.data = 10;
	//node.n = NULL;
}

/*
//��
struct
{
	int a;
	char b;
	float c;
}x;
//��
struct
{
	int a;
	char b;
	float c;
}*p;

void main()
{
	p = &x;
}

/*
struct Student
{
	char name[9]; 
	int  id;
	int  age;
	char sex[3];
}S,  *p;

void main()
{
	p = &S;
	struct Student s;
	struct Student *ps;
	ps = &s;
}


/*
typedef struct Student
{
	char name[9]; 
	int  id;
	int  age;
	char sex[3];
}Student, *p;
void PrintStudent(struct Student *ps, int n)
{
	for(int i=0; i<n; ++i)
	{
		printf("%-8s %-8d %-6d %-4s\n", ps[i].name, 
									ps[i].id, 
									ps[i].age,
									ps[i].sex);
	}
}

void main()
{
	Student s[2] = {
					{"���",10001, 19, "��"},
					{"��ѧ��",20001, 18, "Ů"}
					};
	printf("����     ѧ��     ����   �Ա�\n");
	PrintStudent(s, 2);
}


/*
//�Զ�������  һ��������Ʒ
struct
{
	char name[9]; 
	int  id;
	int  age;
	char sex[3];
};

void main()
{

}

/*
//�Զ�������  һ��������Ʒ
struct
{
	char name[9]; 
	int  id;
	int  age;
	char sex[3];
}s0,s1,s2,s3;

void main()
{
	//s.name = "���";
	strcpy(s0.name, "���");

	struct Student s00, s11, s22, s33;
}


/*
//�Զ�������
struct Student
{
	char name[9]; 
	int  id;
	int  age;
	char sex[3];
}s0,s1,s2,s3;

void main()
{
	//s.name = "���";
	strcpy(s0.name, "���");

	struct Student s00, s11, s22, s33;
}


/*
void PrintStudent(struct Student *ps)
{
	printf("%-8s %-8d %-6d %-4s\n", ps->name, 
									ps->id, 
									ps->age,
									ps->sex);
}

void main()
{
	struct Student s1 = {"���",10001, 19, "��"};
	struct Student s2 = {"��ѧ��",20001, 18, "Ů"};

	printf("����     ѧ��     ����   �Ա�\n");
	PrintStudent(&s1);
	PrintStudent(&s2);
}

/*
void PrintStudent(struct Student s)
{
	printf("%-8s %-8d %-6d %-4s\n", s.name, s.id, s.age, s.sex);
}

void main()
{
	struct Student s1 = {"���",10001, 19, "��"};
	struct Student s2 = {"��ѧ��",20001, 18, "Ů"};

	printf("����     ѧ��     ����   �Ա�\n");
	PrintStudent(s1);
	PrintStudent(s2);

	s1 = s2;
}

/*
void main()
{
	char ar[] = "���"; //���� 2 ���ַ� ���
	printf("ar size = %d\n", sizeof(ar));
	int a = 10;
	struct Student s1; //�ṹ�����
}

/*
void main()
{
	char a;
	int i;
	double d;  //��ɢ

	int a1,a2,a3,a4....a10;
	int ar[10000]; //���� ���� 

	char name[10];
	int  age;
	float height;
	double weight;
}
*/