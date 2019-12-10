#include<stdio.h>
#include<assert.h>

int Max(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a < b ? a : b;
}

int fun(int a, int b, int(*pfun)(int,int)) //回调函数
{
	return pfun(a, b);
}

void main()
{
	printf("result = %d\n", fun(10,20, Max));
}

/*
void main()
{
	char ch = 128;  //-128  ~ 127
	unsigned int i = 0;      // 0 ~ 2^32-1
	int a = 0;     //  -2147483648 ~ 2147483647
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
	assert(b != 0);
	return a / b;
}
int Mod(int a, int b)
{
	return a % b;
}

//转移表
int(*funtable[])(int, int) = {NULL, Add, Sub, Mul, Div, Mod};

void main()
{
	int select = 1;
	int op1, op2, result;
	while(select)
	{
		printf("*****************************\n");
		printf("* [1] Add      [2] Sub      *\n");
		printf("* [3] Mul      [4] Div      *\n");
		printf("* [5] Mod      [0] Quit     *\n");
		printf("*****************************\n");
		printf("请选择:>");
		scanf("%d", &select);

		if(select == 0)
			break;
		printf("input op1 and op2:>");
		scanf("%d %d",&op1, &op2);

		result = funtable[select](op1, op2);

		printf("%d", op1);
		if(select == 1)
			printf("+");
		else if(select == 2)
			printf("-");
		else if(select == 3)
			printf("*");
		else if(select == 4)
			printf("/");
		else if(select == 5)
		{
			char *str = "%";
			printf("%s", str);
		}

		printf("%d = %d\n", op2, result);  //10 % 4 = 2
		system("pause");
		system("cls");
	}
}

/*
void main()
{
	int select = 1;
	int op1, op2, result;
	while(select)
	{
		printf("*****************************\n");
		printf("* [1] Add      [2] Sub      *\n");
		printf("* [3] Mul      [4] Div      *\n");
		printf("* [5] Mod      [0] Quit     *\n");
		printf("*****************************\n");
		printf("请选择:>");
		scanf("%d", &select);

		if(select == 0)
			break;
		printf("input op1 and op2:>");
		scanf("%d %d",&op1, &op2);

		switch(select)
		{
		case 1:
			result = Add(op1, op2);
			break;
		case 2:
			result = Sub(op1, op2);
			break;
		case 3:
			result = Mul(op1, op2);
			break;
		case 4:
			result = Div(op1, op2);
			break;
		case 5:
			result = Mod(op1, op2);
			break;
		}
		//printf("result = %d\n", result);
		printf("%d", op1);
		if(select == 1)
			printf("+");
		else if(select == 2)
			printf("-");
		else if(select == 3)
			printf("*");
		else if(select == 4)
			printf("/");
		else if(select == 5)
			printf("%");

		printf("%d = %d\n", op2, result);
		system("pause");
		system("cls");
	}
}

/*
int fun(int x, int y)
{
	int v = x + y;
	return v;
}

void main()
{
	int a = 10;
	int b = 20;

	int result = fun(a, b);
	printf("result = %d\n", result);
}

/*
typedef int(*pAr)[5];
typedef pAr (*pFunc)(int*);

void main()
{
	//int(*(*func)(int *))[5];
	pAr (*func)(int*);
	//pFunc a;
	//pFunc b;
}

/*
typedef int(*pFun)(int*);

void main()
{
	//int (*func[5])(int *);
	pFun func[5];
	int  func[5];
}

/*
#define STR "jflajflajlfal"

#define ULONG unsigned long
typedef unsigned long ulong;

typedef int Ar[10]  ; //数组类型

typedef int(*pFun)(int,int);

void main()
{
	char *str = STR;  //char *str = "jflajflajlfal";
	unsigned long a;
	ULONG         b;
	ulong         c;

	//Ar[0] = 1;

	int i;
	Ar  ar;
	pFun pfun;
}

/*
typedef int(*pFun)(int*);

void main()
{
	int (*func[5])(int *);
}

/*
int (*func)(int *, int (*)(int *));
//
int (*func[5])(int *); //
//
int (*(*func)[5])(int *);
//
int (* (*func)  (int *)) [5];
//
int*(* func(int*) )[5]   //函数

int*  (* func(int*)) [5] ;

int *p = &a;


/*
void main()
{
	int (*pa)[3];

	(int (*)[3]) pb;

}

/*
int Sum(int a, int b)
{
	return a + b;
}

//         入参 形参       出参
void Sum1(int a, int b, int *v)
{
	*v = a + b;
}


int* Sum2(int a, int b, int *v)  //指针函数
{
	*v = a + b;
	return v;
}

void main()
{
	int result = Sum(10,20);
	printf("result = %d\n", result);

	int res = 0;
	Sum1(1,2, &res);
	printf("res = %d\n", res);

	int sum = 0;
	int *ptr = Sum2(100,200, &sum);
	printf("sum = %d\n",sum);
	printf("*ptr = %d\n",*ptr);
}

/*
int fun(int a, int b)
{
	int v = a + b;
	return v;
}

char fun1(char a, char b)
{
	return a > b ? a : b;
}

int* Sum(int a, int b, int *v)
{
	*v = a + b;
	return v;
}

struct Student
{
	int id;
	int age;
};



void main()
{
	int result = fun(10,20);
	printf("result = %d\n", result);

	int *p;
	int (*pa)[3];
	struct Student *ps;
	int(*pfun)(int, int); //定义了一个函数指针

	pfun = &fun;
	result = (*pfun)(100,200);
	printf("result = %d\n", result);

	pfun = fun;
	result = pfun(1,2);
	printf("result = %d\n", result);
}

/*
void main()
{
	int ar[3] = {1,2,3};
	printf("%p\n", &ar[0]);
	printf("%p\n", ar);
	printf("%p\n", &ar);

	int *p1 = &ar[0];
	int *p2 = ar;
	int(*pa)[3] = &ar;  //数组指针

	int a, b, c;
	a = 1, b = 2, c = 3;
	int* br[3] = {&a, &b, &c}; //指针数组
}
*/