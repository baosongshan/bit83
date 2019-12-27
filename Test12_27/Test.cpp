#include<stdio.h>
#include<time.h>



/*
/*
1、	基本数据类型的自身对齐值：
    1字节：char型
    2字节：short型
    4字节：int,float类型
    8字节：double类型
2、程序的指定对齐值：即#pragma pack(value)时的指定对齐值value
3、自定义类型的自身对齐值：结构体或类的成员中自身对齐值最大的值
4、自定义类型的有效对齐值：自定义类型的自身对齐值和指定对齐值中较小的值
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
	struct tmp //类型
	{
		int b; //4  //哑成员
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
//位段 位域
//1 不能跨字节存储
//2 不能跨类型存储

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
	char a : 1;  //比特位
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
#pragma pack(2) //程序指定对齐值 

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
#pragma pack(2) //程序指定对齐值 

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
	printf("%d年%d月%d日 %d时%d分%d秒\n",ptm->tm_year+1900,
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
	Node node = {1}; //初始化

	//赋值
	//node.data = 10;
	//node.n = NULL;
}

/*
//人
struct
{
	int a;
	char b;
	float c;
}x;
//人
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
					{"李浩",10001, 19, "男"},
					{"当学如",20001, 18, "女"}
					};
	printf("姓名     学号     年龄   性别\n");
	PrintStudent(s, 2);
}


/*
//自定义类型  一次性消耗品
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
//自定义类型  一次性消耗品
struct
{
	char name[9]; 
	int  id;
	int  age;
	char sex[3];
}s0,s1,s2,s3;

void main()
{
	//s.name = "李浩";
	strcpy(s0.name, "李浩");

	struct Student s00, s11, s22, s33;
}


/*
//自定义类型
struct Student
{
	char name[9]; 
	int  id;
	int  age;
	char sex[3];
}s0,s1,s2,s3;

void main()
{
	//s.name = "李浩";
	strcpy(s0.name, "李浩");

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
	struct Student s1 = {"李浩",10001, 19, "男"};
	struct Student s2 = {"当学如",20001, 18, "女"};

	printf("姓名     学号     年龄   性别\n");
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
	struct Student s1 = {"李浩",10001, 19, "男"};
	struct Student s2 = {"当学如",20001, 18, "女"};

	printf("姓名     学号     年龄   性别\n");
	PrintStudent(s1);
	PrintStudent(s2);

	s1 = s2;
}

/*
void main()
{
	char ar[] = "你好"; //汉字 2 个字符 组成
	printf("ar size = %d\n", sizeof(ar));
	int a = 10;
	struct Student s1; //结构体变量
}

/*
void main()
{
	char a;
	int i;
	double d;  //离散

	int a1,a2,a3,a4....a10;
	int ar[10000]; //数组 集合 

	char name[10];
	int  age;
	float height;
	double weight;
}
*/