
// ""   <>  ????????
#include<stdio.h>
//#include"Max.h"
//#include"Min.h"

#define ADD(a, b) ((a)+(b))
#define MUL(a, b) ((a)*(b))

void main()
{
	//int result = ADD(1,2); //int result = 1+2;
	//int result = MUL(1+3, 2+4); //1+3 * 2+4
	int result = ADD(2,3) * ADD(3,4); //(2)+(3) * (3)+(4);
	printf("result = %d\n", result);
}

/*
extern int a;
extern int Max(int a, int b);

void main()
{
	printf("a = %d\n", a);
	Max(10,20);
}

/*
int fun(int x)
{
	static int i = 0;  //记忆性  //1
	i += x;
	return i;
}

void main()
{
	printf("%d\n", fun(5)); //5 
	printf("%d\n", fun(5)); //10
	printf("%d\n", fun(5));
}

/*
int Fib(int n)
{
	if(n==1 || n==2)
		return 1;
	else
		return Fib(n-1)+Fib(n-2);
}

size_t Fib_1(int n)
{
	size_t fib1, fib2, fib;
	if(n <= 2)
		return 1;
	
	fib1 = fib2 = 1;

	int i = 3;
	while(i <= n)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		i++;
	}
	return fib;
}

void main()
{
	int n;
	while(1)
	{
		printf("input n:>");
		scanf("%d", &n);
		size_t result = Fib_1(n);
		printf("第 %d 项的值为:> %u\n",n, result);
	}
}

/*
size_t Factorial(int n)
{
	if(n == 1)
		return 1;
	else
		return n * Factorial(n-1);
}
size_t Factorial_1(int n)
{
	size_t result = 1;
	for(int i=1; i<=n; ++i)
	{
		result = result * i;
	}
	return result;
}

void main()
{
	int n;
	printf("please input n:>");  //5
	scanf("%d", &n);

	int result = Factorial_1(n);
	printf("result = %d\n", result);
}

/*
int Fib(int n)
{
	if(n==1 || n==2)
		return 1;
	else
		return Fib(n-1)+Fib(n-2);
}
void main()
{
	int n;
	while(1)
	{
		printf("input n:>");
		scanf("%d", &n);
		int result = Fib(n);
		printf("第 %d 项的值为:> %d\n",n, result);
	}
}


/*
size_t my_strlen( const char *string )
{
	if(*string == '\0')
		return 0;
	else
		return my_strlen(++string) + 1;
}

void main()
{
	char *str = "Heljglkjfallo";
	printf("len = %d\n", my_strlen(str));
}

/*
size_t my_strlen( const char *string )
{
	size_t count = 0;
	while(*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}

void main()
{
	char *str = "Heljglkjfallo";
	printf("len = %d\n", my_strlen(str));
}

/*
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 1234;
	print(num);
	return 0;
}

/*
int Factorial(int n)
{
	if(n == 1)
		return 1;
	else
		return n * Factorial(n-1);
}

void main()
{
	int n;
	printf("please input n:>");  //5
	scanf("%d", &n);

	int result = Factorial(n);
	printf("result = %d\n", result);
}

/*
int Factorial(int n)
{
	int result = 1;
	for(int i=1; i<=n; ++i)
	{
		result = result * i;
	}
	return result;
}

void main()
{
	int n;
	printf("please input n:>");  //5
	scanf("%d", &n);

	int result = Factorial(n);
	printf("result = %d\n", result);
}

/*
void main()
{
	int a = 10;
	int b = 20;

	int max_value = Max(a, b);
	printf("max value = %d\n", max_value);
	int min_value = Min(a, b);
	printf("min value = %d\n", min_value);
	Compare(a, b);
}

/*
#define OK   //条件编译

#ifndef OK
void fun()
{
	printf("This is fun 1.\n");
}
#else
void fun()
{
	printf("This is fun 2.\n");
}
#endif

void main()
{
	fun();
}


/*
void main()
{
	int a = 10;
	int b = 20;

	int max_value = Max(a, b);
	printf("max value = %d\n", max_value);
	int min_value = Min(a, b);
	printf("min value = %d\n", min_value);
	Compare(a, b);
}

/*
void Print_One_Line(); //申明

void Print_N_Line(int n)
{
	for(int i=0; i<n; ++i)
	{
		Print_One_Line();
	}
}

void main()
{
	int n;
	printf("input n:>");
	scanf("%d", &n);
	Print_N_Line(n);
}

/*
void main()
{
	char s1[100] = "Hello";
	char *s2 = " Bit.";

	int len = strlen(s1);
	printf("s1 length = %d\n", len);  //Hello

	len = strlen(strcat(s1, s2)); //链式的访问

	printf("s1 length = %d\n", len); //Hello Bit.
}

/*
void Print_One_Line(); //申明

void Print_N_Line(int n)
{
	for(int i=0; i<n; ++i)
	{
		Print_One_Line();
	}
}

void Print_One_Line()
{
	printf("Hello Bit.\n");
}

void main()
{
	int n;
	printf("input n:>");
	scanf("%d", &n);
	Print_N_Line(n);
}

/*
void main()
{
	int value = '\0';   // 0
	//int value = 1;
	printf("value = %d\n", value);
}


int main()
{
	int i;
	int  ar[] = {1,2,3,4,5,0,6,7,8,9,10};
	int n = sizeof(ar) / sizeof(int); 

	for(i=0; ar[i] != '\0'; ++i) //
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
	return 0;
}


int main()
{
	int i;
	int  ar[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(ar) / sizeof(int); 

	for(i=0; i<n; ++i)
		printf("%d ",ar[i]);
	printf("\n");
	return 0;
}
*/