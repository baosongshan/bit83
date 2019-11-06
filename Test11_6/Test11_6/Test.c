#include<stdio.h>
#include<stdbool.h>

//1. 写一个函数可以判断一个数是不是素数。
//2. 写一个函数判断一年是不是闰年。
//3. 写一个函数，实现一个整形有序数组的二分查找。
//4. 写一个函数，每调用一次这个函数，就会将num的值增加1。

//1
bool IsPrime(int value)
{
	for(int i=2; i<value; ++i) //
	{
		if(value % i == 0)
			return false;
	}
	return true;
}

bool IsLeap(int year)
{
	if((year%4==0 && year%100!=0) || (year%400==0))
		return true;
	return false;
}

int Max(int ar[], int n)
{
	int max_value = ar[0];
	for(int i=1; i<n; ++i)
	{
		if(ar[i] > max_value)
			max_value = ar[i];
	}
	return max_value;
}
int Min(int ar[], int n)
{
	int min_value = ar[0];
	for(int i=1; i<n; ++i)
	{
		if(ar[i] < min_value)
			min_value = ar[i];
	}
	return min_value;
}

int SecMax(int ar[] ,int n)
{
	int max_value, sec_value;
	if(ar[0] > ar[1])
	{
		max_value = ar[0];
		sec_value = ar[1];
	}
	else
	{
		max_value = ar[1];
		sec_value = ar[0];
	}

	for(int i=2; i<n; ++i)
	{
		if(ar[i] > max_value)
		{
			sec_value = max_value;
			max_value = ar[i];
		}
		else if(ar[i] > sec_value)
		{
			sec_value = ar[i];
		}
	}
	return sec_value;
}
void Sort(int ar[], int n)
{
	for(int i=0; i<n-1; ++i) //趟数
	{
		for(int j=0; j<n-i-1; ++j)
		{
			if(ar[j] > ar[j+1])
			{
				int tmp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = tmp;
			}
		}
	}
}

void PrintArray(int ar[], int n)
{
	for(int i=0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

int Find(int ar[], int n, int key)
{
	for(int i=0; i<n; ++i)
	{
		if(ar[i] == key)
			return i;
	}
	return -1;
}
int BinSearch(int ar[], int n, int key)
{
	int low = 0;
	int high = n-1;
	int mid;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(key < ar[mid])
			high = mid-1;
		else if(key > ar[mid])
			low = mid+1;
		else
			return mid;
	}
	return -1;
}

int count = 0;
void CountFun()
{
	count++;
}

void main()
{
	int ar[] = {4320,4,54,5,2400,14,143,53,1,41,1413};
	//int ar[] = {-4320,-4,-54,-5,-24,-14,-143,-53,-1,-41,-1413};
	int n = sizeof(ar) / sizeof(int);

	int max_value = Max(ar, n);
	printf("max value = %d\n", max_value);
	int sec_value = SecMax(ar, n);
	printf("sec value = %d\n", sec_value);

	//普通查找
	int index = Find(ar, n, 24000);

	PrintArray(ar, n);
	Sort(ar, n);
	PrintArray(ar, n);

	//二分查找
	index = BinSearch(ar, n, 1430);

	CountFun();
	CountFun();
	CountFun();
	printf("count = %d\n", count);
	

}

/*
void main()
{
	int year;
	bool flag;
	while(1)
	{
		printf("year:>");
		scanf("%d", &year);
		flag = IsLeap(year);
		if(flag)
		{
			printf("%d is leap.\n", year);
		}
		else
		{
			printf("%d is not leap.\n", year);
		}
	}
}

/*
void main()
{
	int num;
	bool flag;
	while(1)
	{
		printf("num:>");
		scanf("%d", &num);
		flag = IsPrime(num);
		if(flag)
		{
			printf("%d is Prime.\n", num);
		}
		else
		{
			printf("%d is not Prime.\n", num);
		}
	}
}

/*
void Swap(int *x, int *y) //形式参数
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void main()
{
	int a = 10;
	int b = 20; //实际参数

	printf("a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	//system("pause");
}

/*
void Swap(int x, int y) //形式参数
{
	int tmp = x;
	x = y;
	y = tmp;
}

void main()
{
	int a = 10;
	int b = 20; //实际参数

	printf("a = %d, b = %d\n", a, b);
	Swap(a, b);
	/*int tmp = a;
	a = b;
	b = tmp;
	printf("a = %d, b = %d\n", a, b);

}

//strlen strcat strcmp strcpy //
/*
void main()
{
	char *s1 = "hello";
	char *s2 = "hello";

	printf("result = %d\n", strcmp(s1, s2));
	//s1  > s2 : 1 +
	//s1 == s2 : 0 0
	//s1  < s2 : -1 -
}


void main()
{
	char *str = "Hello";
	printf("len = %d\n", strlen(str));
	char s1[100] = "Hello ";
	char s2[] = "Bit.";
	printf("s1 = %s\n", s1);
	strcat(s1, s2); // s1+s2= Hello Bit.
	printf("s1 = %s\n", s1);

	strcpy(s1, s2);   //Bit\0
	printf("s1 = %s\n", s1);
}

/*
int Max(int a, int b)
{
	int max_value = a > b ? a : b;
	return max_value;
}

int main()
{
	int a = 10;
	int b = 20;
	//scanf("%d %d", &a, &b);
	char *str = "Hellonflakfakfaklfakl"; //字符串 \0
	int len = strlen(str);
	printf("str len = %d\n", len);
	int max_value = Max(a , b);
	printf("max value = %d.\n", max_value);
	return 0;
}

/*
int Max(int a, int b)
{
	int max_value = a > b ? a : b;
	return max_value;
}

int main()
{
	int a, b, c, d, x, y;
	printf("input a and b:>");
	int max_value = Max(a, b);

	max_value = Max(c, d);

	return 0;
}
*/