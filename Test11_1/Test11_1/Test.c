#include<stdio.h> //
#include<stdbool.h>
#include<stdlib.h>

void main()
{
	int a = 1;
	//a = a + 1; //
	//a += 1;
	int v = a++;// int v = a; a = a+1;
	//int v = ++a;// a = a+1; int v = a;
	printf("a = %d\n", a);
	printf("v = %d\n", v);
	//int v = a + 1;
}

/*
void main()
{
	int dr[] = {1,2,3,4,5,6,7,8};
	int n = sizeof(dr) / sizeof(int);
	int i;
	for(i=0; i<n; ++i)
	{
		printf("%d ", dr[i]);
		//printf("")
	}
	printf("\n");
	
}

/*
void main()
{
	//数组
	int ar[10] = {1,2,3,4,5,6,7,8,9,10}; //初始化
	int br[10] = {1,2,3,4,5}; //初始化
	int cr[10];
	int dr[] = {1,2,3,4,5,6,7,8,9,4143,1,4,3,14,141,4};

	int i;
	for(i=0; i<5; ++i)
	{
		//printf("%d ", ar[i]);
		cr[i] = i+1;  //赋值
	}
	//printf("\n");
	
}


/*
void main()
{
	char *str = "Hello \"Bit\" World.";
	printf("str = %s\n", str);
}


void main()
{
	//char str[] = "Hello";
	//char ch = 'A';
	//char ch = '1';
	char ch = '\3';
	printf("%c\n", ch); //65
	printf("%d\n", ch);
}

/*
//宏定义
#define SIZE 100

//枚举
enum{ADD, SUM, MUL, DIV, MOD};

void main()
{
	const int a = 10;
	int size = SIZE;
	//a = 100;
	printf("a = %d\n", a);
	printf("size = %d\n", size);
	printf("ADD = %d\n", MUL);
}

/*
void main()
{
	int a = 10;

	{
		int b = 20;
		printf("a = %d\n", a);
		printf("b = %d\n", b);
	}

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

/*
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int Mod(int a, int b)
{
	return a % b;
}

int main()
{
	system("title 简易计算器");
	system("mode con cols=30 lines=10");
	system("color 4F");

	int select = 1;
	int a, b, result;
	while(select)
	{
		printf("*****************************\n");
		printf("* [1] Add       [2] Sub     *\n");
		printf("* [3] Mul       [4] Div     *\n");
		printf("* [5] Mod       [0] Quit    *\n");
		printf("*****************************\n");
		printf("请选择:>");
		scanf("%d", &select);
		if(select == 0)
			break;
		printf("input a and b:>");
		scanf("%d %d", &a, &b);
		switch(select)
		{
		case 1:
			result = Add(a , b);
			break;
		case 2:
			result = Sub(a , b);
			break;
		case 3:
			result = Mul(a , b);
			break;
		case 4:
			result = Div(a , b);
			break;
		case 5:
			result = Mod(a , b);
			break;
		}
		
		printf("result = %d\n", result);
		system("pause");
		system("cls"); //clear screen
	}
	return 0;
}


/*
int Sum(int a, int b)
{
	return a + b;
}

void main()
{
	int a, b;
	printf("input a and b:>");
	scanf("%d,%d", &a, &b); //1 2  1,2
	int sum = Sum(a, b);
	printf("sum = %d\n", sum);
}

/*
void main()
{
	int a, b;
	printf("input a and b:>");
	scanf("%d,%d", &a, &b); //1 2  1,2
	int sum = a + b;
	printf("sum = %d\n", sum);
}

/*
void main()
{
	int a = 10;
	printf("a = %d\n", a);
	printf("&a = 0x%p\n", &a);
}

/*
void main()
{
	int a, b;
	printf("input a and b:>");
	scanf("%d %d", );
	int sum = a + b;
	printf("sum = %d\n", sum);
}



void main()
{
	int a = 1;
	int b = 2;
	int sum = a + b;
	printf("sum = %d\n", sum);
}


int a = 10;  //全局
void main() //函数
{
	char ch = 'A';
	//int a = 0;
	printf("a = %d\n", a);
}

/*
void main()
{
	const int a = 10; //变量   常量
	a = 20;
}

/*
void main()
{
	char ch = 'A';      // 1
	char *str = "Hello";// n
	int a = 10;//
	double d = 12.34;
}

/*
int main()
{
	printf("%d\n", sizeof(bool)); //1
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));  //4
	printf("%d\n", sizeof(long)); //4
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(long long));//8
	return 0;
}

#if 0
int main()
{
	printf("Hello World.\n");
	printf("Hello Bit.\n");
	return 0;
}
#endif
*/
