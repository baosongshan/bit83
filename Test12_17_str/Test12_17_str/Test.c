#include<stdio.h>
#include<assert.h>
#include<string.h>

//1 检查参数的合法性
//2 保护参数
//3 功能实现
//4 正确返回值

size_t my_strlen( const char *string)
{
	assert(string != NULL);
	int count = 0;
	while(*string++ != '\0')
	{
		count++;
	}
	return count;
}

char *my_strcpy(char *strDest, const char *strSrc )
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
char *my_strcat( char *strDest, const char *strSrc )
{
	assert(strDest!=NULL && strSrc!=NULL);
	char *dest = strDest;
	const char *src = strSrc;

	while(*dest != '\0')
		dest++;
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return strDest;
}

int my_strcmp( const char *string1, const char *string2 )
{
	assert(string1!=NULL&&string2!=NULL);
	const char *str1=string1;
	const char *str2=string2;
	int res = 0;
	while(*str1!='\0' || *str2!='\0')
	{
		if((res = *str1 - *str2) != 0)
			break;
		str1++;
		str2++;
	}
	if(res > 0)
		res = 1;
	else if(res < 0)
		res = -1;
	return res;
}

char* my_strncpy( char *strDest, const char *strSource, size_t count )
{
	assert(strDest!=NULL && strSource!=NULL);
	char *dest = strDest;
	const char *src = strSource;

	while(count!=0 && *src!='\0')
	{
		*dest++ = *src++;
		count--;
	}
	if(*src == '\0')  //用来补充\0
	{
		while(count-- != 0)
			*dest++ = '\0';
	}
	return strDest;
}

char* my_strncat( char *strDest, const char *strSource, size_t count )
{
	assert(strDest!=NULL && strSource!=NULL);
	char *dest = strDest;
	const char *src = strSource;

	while(*dest != '\0')
		dest++;
	while(count--!=0 && *src!='\0')
	{
		*dest++ = *src++;
	}
	if(*src == '\0')
		*dest = '\0';
	return strDest;
}

int my_strncmp( const char *string1, const char *string2, size_t count )
{
	assert(string1!=NULL &&string2!=NULL);
	int res = 0;
	while(count-- != 0)
	{
		if((res = *string1 - *string2) != 0)
			break;
		string1++;
		string2++;
		if(*string1 == '\0' && *string2!='\0')
			return -1;
		else if(*string1!='\0' && *string2=='\0')
			return 1;
		else if(*string1=='\0' && *string2=='\0')
			return 0;
	}

	if(res > 0)
		res = 1;
	else if(res < 0)
		res = -1;
	return res;
}

void main()
{
	char str2[20] = "HelloWorld";
	char *str3 = "Bit666";
	my_strncpy(str2, str3, 13);
	printf("str2 = %s\n", str2);

	char str4[20] = "Hello ";
	char *str5 = "Bit666";
	my_strncat(str4, str5, 3); // str4+str5
	printf("str4 = %s\n", str4);

	char *str6 = "aea"; //123
	char str7[] = "Hea"; //abc
	int res = my_strncmp(str6, str7, 10);  //s1>s2 1 s1=s2 0 s1<s2-1
	printf("res = %d\n", res);
}


/*
void main()
{
	char *str1 = "Hello Bit";
	int len = my_strlen(str1);
	printf("str length = %d\n", len);

	//char str2[20] = "HelloWorld";
	char str2[20] = "HelloWorld";
	char *str3 = "Bit666";
	my_strcpy(str2, str3);
	printf("str2 = %s\n", str2);

	char str4[20] = "Hello ";
	char *str5 = "Bit.";
	my_strcat(str4, str5); // str4+str5
	printf("str4 = %s\n", str4);

	char *str6 = "Aello";
	char *str7 = "Hllo";
	int res = my_strcmp(str6, str7);  //s1>s2 1 s1=s2 0 s1<s2-1
	printf("res = %d\n", res);
}

/*
int my_strcmp( const char *string1, const char *string2 )
{
	assert(string1!=NULL&&string2!=NULL);
	const char *str1=string1;
	const char *str2=string2;
	     //Hello          Helloabc
	while(*str1!='\0' || *str2!='\0')
	{
		if(*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else if(*str1 > *str2)
			return 1;
		else 
			return -1;
	}
	return 0;
}


int my_strcmp( const char *string1, const char *string2 )
{
	//
	assert(string1!=NULL&&string2!=NULL);
	char *str1=string1;
	char *str2=string2;
	int count1=0,count2=0;
	while(str1[count1]!='\0' && str2[count2]!='\0')
	{
		if(str1[count1]==str2[count2])
		{
			count1++;
			count2++;
		}
		else
		{
			if(str1[count1]>str2[count2]) 
				return 1;
			if(str1[count1]<str2[count2]) 
				return -1;
		}
	}

	if(str1[count1] != '\0')
		return 1;
	else if(str2[count2] != '\0')
		return -1;
	return 0;
}

//C语言没有 字符串类型
void main()
{
	char str[] = {'a','b','c','\0'};
	const char *str1 = "abc"; //字符串常量
	str[0] = 'A';
	//str1[0] = 'A';
	printf("%s\n", str1);

	int a = 10;
	int *p = &a;
	printf("%d\n", p);
}


void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	for(int i=0; i<10; ++i)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
	for(int i=0; i<10; ++i)
	{
		printf("%d ",*(ar+i));
	}
	printf("\n");

	int *p = ar;
	for(int i=0; i<10; ++i)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");

	for(int i=0; i<10; ++i)
	{
		printf("%d ",p[i]);
	}
	printf("\n");

	char *str = "abcxyz";
	*str; //a
	str++;
	*str;

	str[0]; //*(str+0)
	str[3];
}


//void PrintArray(int ar[], int n)
//void PrintArray(int ar[1], int n)
//void PrintArray(int ar[10], int n)  //退化为指针
void PrintArray(int *ar, int n)
{
	printf("size = %d\n", sizeof(ar));
	for(int i=0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void main()
{
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(ar)/ sizeof(int);
	printf("size = %d\n", sizeof(ar));
	PrintArray(ar, n);
}
*/