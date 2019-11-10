#include<stdio.h>
#include<stdbool.h>
#include<windows.h>

void BubbleSort_1(int ar[], int n) //降序
{
	for(int i=0; i<n-1; ++i) //控制趟数
	{
		for(int j=0; j<n-i-1; ++j)
		{
			if(ar[j] < ar[j+1])
			{
				int tmp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = tmp;
			}
		}
	}
}

#define ROW 5
#define COL 5
void PrintBrray(int br[ROW][COL])
{
	bool Is_Right = true;
	for(int i=0; i<ROW; ++i)
	{
		if(Is_Right)
		{
			for (int j = 0; j < COL; ++j)
			{
				printf("%d ", br[i][j]);
				Sleep(500);
			}
			printf("\n");
			Is_Right = false;
		}
		else
		{
			for(int j=COL-1; j>=0; --j)
			{
				printf("%d ", br[i][j]);
				Sleep(500);
			}
			printf("\n");
			Is_Right = true;
		}
	}
}
void main()
{
	int br[ROW][COL];
	for(int i=0; i<ROW; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
			br[i][j] = i+j;
		}
	}

	for(int i=0; i<ROW; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
			printf("%d ", br[i][j]);
		}
		printf("\n");
	}
	printf("================\n");
	PrintBrray(br);
}

/*
void PrintArray(int ar[], int n)
{
	for(int i=0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void BubbleSort_1(int ar[], int n)
{
	//int num = sizeof(ar) / sizeof(int); //
	for(int i=0; i<n-1; ++i) //控制趟数
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
void BubbleSort_1(int ar[], int n) //降序
{}

#define ROW 5
#define COL 5
void PrintBrray(int br[ROW][COL])
{}

void main()
{
	int ar[] = {431, 31, 35, 54, 6, 501, 115, 5, 1, 17, 14, 4, 3}; //
	int n = sizeof(ar) / sizeof(int);
	PrintArray(ar, n);
	BubbleSort_2(ar, n);
	PrintArray(ar, n);

	int br[ROW][COL];
	for(int i=0; i<ROW; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
			br[i][j] = i+j;
		}
	}
}

/*
void main()
{
	int ar[3][3] = {1,2,3,4,5,6,7,8};

	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			printf("ar[%d][%d] = %p \n",i, j, &ar[i][j]);
		}
	}
}

/*
void main()
{
	int ar[3][3] = {1,2,3,4,5,6,7,8};
	printf("ar size = %d\n", sizeof(ar)); //

	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}

/*
void main()
{
	int ar[3][3] = {{1},{2},{3}};

	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}


void main()
{
	int ar[3][3] = {1,2,3,4,5,6,7,8,9};

	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}



/*
void PrintArray(int ar[], int n)
{
	for(int i=0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

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
int Max(int ar[], int n);
int SecMax(int ar[], int n);

int Find(int ar[], int n, int key)
{
	for(int i=0; i<n; ++i)
	{
		if(ar[i] == key)
			return i;
	}
	return -1;
}

void Reverse_1(int ar[], int n)
{
	for(int i=0; i<(n/2); ++i)
	{
		int tmp = ar[i];
		ar[i] = ar[n-i-1];
		ar[n-i-1] = tmp;
	}
}

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Reverse_2(int ar[], int n)
{
	int start = 0;
	int end = n-1;
	while(start < end)
	{
		Swap(&ar[start], &ar[end]);
		start++;
		end--;
	}
}

void fun(int ar[])
{
	printf("fun : ar size = %d\n", sizeof(ar));
}

void main()
{
	int ar[] = {431,31,35,54,6,501,115,5,1,17,14,4, 3}; //
	int n = sizeof(ar) / sizeof(int);
	printf("ar size = %d\n", sizeof(ar));
	fun(ar);
}

/*
void main()
{
	int ar[] = {431,31,35,54,6,501,115,5,1,17,14,4, 3};
	int n = sizeof(ar) / sizeof(int);
	PrintArray(ar, n);
	Reverse_2(ar, n);
	PrintArray(ar, n);
}

/*
void main()
{
	int ar[] = {431,31,35,54,6,501,115,5,1,17,14,4, 3};
	int n = sizeof(ar) / sizeof(int);

	int max_value = Max(ar, n);
	printf("max value = %d\n", max_value);

	int key = 540;
	int index = Find(ar, n, key); //-1  
	if(index == -1)
		printf("%d 不存在.\n", key);
	else
		printf("%d 在 %d\n", key, index);

	Reverse(ar, n);

}


/*
void main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,10}; 
	for(int i=0; i<10; ++i)
	{
		printf("ar[%d] = %p\n", i, &ar[i]);
	}
}

void main()
{
	char ar[10];
	for(int i=0; i<5; ++i)
	{
		ar[i] = 'a' + i; //a b c d e  \0
	}
	ar[5] = '\0';
	printf("ar = %s\n", ar); //abcde
	printf("ar size = %d\n", sizeof(ar)); //10
	printf("ar len = %d\n", strlen(ar));  //5
}


void main()
{
	char ar[10] = "Hello"; 
	printf("ar = %s\n", ar);
	printf("ar size = %d\n", sizeof(ar)); //10
	printf("ar len = %d\n", strlen(ar));  //5
}

//字符串 不存在
void main()
{
	char ar[10] = {'H','e','l','l','o'}; 
	printf("ar = %s\n", ar);
	printf("ar size = %d\n", sizeof(ar)); //10
	printf("ar len = %d\n", strlen(ar));  //5
}


void main()
{
	int ar[] = {1,2,3,4,5,6,7,8};  
	int n = sizeof(ar) / sizeof(int);
	for(int i=0; i<n; ++i)
	{
		printf("ar[%d] = %d\n", i, ar[i]);
	}
}


#define SIZE 10

void main()
{
	const int N = 10; //常量
	int ar[SIZE] = {0};
	//int br[N]; //
}

/*
void main()
{
	//int ar[10] = {1,2,3,4,5,6,7,8,9,10};  
	int ar[10] = {1,2,3,4,5};
	for(int i=0; i<10; ++i)
	{
		printf("ar[%d] = %d\n", i, ar[i]);
	}
}

/*
void main()
{
	double ar[10];  //
	printf("ar size = %d\n", sizeof(ar));
}
*/