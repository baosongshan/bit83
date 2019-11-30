#include<stdio.h>
#include<assert.h>

int fun(int a, int b)
{
	return a + b;
}

void main()
{
	printf("%p\n", fun);
	printf("%p\n", &fun);
}

/*
void test(int** ptr)
{
	printf("num = %d\n", **ptr);
}
int main()
{
	int n = 10;
	int*p = &n;

	int **pp = &p;

	test(pp);

	test(&p);

	//test(&&n);

	return 0;
}



/*
void Test1(int *p)
{}

void main()
{
	int a = 1;
	int ar[] = {1,2,3,4,5};
	Test1(&a);
	Test1(ar);
}

/*
void Test(int ar[], int n)
{
	for(int i=0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void main()
{
	int ar[] = {1,2,3,4,5,6,7};
	int n = sizeof(ar) / sizeof(int);
	Test(ar, n);
}

/*
void Test1(int *ar)
{
}
void Test2(int *ar[3])
{
}
void Test3(int (*ar)[3])
{}
void Test4(int **ar)
{}
void main()
{
	int br[3][3] = {1,2,3,4,5,6,7,8,9};
	Test4(br);
}

/*
//void Test(int ar[][3])
void Test(int (*ar)[3])
{}

void main()
{
	int ar[] = {1,2,3,4,5,6,7};
	int br[][3] = {1,2,3,4,5,6,7,8,9};
	Test(br);
}

/*
void Test(int ar[])
//void Test(int *ar)
{

}
//void Test1(int *ar[])
void Test1(int* *ar)
{}
void main()
{
	int ar[5] = {1,2,3,4,5};
	Test(ar);

	int a,b,c,d,e;
	a = b = c = d = e = 0;
	int* br[5] = {&a, &b, &c, &d, &e};
	Test1(br);
}

/*
#define ROW 5
#define COL 5

void PrintAr_1(int ar[ROW][COL], int row, int col)
{
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			printf("%-3d ", ar[i][j]);
		}
		printf("\n");
	}
}

void PrintAr_2(int (*ar)[COL], int row, int col)
{
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			printf("%-3d ", ar[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int ar[ROW][COL] = {
						1, 2, 3, 4, 5,
						6, 7, 8, 9, 10,
						11,12,13,14,15,
						16,17,18,19,20,
						21,22,23,24,25
						};
	PrintAr_1(ar, ROW, COL);
	PrintAr_1(ar, ROW, COL);
}

/*
void main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};

	printf("&ar[0] = %p : &ar[0]+1 = %p\n", &ar[0],&ar[0]+1);
	printf("ar = %p : ar+1 = %p\n", ar, ar+1);
	printf("&ar = %p : &ar+1 = %p\n", &ar, &ar+1);

	int *p1 = &ar[0];
	int *p2 = ar;
	//int *p3 = &ar;
	int (*p3)[10] = &ar;

}

/*
//右左法则

(*(void(*)())0)();

int (*func)(int *, int (*)(int *)); // ??????

int f1(int a)
{
	return 0;
}
int f2(int a)
{
	return 0;
}
int f3(int a)
{
	return 0;
}
int f4(int a)
{
	return 0;
}
int f5(int a)
{
	return 0;
}

void main()
{
	int(*a[5])(int)  ;
	a[0] = f1;
	a[1] = f2;
	a[2] = f3;
	a[3] = f4;
	a[4] = f5;
}

/*
int fun(int a, int b)
{
	return a + b;
}

int ar[10];

void main()
{
	int (*pfun)(int a, int b);

	int (*ar)[10];
}

/*
先热身：
用变量a给出下面的定义
a) 一个整型数  int a;
b) 一个指向整型数的指针 int *a;
c) 一个指向指针的指针，它指向的指针是指向一个整型数 int **a;
d) 一个有10个整型数的数组 int a[10];
e) 一个有10个指针的数组，该指针是指向一个整型数的. int *a[10];
f) 一个指向有10个整型数的数组的指针  int(*a)[10]
g) 一个指向函数的指针，该函数有一个整型参数并返回一个整型数
   int(*a)(int)
h) 一个有10个指针的数组，该指针指向一个函数，
   该函数有一个整型参数并返回一个整型数
   int(*a[10])(int)

   int(*a[10])(int)

   a[0]-->int f1(int);
   a[1]-->int f2(int)


/*
//指针函数
int* fun(int a, int b)
{
	int v = a + b;
	return &v;
}

void Swap(char a, char b)
{
	char tmp = a;
	a = b;
	b = tmp; 
}

void main()
{
	void(*pfun)(char, char);
	pfun = Swap;
}

/*
void main()
{
	int *res = fun(10, 20);
	printf("res = %d\n", *res);
}

/*
struct Test
{
	int a;
	int b;
	int c;
};

int fun(int a, int b) //函数名就是函数的入口地址
{
	return a + b;
}

void main()
{
	printf("%d\n",fun(10,20));

	int(*pfun)(int,int); //定义了一个函数指针

	pfun = &fun;
	printf("%d\n",(*pfun)(100,200));

	pfun = fun;
	printf("%d\n", pfun(1000,2000));
}

/*
void main()
{
	int a = 1;
	int *pi = &a; //整形指针

	char ch = 'A';
	char *pc = &ch;//字符指针

	struct Test t;
	struct Test *pt = &t; //结构体指针

	int ar[3] = {1,2,3};
	int(*par)[3] = &ar; //数组指针

}

/*
void main()
{
	int ar[3]; // 整形数组
	int a = 1, b = 2, c = 3;
	int *br[3]; //指针数组
	br[0] = &a;
	br[1] = &b;
	br[2] = &c;

	int(*par)[3] = &ar;   //数组指针
}

/*
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";

	char *str3 = "hello bit.";
	char *str4 = "hello bit.";

	//if (str1 == str2)
	if(strcmp(str1, str2)==0)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");

	return 0;
}


/*
void main()
{
	//char ar[] = "Hello";
	char *ar = "Hello";
	printf("ar = %s\n", ar);
	ar[0] = 'h';
	printf("ar = %s\n", ar);
}

/*
char* toupper(char *str)
{
	assert(str  != NULL);//
	//......
	char *tmp = str;
	while(*tmp != '\0')
	{
		if(*tmp>='a' && *tmp<='z')
			*tmp -= 32;
		tmp++;
	}
	return str;
}
void main()
{
	char *res;
	char str[100] = {0};
	while(1)
	{
		//scanf("%s", str); //hello bit
		gets(str);
		res = toupper(str);
		printf("res = %s\n",res); //HELLO
	}
}

/*
char* toupper(char *str)
{
	assert(str  != NULL);//
	//......
	int len = strlen(str);
	for(int i=0; i<len; ++i)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i] = str[i] - 32;
	}
	return str;
}
void main()
{
	char *res;
	char str[100] = {0};
	while(1)
	{
		//scanf("%s", str); //hello bit
		gets(str);
		res = toupper(str);
		printf("res = %s\n",res); //HELLO
	}
}

/*
void main()
{
	int a = 0;
	assert(a != 0); //断言  预言
	//............
	printf("OK.\n");
}

/*
char* toupper(char *str)
{
	assert(str ！= NULL);//
}
void main()
{
	char *res;
	char str[100] = {0};
	while(1)
	{
		scanf("%s", str); //hello
		res = toupper(str);
		printf("res = %s\n",res); //HELLO
	}
}

/*
void main()
{
	char ch = 'A';
	char *pc = &ch;

	printf("ch = %c\n",ch);
	printf("ch = %c\n",*pc);
	*pc = 'a';
	printf("ch = %c\n",ch);
	printf("ch = %c\n",*pc);
}

/*
void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	int *pend = ar+10;
	int *pstart = ar;
	printf("%d\n", pend - pstart);
}

/*
void main()
{
	char *pc = (char*)0x0012ff70;
	short *ps = (short*)0x0012ff70;
	int *pi = (int*)0x0012ff70;
	double *pd = (double*)0x0012ff70;

	printf("pc = %p : pc+1 = %p\n",pc, pc+1);
	printf("ps = %p : ps+1 = %p\n",ps, ps+1);
	printf("pi = %p : pi+1 = %p\n",pi, pi+1);
	printf("pd = %p : pd+1 = %p\n",pd, pd+1);
}

/*
void main()
{
	int a = 10;

	int *p = &a;  //指针变量

	printf("&a = %p\n", &a);
	printf("p = %p\n", p);
}
*/