#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//1 检查参数的合法性
//2 保护参数
//3 功能实现
//4 正确返回值

char *my_strcat( char *strDestination, const char *strSource )
{
	//
}
int my_strcmp( const char *string1, const char *string2 )
{
	//
}
void main()
{
	char *str1 = "Hello";
	char *str2 = "x";

	int res = strcmp(str1, str2);  //1 0  -1
	printf("res = %d\n", res); 

}

/*
void main()
{
	char *res;
	char dest[20] = "HelloWorld";
	char *src = "Bit.";
	printf("dest = %s\n", dest);
	my_strcat(dest, src);
	printf("dest = %s\n", dest);
}

/*
char *my_strcpy( char *strDest, const char *strSrc )
{
	assert(strDest!=NULL && strSrc!=NULL);
	const char *src = strSrc;
	char *dest = strDest;
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return strDest;
}
void main()
{
	char *res;
	char dest[20] = "HelloWorld";
	char *src = "Bit.";
	printf("dest = %s\n", dest);
	res = my_strcpy(dest, src);
	printf("dest = %s\n", dest);
}

/*
char *my_strcpy( char *strDest, const char *strSrc )
{
	assert(strDest!=NULL && strSrc!=NULL);
	const char *src = strSrc;
	char *dest = strDest;
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return strDest;
}
void main()
{
	char dest[20] = "HelloWorld";
	char *src = "Bit.";
	printf("dest = %s\n", dest);
	my_strcpy(dest, src);
	printf("dest = %s\n", dest);
}

/*
char *my_strcpy( char *strDest, const char *strSrc )
{
	assert(strDest!=NULL && strSrc!=NULL);
	char *spr1 = strSrc;
	char *spr2 = strDest;
	while(*spr1 != '\0')
	{
		*spr2 = *spr1;
		spr1++;
		spr2++;
	}
	*spr2 = '\0';
	return strDest;
}
void main()
{
	char dest[20] = "HelloWorld";
	char *src = "Bit.";
	printf("dest = %s\n", dest);
	my_strcpy(dest, src);
	printf("dest = %s\n", dest);
}

/*
int main()
{
	size_t x = -3;
	const char*str1 = "abcdef";
	const char*str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}
	return 0;
}

/*
size_t my_strlen( const char *string)
{
	assert(string != NULL);
	//const char *str = string;

	int count = 0;
	while(*string++ != '\0')
	{
		count++;
		//string++;
	}
	return count;
}
void main()
{
	char str[] = "Hello";
	int len;
	//len = strlen(str);
	len = my_strlen(str);
	printf("len = %d\n", len);
}

/*
void main()
{
	//一维数组
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));  //16
	printf("%d\n", sizeof(a + 0));   //ar[0] ==> (ar+0)
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a)); //*&a
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0] + 1));
	
}

/*
//void qsort(void *base, 
//		   size_t num, 
//		   size_t width, 
//		   int ( *compare )(const void *elem1, const void *elem2 ) );

void PrintArray(char* ar[], int n)
{
	for(int i=0; i<n; ++i)
	{
		printf("%s ",ar[i]);
	}
	printf("\n");
}

int Compare_int (const void *elem1, const void *elem2 )
{
	return *(int*)elem1 - *(int*)elem2;
}

int Compare_str (const void *elem1, const void *elem2 )
{
	//return strcmp((char*)elem1, (char*)elem2);
	 return strcmp( * ( char** )elem1, * ( char** )elem2 );
}

void main()
{
	int ar[] = {56, 7, 8, 9, 2, 3, 4, 1, 0, 34, 52, 61, 23};
	int n = sizeof(ar) / sizeof(int);

	char* br[] = {"abc","xyz","fjalf","fkkglf","fjhafkljl","liflh"};

	PrintArray(br, 6);
	//BubbleSort(ar, n);

	//qsort(ar, n, sizeof(int), Compare_int); //??????
	qsort(br, 6, 4, Compare_str);

	PrintArray(br, 6);
}

/*
void main()
{
	int a = 1;
	short b = 2;
	
	int *pi = &a;
	printf("%d\n", *pi);
	short *ps = &b;

	void *c;  //4   void * //泛型指针
	c = &a;
	printf("%d\n", * (int*)c);
	c = &b;
}

/*
//void qsort(void *base, 
//		   size_t num, 
//		   size_t width, 
//		   int ( *compare )(const void *elem1, const void *elem2 ) );

void main()
{
	int ar[] = {56, 7, 8, 9, 2, 3, 4, 1, 0, 34, 52, 61, 23};
	int n = sizeof(ar) / sizeof(int);
	PrintArray(ar, n);
	//BubbleSort(ar, n);
	qsort(ar, );
	PrintArray(ar, n);
}

/*
void main()
{
	int a;
	short b;
	void *c;  // 4   void *
}
/*
void main()
{
	printf("%d\n", sizeof(bool*));
	printf("%d\n", sizeof(char*)); 
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(void*));

}

/*
void main()
{
	int a;
	short b;
	void *c;  // 4   void *
}

/*
void PrintArray(int ar[], int n)
{
	for(int i=0; i<n; ++i)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}

void BubbleSort(int ar[], int n)
{
	for(int i=0; i<n-1; ++i) //控制排序的趟数
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

void qsort(void *base, 
		   size_t num, 
		   size_t width, 
		   int ( *compare )(const void *elem1, const void *elem2 ) );

void main()
{
	int ar[] = {56, 7, 8, 9, 2, 3, 4, 1, 0, 34, 52, 61, 23};
	int n = sizeof(ar) / sizeof(int);
	PrintArray(ar, n);
	BubbleSort(ar, n);
	PrintArray(ar, n);
}

/*
int Max(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a < b ? a : b;
}

//泛型函数
int Search(int a, int b, int(*pfun)(int, int))
{
	//int result = (*pfun)(a, b); //回调函数
	int result = pfun(a, b);
	return result;
}

void main()
{
	int a, b;
	while(1)
	{
		printf("input a and b:>");
		scanf("%d %d", &a, &b);  
		int result = Search(a, b, Min);
		printf("result = %d\n",result);
	}
}
/*
void main()
{
	int a = 1;
	int b = 2;
	Max(a, b); // 工牌 0000123 _Max
}

/*
void main()
{
	int a, b;
	while(1)
	{
		printf("input a and b:>");
		scanf("%d %d", &a, &b);  
		int result = Search(a, b, Max);
		printf("result = %d\n",result);
	}
}
*/