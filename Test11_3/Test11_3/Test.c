#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void main()
{
	char *str = "Hello";
	int len = strlen(str); //
	printf("len = %d\n", len);
}

/*
int Max(int ar[], int n)
{
	int max_value = ar[0];
	for(int i=1; i<n; ++i)
	{
		if(ar[i] > max_value)
		{
			max_value = ar[i];
		}
	}
	return max_value;
}

int Min(int ar[], int n);
int SecMax(int ar[], int n);

void main()
{
	int ar[] = {122,43,5,73,4,7,8,9,23,567};

	int n = sizeof(ar) / sizeof(int);
	int max_value = Max(ar, n);
	printf("max value = %d\n", max_value);
}

/*
void main()
{
	int ar[10];
	int br[10] = {1,2,3,4,5,6,7,8,9,10};
	int cr[10] = {1,2,3,4,5};  //初始化
	int dr[10];
	for(int i=0; i<5; ++i)
	{
		dr[i] = i+1; //赋值
	}
}
/*
void main()
{
	char a; //  -128 ~ 127
	for(a=0; a < 128; ++a)
	{
		printf("hahaha\n");
	}
}



void main()
{
	int i = 0;
	//for(; ;)
	//for(; true;)
	while(true)
	{
		printf("i = %d\n", i++);
	}
}


//break;
//continue;
void main()
{
	for(int i=0; i<10; ++i)
	{
		if(i == 5)
		{
			//break;
			continue;
		}
		printf("i = %d\n", i);
		
	}
}


void main()
{
	int start, end;
	int sum = 0;
	int i;
	printf("input start and end:>");
	scanf("%d %d", &start, &end);  // 1  1
	//  1       10
	//start    end
	do
	{
		sum += start;
		start++;
	}while(start <= end);
	printf("sum = %d\n", sum);
}


void main()
{
	int start, end;
	int sum = 0;
	int i;
	printf("input start and end:>");
	scanf("%d %d", &start, &end);
	//  1       10
	//start    end
	for(i=start; i<=end; ++i) // 高 ++
	{
		sum += i;
	}
	printf("sum = %d\n", sum);
}

void main()
{
	int start, end;
	int sum = 0;
	int tmp;
	printf("input start and end:>");
	scanf("%d %d", &start, &end);
	//  1       10
	//start    end
	tmp = start;
	while(tmp <= end) // true false
	{
		sum = sum + tmp; //sum
		tmp++;
	}
	printf("sum = %d\n", sum);
}


void main()
{
	int start, end;
	int sum = 0;
	printf("input start and end:>");
	scanf("%d %d", &start, &end);
	//  1       10
	//start    end
	while(start <= end)
	{
		sum = sum + start; //sum
		start++;
	}
	printf("sum = %d\n", sum);
}

/*
void main()
{
	int ar[] = {12,23,34,45,56,78,89,90,100,200,300};
	int n = sizeof(ar) / sizeof(int);
	printf("%d ", ar[0]);
}


//alt + f8
//ctrl + k + c
//ctrl + k + u

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");
	return 0;
}

/*
void main()
{
	char ch = 'A';
	switch(ch)
	{
	case 'A':
		printf("ch = %c\n", ch);
		break;
	}
}

/*
bool IsLeap(int year)
{
	if((year%4==0 && year%100!= 0) || (year%400==0))
		return true;
	return false;
}

int main()
{
	int year, month, day;
	printf("input year and month:>"); 
	scanf("%d %d", &year, &month);

	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 2:
		if(IsLeap(year))  // true  false 
			day = 29;
		else
			day = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default:
	    //
		break;
	}

	printf("day = %d\n", day);

	return 0;
}

/*
int main()
{
	int year, month, day;
	printf("input year and month:>"); 
	scanf("%d %d", &year, &month);

	switch(month)
	{
	case 1:
		day = 31;
		break;
	case 2:
		//day = 31;
		break;
	case 3:
		day = 31;
		break;
	case 4:
		day = 30;
		break;
	case 5:
		day = 31;
		break;
	case 6:
		day = 30;
		break;
	case 7:
		day = 31;
		break;
	case 8:
		day = 31;
		break;
	case 9:
		day = 30;
		break;
	case 10:
		day = 31;
		break;
	case 11:
		day = 30;
		break;
	case 12:
		day = 31; //
		break;
	}

	printf("day = %d\n", day);
	return 0;
}

/*
int main()
{
	int year, month, day;
	printf("input year and month:>"); 
	scanf("%d %d", &year, &month);

	if(month == 1)
		day = 31;
	else if(month == 2)
		day = 28;
	else if(month == 3)
		day = 31;
	........

	return 0;
}


#define ulong unsigned long
typedef unsigned long u_long;

void main()
{
	unsigned long a = 1;
	ulong b = 2;   
	u_long c = 3;
}

/*
int Min(int a, int b)
{
	return a > b ? b : a;
}
int Max(int a, int b)
{
	return a > b ? a : b;
}

void main()
{
	int a = 1000;
	int b = 100;

	int max_value = a > b ? a : b;   //  ?   :

	printf("max value = %d\n", max_value);
}

/*
void main()
{
	int a = 10;
	int b = 1;
	int v = a || ++b;   //短路求值

	printf("v = %d\n", v); //0   //
	printf("b = %d\n", b); //2
}


void main()
{
	int a = 10;
	int b = 0;

	//int v = a && b; //逻辑 与
	//int v = !a;   //取反
	//int v = a || b; //位 或
	//int v = a ^ b; //位 异或

	printf("v = %d\n", v);
}


/*
void main()
{
	int a = 10;
	int b = 6;

	//int v = a & b; //位 与
	//int v = ~a;   //取反
	//int v = a | b; //位 或
	int v = a ^ b; //位 异或

	printf("v = %d\n", v);
}


int main()
{
	int a = 10;

	int v = a << 1; // v = a / 2^n
	                // v = a * 2^n

	printf("v = %d\n", v); //

	return 0;
}

/*
int main()
{
	int a = 10;
	if(a > 10) //选择语句
	{
		printf("aaaaaaaaaaaaaa\n");
	}
	else if(a == 10)
	{
		printf("bbbbbbbbbbbbbbbb\n");
	}
	else 
	{
		printf("cccccccccccccccc\n");
	}
	return 0;
}


int main()
{
	int a = 0;
	printf("%d %d %d %d\n", a++, ++a, a++, ++a); 
	//      2  2   1  1
	printf("a = %d\n", a);
	return 0;
}


/*
int main()
{
	int a = 0;
	// 0       1
	int v = (a++) + (a++) + (++a);

	printf("v = %d\n", v); //

	printf("a = %d\n", a); //
	
	return 0;
}
*/