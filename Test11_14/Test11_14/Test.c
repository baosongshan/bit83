#include<stdio.h>

// xxxx 类型 = xxxx

// 指针 == 地址

void main()
{
	int a = 10;
	//a = 100;
	int *p = &a;
	*p = 100;
	printf("a = %d\n", a);
}

/*
void main()
{
	int a = 10;
	int b = 20;
	 
	int *p = NULL;
	int **s = NULL;

	p = &a;
	s = &p;

	*p = 100;
	*s = &b;
}

/*
void main()
{
	printf("%d\n", sizeof(char**));
	printf("%d\n", sizeof(short**));
	printf("%d\n", sizeof(int**));
	printf("%d\n", sizeof(float****************));
	printf("%d\n", sizeof(double******));
}

/*
void main()
{
	int a = 10;
	int b = 20;
	 
	int *p = NULL;
	int **s = NULL;

	p = &a;
	s = &p;

	*p = 100;
	*s = &b;
}

/*
void main()
{
	int * pi;
	char * pc;
	double *pd;
	short * ps;
	long * pl;
}


void main()
{
	int a = 10;
	char ch = 'A';
	int * p = &a; //指针变量 = 指针 == 地址
}

/*
//sizeof()  运算符

void main()
{
	int item;
	printf("input item(以-1结束):>");

	while(scanf("%d", &item), item != -1)
	{
		printf("item = %d\n", item);
	}
}

/*
void main()
{
	int item;
	printf("input item:>");
	scanf("%d", &item);

	while(item != -1)
	{
		printf("item = %d\n", item);
		printf("input item:>");
		scanf("%d", &item);
	}
}

/*
int Max(int a, int b)
{
	return a > b ? a : b;
}

void main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1, 1);
	printf("c = %d\n", c);
}

/*
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	      //1        3        3        5
	return 0;
}

/*
void main()
{
	int a = 1;
	int v = ++a;
	printf("v = %d\n", v);
}

/*
void main()
{
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof 10);
	printf("%d\n", sizeof int);
}

/*
void main()
{
	int a = 1;
	int v = !a;  //~a
	printf("v = %d\n", v);
}


void main()
{
	int a, b, c;
	a = b = c = 0;

	a = b = c+10;
}

/*
//效率尽可能高

#define ALIGN 4
int fun(int n)
{
	return ((n + ALIGN - 1) & ~(ALIGN - 1)); //
}
void main()
{
	int n;
	int result;
	while(1)
	{
		printf("please input n:>");
		scanf("%d", &n);
		result = fun(n);
		printf("result = %d\n", result);
	}
}


/*
int Count(unsigned char value)
{
	int count[] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,2,4,1 ...};
	return count[value];
}
void main()
{
	unsigned char value = 100; //0000 0111 0000 0000
	int result = Count(value);
	printf("count = %d\n", result);
}


int Count(unsigned char value)
{
	int count = 0;
	switch(value)
	{
	case 0:
		return 0;
	case 1:
		return 1;
	case 2:  //0000 0010
		return 2;
	case 3:
		return 2;
		.........
	}
}
void main()
{
	unsigned char value = 100; //0000 0111 0000 0000
	int result = Count(value);
	printf("count = %d\n", result);
}


int Count(unsigned char value)
{
	int count = 0;
	while(value)
	{
		value = value & (value-1);
		count++;
	}
	return count;
}
void main()
{
	unsigned char value = 100; //0000 0111 0000 0000
	int result = Count(value);
	printf("count = %d\n", result);
}

/*
int Count(unsigned char value)
{
	int count = 0;
	while(value)
	{
		if(value & 0x01)
			count++;
		value >>= 1;
	}
	return count;
}
void main()
{
	unsigned char value = 100; //0000 0111 0000 0000
	int result = Count(value);
	printf("count = %d\n", result);
}

/*
int Count(unsigned char value)
{
	int count = 0;
	while(value)
	{
		if(value % 2 == 1)
			count++;
		value >>= 1;
	}
	return count;
}
void main()
{
	unsigned char value = 100; //0000 0111 0000 0000
	int result = Count(value);
	printf("count = %d\n", result);
}

/*

int Count(unsigned char value)
{
	int count = 0;
	while(value)
	{
		if(value % 2 == 1)
			count++;
		value /= 2;
	}
	return count;
}
void main()
{
	unsigned char value = 100; //0000 0111 0000 0000
	int result = Count(value);
	printf("count = %d\n", result);
}

/*
void main()
{
	int a = 2;
	int b = 3;
	printf("befor: a = %d, b = %d\n", a, b);

	a = a ^ b;  // + 
	b = a ^ b;
	a = a ^ b;

	printf("after: a = %d, b = %d\n", a, b);
}

/*
void main()
{
	int a = 2;
	int b = 3;
	printf("befor: a = %d, b = %d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("after: a = %d, b = %d\n", a, b);
}

/*
void main()
{
	int a = 2;
	int b = 3;
	printf("befor: a = %d, b = %d\n", a, b);

	int tmp = a;
	a = b;
	b = tmp;

	printf("after: a = %d, b = %d\n", a, b);
}


/*
void  main()
{
	int a = 10;   // 0000 1010  10
	int b = 7;    // 0000 0111  7
	              // 0000 0010  &
	              // 0000 1111  |
	              // 0000 1101  ^
	              // 1111 0101  ~

	//int v = a & b;
	//int v = a | b;
	//int v = a ^ b;
	int v = ~a;
	printf("v = %d\n", v);
}

/*
void main()
{
	int a = 10;
	int v = a >> -1;   // 32 + -x
	printf("v = %d\n", v);
}


void main()
{
	int a = -2;
	int v = a >> 2; 
	printf("v = %d\n", v);
}


void main()
{
	int a = -2;
	int v = a << 2; //a * 2^2  
	printf("v = %d\n", v);
}


void main()
{
	int a = 2;
	int v = a >> 34; //a / 2^2  //  n%32
	printf("v = %d\n", v);
}


void main()
{
	//0000 0000 0000 0000 0000 0000 0000 0010
	int a = 2;
	int v = a >> 1; //a / 2^2
	printf("v = %d\n", v);
}


void main()
{
	//0000 0000 0000 0000 0000 0000 0000 0010
	int a = 2;
	int v = a << 2; //a*2^2
	printf("v = %d\n", v);
}

/*
void main()
{
	float a = 3;
	int b = 2;
	float v = a / b;
	printf("v = %f\n", v);
}

/*
void main()
{
	int a = 3;
	int b = 2;
	float v = a / b;
	printf("v = %f\n", v);
}
*/