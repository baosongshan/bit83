#include<stdio.h>
#include<stdbool.h>

void main()
{
	int ar[10];
	FILE *fp = fopen("Test.txt", "r");
	if(NULL == fp)
	{
		printf("Open File Eror.\n");
		return;
	}

	for(int i=0; i<10; ++i)
	{
		//scanf("%d", &ar[i]);
		fscanf(fp, "%d", &ar[i]);
	}

	fclose(fp);
}

/*
void main()
{
	int ar[] = {12,23,34,45,56,67,78,89,90,100};
	int n = sizeof(ar) / sizeof(int);

	FILE *fp;
	fp = fopen("Test.txt", "w"); //ascii  文本

	for(int i=0; i<n; ++i)
	{
		//printf("%d ", ar[i]);
		fprintf(fp, "%d ", ar[i]);
	}

	fclose(fp);
}

/*
//常量
typedef enum Test
{
	ADD = -99, //0
	SUB, //1
	MUL = 100,
	DIV = 200,
	MOD
}Test;

void main()
{
	//printf("Test size = %d\n", sizeof(Test));//
	Test t;
	t = DIV;
	printf("ADD = %d\n", ADD);
	printf("SUB = %d\n", SUB);
	printf("MUL = %d\n", MUL);
	printf("DIV = %d\n", DIV);
	printf("MOD = %d\n", MOD);
}


/*
//自身类型对齐值
//自定义类型对齐值
//程序指定对齐值
//程序的有效对齐值

typedef union Test
{
	int a;
	double b;
	char c;
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
	Test ut;
	ut.a = 100;
	ut.b = 12.34;

	ut.c = 'A';  //
}

/*
void main()
{
	printf("Test size = %d\n", sizeof(Test));//
	Test ut;
	ut.c = 'A';
	//printf("b = %f\n", ut.b);
	printf("c = %c\n", ut.c);
	printf("a = %d\n", ut.a);
}

/*
typedef struct Test
{
	char a : 3;  //位域  位段
	char b : 4;
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
}

/*
typedef union Test
{
	short a; //2
	struct
	{
		int b;    //4 + 4
		double c; //8
		char d;   //1 + 7
	};
	long e;  //4 
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
}


#pragma pack(4)
typedef struct Test
{
	short a; //2 + 2
	struct
	{
		int b;    //4
		double c; //8
		char d;   //1 + 3
	};
	long e;  //4 
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
}

/*
typedef struct Test
{
	short a; //2 + 6
	struct
	{
		int b;    //4 + 4
		double c; //8
		char d;   //1 + 7
	};
	long e;  //4 + 4
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
}

/*
#pragma pack(1)
typedef struct Test
{
	char a;   //1
	double b; //8 
	int c;    //4 
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
}


/*
#pragma pack(8)
typedef struct Test
{
	char a;   //1 + 3
	int b; //4 
	int c;    //4 
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
}


/*
typedef struct Test
{
	char a;   //1 + 3
	int c;    //4 
	double b; //8
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
}

/*
typedef struct Test
{
	char a;   //1 + 7
	double b; //8
	int c;    //4 + 4
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));//
	Test t;
	t.a = 'A';
	t.b = 12.34;
	t.c = 100;
}

/*
//union  enum
//共用体
typedef union Test
{
	char a;  //1
	struct Tmp
	{
		int x;
		short y;
		double z;
	};
	double b;  //1
	int c;  //1
}Test;
void main()
{
	printf("Test size = %d\n", sizeof(Test));
}
/*
typedef struct Test
{
	char a;  //1
	char b;  //1
	char c;  //1
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));
}

/*
struct Test
{
	char c;
	double b;
	int e;
};
void main()
{
	struct Test t;
	t.c = 'A';
	t.b = 12.34;
	t.e = 100;

	struct Test * pt = &t;
	pt->c = 'B';
	pt->b = 23.45;
	pt->e = 300;

	(*pt).c = 'C';   //. *  pt.
	(*pt).b = 45.67;
	(*pt).e = 400;
}

/*
struct Date
{
	int year;
	int month;
	int day;
};
struct Time
{
	int hour;
	int minute;
	int second;
};
struct DateTime
{
	struct Date m_date;
	struct Time m_time;
};
void main()
{
	struct DateTime dt;
	dt.m_date.year = 2019;
}

/*
struct DateTime
{
	struct Date
	{
		int year;
		int month;
		int day;
	};
	struct Time
	{
		int hour;
		int minute;
		int second;
	};
};

void main()
{
	struct DateTime dt = {2019, 11, 19, 19, 47, 30};
	printf("%d\n",dt.year);
}

/*
struct Point
{
	int x;
	int y;
};

struct Line
{
	struct Point p1;
	struct Point p2;
};

void main()
{
}




/*
struct Student
{
	char name[10];
	int age;
	char sex[3];
	float weight;
	float height;
};
void PrintStu(struct Student *pstu)
{
	printf("===================\n");
	printf("name = %s\n", pstu->name);
	printf("age = %d\n", pstu->age);
	printf("sex = %s\n", pstu->sex);
	printf("weight = %f\n", pstu->weight);
	printf("height = %f\n", pstu->height);
	printf("===================\n");
}

void main()
{
	struct Student s = {"放假啦", 20, "男", 50, 170};
	struct Student s1 = {"过来了", 30, "女", 60, 150};

	struct Student s2;
	strcpy(s2.name,"张三");
	s2.age = 10;
	strcpy(s2.sex, "男");
	s2.weight = 50;
	s2.height = 180;

	PrintStu(&s);
	PrintStu(&s1);
	PrintStu(&s2);
}

/*
struct Test
{
	char c;
	double b;
	int e;
};

void main()
{
	struct Test t;
	t.c = 'A';
	t.b = 12.34;
	t.e = 100;

	struct Test * pt = &t;
	printf("t.c = %c\n", pt->c);
	printf("t.b = %f\n", pt->b);
	printf("t.e = %d\n", pt->e);

}

/*
typedef struct Node
{
	int data;
	struct Node *next; //4
}Node, *PNode;

void main()
{
	Node node;
	//typedef struct Node* PNode;
	struct Node* pn;
	PNode pn1;
}

/*
#define SIZE 10

#define ULONG unsigned long
typedef unsigned long ulong;   //

void main()
{
	int sz = SIZE;   //int sz = 10;
	unsigned long a;
	ULONG b;
	ulong c;
}

/*
typedef struct Node
{
	int data;
	struct Node *next; //4
}Node

void main()
{
	Node node;
	//typedef struct Node* PNode;
	struct Node *pn;
	PNode pn1;
}

/*
typedef struct Node
{
	int data;
	struct Node *next; //4
}Node;

void main()
{
	Node node;
}

/*
struct
{
	char a;
	double b;
	int c;
}T, A, C, D, X, Y, Z;

void main()
{

}


typedef struct Test
{
	char a;
	double b;
	int c;
}T;

void main()
{
	struct Test t;
	//T.a = 'A';
	//T.b = 2.34;
	//T.c = 100;
	T  tmp;
}


typedef struct Test
{
	char a;
	double b;
	int c;
}Test;

void main()
{
	struct Test t;
	Test t1;
}


/*
//自定义类型 
struct Student
{
	char name[10];
	int age;
	char sex[3];
	float weight;
	float height;
};

void PrintStu(struct Student stu)
{
	printf("===================\n");
	printf("name = %s\n", stu.name);
	printf("age = %d\n", stu.age);
	printf("sex = %s\n", stu.sex);
	printf("weight = %f\n", stu.weight);
	printf("height = %f\n", stu.height);
	printf("===================\n");
}

void main()
{
	struct Student s = {"放假啦", 20, "男", 50, 170};
	struct Student s1 = {"过来了", 30, "女", 60, 150};

	struct Student s2;
	strcpy(s2.name,"张三");
	s2.age = 10;
	strcpy(s2.sex, "男");
	s2.weight = 50;
	s2.height = 180;

	PrintStu(s);
	PrintStu(s1);
	PrintStu(s2);
}

/*
void main()
{
	bool b;
	char c;
	short s;
	int  i;
	long l;
	float f;
	double d;

	int ar[10];   //

	struct Student st;
}
*/