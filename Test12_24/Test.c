#include<stdio.h>
#include<stdlib.h>
#include<vld.h>
#include<string.h>

void main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	                    //97
	//printf("%d\n", strlen(*arr)); //strlen(*arr)
	//printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1)); //  \0
	printf("%d\n", strlen(&arr[0] + 1));
	/**/
}

/*
//二分查找

void main()
{
	int ar[] = {32,4,5,6,57,4342626,2,241,41};
	int n = sizeof(ar) / sizeof(int);
}

/*
#define INT_SIZE 4

void main()
{
	int ar[] = {32,4,5,6,57,4342626,2,241,41};
	int n = sizeof(ar) / sizeof(int);
	
	int *br = (int*)malloc(sizeof(int) * n);
	//int *br = (int*)malloc(4*n);//1 4可读性不好 魔法数字
	                            //2 int 2 可移植性
	for(int i=0; i<n; ++i)
	{
		br[i] = ar[i];
	}
	free(br);
}


/*
#define SIZE 100

void main()
{
	int ar[10];
	int br[SIZE];

	const int n = 10; //C const 只读变量  C++ const 常量
	int cr[n];  //
}

/*
void Swap(int &left, int &right) //引用 --> 指针
{
	int tmp = left;
	left = right;
	right = tmp;
}

void main()
{
	int a = 100;
	int b = 200;
	printf("a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("a = %d, b = %d\n", a, b);
}

/*
void main()
{
	int x = 5;
	const int * const p = &x; //

	const int &q = x;
	//q++;

	int const *next = &x;
	//*next = 10;
	//next++;

	 const int * j = &x;
	// *j = 100;
	//j++;
	 (*j)++;
}
/*
void main()
{
	int a = 10;
	int &b = a;
}

/*
void Swap(int &left, int &right) //引用
{
	int tmp = left;
	left = right;
	right = tmp;
}

void main()
{
	int a = 100;
	int b = 200;
	printf("a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("a = %d, b = %d\n", a, b);
}

/*
void Swap(int *left, int *right)
{
	int tmp = *left;
	*left = *right;
	*right = tmp;
}

void main()
{
	int a = 100;
	int b = 200;
	printf("a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

/*
void main()
{
	int x = 5;
	const int * const p = &x;
	const int &q = x;
	int const *next = &x;
	const int *j = &x;
}

/*
int add(int *x, int *y, int *z){
    *x += *x;  // a += a; a = a + a;
    *y += *x;  // *y = *y + *x
    *z += *y;
    return *z;
 }

void main()
{
	int a = 1;
	int b = 1;
	//int a, b, c;
	//a = b = c = 1;
	//int res = add(&a, &b, &c);
	int res = add(&b, &a, &b);  //abc aaa aab abb aba
	printf("res = %d\n", res);
}

/*
void main()
{
	int a[8] = {0};
	printf("%p\n", &a[0]+1);
	printf("%p\n", a+1);
	printf("%p\n", &a[1]);

	printf("%p\n", &a[0]++);   //  = 
}

/*
//指针的本质 == 地址

void main()
{
	int a = 10;
	int b = 20;

	int *p = &a;

	printf("%p\n", &a);
	printf("%p\n", p);

	printf("%d\n", a);
	printf("%d\n", *p);
}

/*
void main()
{
	int a = 10;
	char ch = 'A';
	float f = 12.34f;
	double d = 12.34;

	printf("a = %d\n", a);
	printf("a address = %p\n", &a);

	//整形的指针变量 = 整形的指针 == 地址
	int *p = &a;
}
*/