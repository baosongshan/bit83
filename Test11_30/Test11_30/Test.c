#include<stdio.h>
#include<stdbool.h>

void main()
{
	float f = 9.0;
	printf("f = %f\n", f);
	printf("f = %d\n", *(int*)&f);
}

/*
void main()
{
	float f = 12.125;
	//12.125  ==> 1100.001 ==> 1.100001*2^3
	//(-1)^S * M * 2^E
	//S=0  M=1.100001   E=3
	//S      E                 M
	//0   00000000   000 0000 0000 0000 0000 0000
	//0100 0001 0100 0010 0000 0000 0000 0000
	//4     1    4    2    0    0     0   0
	//41 42 00 00
}

/*
void main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}

/*
void main()
{
	float f = 12.5;
	printf("f = %f\n", f);
	printf("f = %d\n", f);  //0

	int d = f;
}

/*
unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	return 0;
}

/*
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
		//a[0] = -1-0;
		//a[1] = -1-1 = -2
		//a[2] = -1-2 = -3
		//..
		//a[127] = -1-127 = -128
		//a[128] = -1-128 = 127
		//a[129] = -1-128 = 126
		//..
		//a[255] = -1-255  = 0

	}
	printf("%d", strlen(a));
	return 0;
}

/*
void main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		//9 8 7 6 5 4 3 2 1 0
	}
}

/*
void main()
{
	int i = -20;
	// 1000 0000 0000 0000 0000 0000 0001 0100
	// 1111 1111 1111 1111 1111 1111 1110 1011
	// 1111 1111 1111 1111 1111 1111 1110 1100 -20
	unsigned int j = 10;
	// 0000 0000 0000 0000 0000 0000 0000 1010
	printf("%u\n", i + j); //
}

/*
int main()
{
	char a = 128; //  char  0000 0000
	//char a = -128;
	printf("%u\n", a);
	return 0;
}
/*
void main()
{
	char ch = -128 - 1;
	printf("ch = %d\n", ch);
}

/*
int main()
{
	char a = 128; //  char  0000 0000
	printf("%u\n", a);
	return 0;
}

/*
int main()
{
	char a = -128;

	// 1000 0000  -128  

	// 1000 0000 0000 0000 0000 0000 1000 0000
	// 1111 1111 1111 1111 1111 1111 0111 1111
	// 1111 1111 1111 1111 1111 1111 1000 0000

	printf("%u\n", a); // 

	return 0;
}

/*
int main()
{
	char a = -1;
	signed char b = -1;  //char b = -1;
	unsigned char c = -1;
	// 0000 0000
	// 1111 1111

	printf("a=%d,b=%d,c=%d", a, b, c);
	      //
	return 0;
}

/*
void main()
{
	char c = -1;
	// 1 000 0001
	// 1 111 1110
	// 1 111 1111  ==》 f f
	// 1 111 1110
	// 1 000 0001  ==> -1

	// 1000 0000 0000 0000 0000 0000 0000 0001  -1
	// 1111 1111 1111 1111 1111 1111 1111 1110
	// 1111 1111 1111 1111 1111 1111 1111 1111   
	printf("%u\n", c);  // >= 0
}

/*
int main()
{
	char a = -1;
	signed char b = -1;  //char b = -1;
	unsigned char c = -1;
	// 0000 0000

	printf("a=%d,b=%d,c=%d", a, b, c);
	      //
	return 0;
}

/*
void main()
{
	int a = -100;

}

/*
void main()
{
	int a = 1;
	printf("a = %d\n", *(char*)&a);
}

/*
typedef union Test
{
	int a;   //4
	char ch; //1
}Test;

bool CheckModel()
{
	Test t;
	t.a = 1;
	return (t.ch == 1);
}

void main()
{
	bool flag = CheckModel();
	if(flag)
	{
		printf("This is little model.\n");
	}
	else
	{
		printf("This is big model.\n");
	}
}

/*
typedef union Test
{
	char a;     //1
	char c;     //1
	double b;   //8
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));
}

/*
typedef struct Test
{
	char a;     //1
	char c;     //1 + 6
	double b;   //8
	
}Test;

void main()
{
	printf("Test size = %d\n", sizeof(Test));
}

/*
typedef union Test
{
	int a;
	char ch;
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}


void main()
{
	int a = 1;
	printf("a = %d\n", a);
}

/*
void main()
{
	printf("%d\n",sizeof(bool));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(double));

	bool b;//1
	int i; //4
}
*/