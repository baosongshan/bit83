#include<stdio.h>

int fun()
{
	static int count = 1;
	return ++count;
}

int main()
{
	int answer;
	        //2    -  3    *  4
	        //  4-     2     * 3
	       //    4 -     3  *   2
	answer = fun() - fun() * fun();

	printf( "%d\n", answer);//输出多少？
	return 0;
}


/*
void main()
{
	int i = 0;

	int v = (i++)+(i++)+(++i);

	printf("v = %d\n", v);
}

/*
void main()
{
	int i = 0;
	printf("%d %d %d %d\n", i++, ++i, i++, ++i);
	     // 3   4  1  4
	printf("i = %d\n", i);
}

/*
//i++
int increment_1(int *v)
{
	int tmp = *v;
	*v = *v + 1;
	return tmp;
}

//++i
int increment_2(int *v)
{
	*v = *v + 1;
	return *v;
}

void main()
{
	int i = 0;
	//int v = increment_1(&i); //v = i++;
	//int v = i++;

	int v = increment_2(&i);
	//int v = ++i;
	printf("v = %d\n", v);
	printf("i = %d\n", i);
}

/*
void main()
{
	int i = 0;
	printf("%d %d %d %d\n", i++, ++i, i++, ++i);
	     // 3   4  1  4
	printf("i = %d\n", i);
}

/*
void main()
{
	int val = 12;
	double d = 23.45;

	int res = val + d;

	printf("%d\n", sizeof(val + d));
}

/*
void main()
{
	float f = 12.34f;
	printf("%f\n", f);

	int val = (int)f;  //隐式转换   //显示转换
	printf("val = %d\n", val);
}

/*
void main()
{
	char ch = 1;
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(+ch));
	printf("%d\n", sizeof(-ch));
	printf("%d\n", sizeof(!ch));
}

/*
int main()
{
	char a = 0xb6;    //182
	short b = 0xb600;
	int c = 0xb6000000;

	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	return 0;
}


/*
void main()
{
	char val; //-128 ~ 127 
	char a = 100;
	char b = 90;
	val = a + b;  //100 + 90
	printf("val = %d\n", val);
}

/*
//1+2+3+......+n
int Sum(int n)
{
	int sum = 0;
	for(int i=1; i<=n; ++i)
	{
		sum += i;
	}
	return sum;
}

//Test 100
void main(int argc, char *argv[])
{
	int sum = Sum(atoi(argv[1]));
	printf("sum = %d\n", sum);
}


/*
//命令行参数
//argc : argument count
//argv : argument value
void main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	for(int i=0; i<argc; ++i)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
}

/*
//1+2+3+......+n
int Sum(int n)
{
	int sum = 0;
	for(int i=1; i<=n; ++i)
	{
		sum += i;
	}
	return sum;
}

//Test 100

void main(int argc, char *argv[])
{
	int n;
	printf("input n:>");
	scanf("%d", &n);
	int sum = Sum(n);
	printf("sum = %d\n", sum);
}

/*
int fun(int a, int b)
{
	return a + b;
}

//命令行参数
//argc : argument count
//argv : argument value
void main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	for(int i=0; i<argc; ++i)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
}

/*
void main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* ar[3];

	ar[0] = &a;
	ar[1] = &b;
	ar[2] = &c;
}


void main()
{
	int a = 10;
	int *pa = &a;
	int **ppa = &pa;

	int b = 28;
	*ppa = &b;

}

/*
void main()
{
	int a = 10;
	int *p = &a;  //一级指针
	int **s = &p;
	printf("a addr = %p\n", &a);
	printf("p value = %p\n", p);
	printf("p addr = %p\n", &p);
	printf("s value = %p\n", s);
	printf("s addr = %p\n", &s);
}

/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	int *p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
	}
	return 0;
}

/*
#define N_VALUES 5
void main()
{
	float values[N_VALUES];
	float *vp;

	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
}

/*
void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	int *start = ar;
	int *end = ar + 10;

	printf("%d\n", end-start);
}

/*
int my_strlen(char *str)
{
	char *start, *end;
	start = end = str;
	while(*end != '\0')
		end++;
	return end - start;
}
void main()
{
	char *str = "Hello Bit";
	int len = my_strlen(str);
	printf("len = %d\n", len);
}

/*
#define N_VALUES 5
void main()
{
	float values[N_VALUES];

	float *vp;
	//指针+-整数；指针的关系运算
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}
}

/*
void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(ar) / sizeof(int);  //

	for(int i=0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");

	for(int i=0; i<n; ++i)
	{
		printf("%d ", *(ar+i));
	}
	printf("\n");

	int *p = ar;
	for(int i=0; i<n; ++i)
	{
		printf("%d ",  *(p+i));
	}
	printf("\n");

	for(int i=0; i<n; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	int *q = ar + 3;
	printf("%d\n", *q);
}

/*
void fun(int ar[], int n)
{
	printf("in fun ar size = %d\n", sizeof(ar));
	
}

void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(ar)/sizeof(int); //1
	printf("ar size = %d\n", sizeof(ar));
	fun(ar, n);
}

/*
void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	printf("%p\n", &ar[0]);
	printf("%p\n", ar);
	printf("%p\n", &ar);

	//数组名是首元素的地址   xxxxxxxxxxxx
	printf("%d\n", sizeof(ar));

	printf("ar = %p, ar+1 = %p\n", &ar[0], &ar[0]+1);
	printf("ar = %p, ar+1 = %p\n", ar, ar+1);
	printf("ar = %p, ar+1 = %p\n", &ar, &ar+1);
}


void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(ar) / sizeof(int);  //

	for(int i=0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");

	for(int i=0; i<n; ++i)
	{
		printf("%d ", *(ar+i));
	}
	printf("\n");

	int *p = ar;
	for(int i=0; i<n; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	for(int i=0; i<n; ++i)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");

}

/*
#define N_VALUES 5
void main()
{
	float values[N_VALUES];  //float
	float *vp;
	//指针+-整数；指针的关系运算
	for(vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}
}
/*
int main()
{
	int n = 0x11223344;
	char *pc = (char *)&n;
	int *pi = &n;
	*pc = 0; //重点在调试的过程中观察内存的变化。
	*pi = 0; //重点在调试的过程中观察内存的变化。
	return 0;
}

/*
int main()
{
	int n = 10;
	char *pc = (char*)&n;
	int *pi = &n;
	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);
	return 0;
}

/*
void main()
{
	char *pc = (char*)0x00120010;
	short *ps = (short*)0x00120010;
	int *pi = (int*)0x00120010;
	double *pd = (double*)0x00120010;

	printf("pc=0x%p, pc+1=0x%p\n", pc, pc+1);
	printf("ps=0x%p, ps+1=0x%p\n", ps, ps+1);
	printf("pi=0x%p, pi+1=0x%p\n", pi, pi+1);
	printf("pd=0x%p, pd+1=0x%p\n", pd, pd+1);//8
}

/*
void main()
{
	int a = 123456789;
	unsigned char *pc = (unsigned char*)&a;
	unsigned short *ps = (unsigned short*)&a;
	int *pi = &a;

	printf("*pc = %u\n", *pc);
	printf("*ps = %u\n", *ps);
	printf("*pi = %u\n", *pi);
}


void main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
}

void Swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void main()
{
	int a = 10; 
	int b = 20;

	printf("a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

/*
void Swap(int a, int b)
{
	int tmp = a; 
	a = b;
	b = tmp;
}
void main()
{
	int a = 10; 
	int b = 20;

	printf("a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("a = %d, b = %d\n", a, b);
}

/*
void main()
{
	int a = 10;
	int *p = &a;
	int *q = p;
}

/*
void main()
{
	int a = 10;
	a = 20;
	int b = 100;

	int *p;
	p = &a;
	p = &b;

	int *pi = &a;

	*pi;
}


void main()
{
	int a = 10;
	int b = 20;

	//const int *p = &a;
	int *  const p = &a;

	*p = 200;
	//p = &b;
}

/*
void main()
{
	int a = 10; //只读变量  常量
	int b = 20;
	const int *const p = &a;

	//*p  = 200;
	//p = &b;

	//printf("a = %d\n", a);
	printf("*p = %d\n", *p);
}



void main()
{
	int a = 10; //只读变量  常量
	int b = 20;
	int * const p = &a;

	//a = 100;
	*p  = 200;
	p = &b;

	printf("a = %d\n", a);
}
/*
void main()
{
	const int a = 10; //只读变量  常量
	const int *p = &a;

	//a = 100;
	*p  = 200;

	printf("a = %d\n", a);
}


void main()
{
	int a = 10; //只读变量  常量
	const int *p = &a;

	a = 100;
	//*p  = 200;

	printf("a = %d\n", a);
}


/*void main()
{
	int a = 10;
	int b = 20;

	int *p = &a;
	p = &b;
}


void main()
{
	int a = 123456789;
	int *p = &a;
	char *pc = &a;

	printf("%d\n", *p);
	printf("%d\n", *pc);
}


void main()
{
	int a = 10;
	char ch = 'A';
	//指针变量
	int *p = &a;
	p = &ch;


}
*/