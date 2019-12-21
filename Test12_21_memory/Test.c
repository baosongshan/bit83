#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
//memset(dest, src, 0)
void* my_memset(void *buf, int ch, size_t count)
{
	assert(buf != NULL);
	char *pbuf = (char*)buf;
	while(count-- != 0)
	{
		*pbuf++ = ch;
	}
	return buf;
}

void * my_memcpy ( void * dest, const void * source, size_t num )//
{
	assert(dest!=NULL && source!=NULL);
	char *pdest = (char*)dest;
	const char *psrc = (const char*)source;

	while (num-- != 0)
	{
		*pdest++ = *psrc++;
	}

	return dest;
}

void * my_memmove ( void * dest, const void * source, size_t num )
{
	assert(dest!=NULL && source!=NULL);
	char *pdest = (char*)dest;
	const char *psrc = (const char*)source;

	if(pdest<=psrc || psrc+num<=pdest)
	{
		while (num-- != 0)
		{
			*pdest++ = *psrc++;
		}
	}
	else
	{
		//内存重叠
		pdest = pdest+num-1;
		psrc = psrc+num-1;
		while(num-- != 0)
		{
			*pdest-- = *psrc--;
		}
	}
	return dest;
}
int my_memcmp ( const void * ptr1,const void * ptr2, size_t num )
{
	assert(ptr1!=NULL && ptr2!=NULL);
	const char *p1 = (const char *)ptr1;
	const char *p2 = (const char *)ptr2;

	int res = 0;
	while(num-- != 0)
	{
		if((res=*p1-*p2) != 0)
			break;
		p1++;
		p2++;
	}
	if(res > 0)
		res = 1;
	else if(res < 0)
		res = -1;
	return res;
}

void main()
{
	char *s1 = "Hello";
	char *s2 = "Aello";

	int res = my_memcmp(s1, s2, 3); //s1>s2 1  s1<s2 -1 s1==s2 0
	printf("res = %d\n", res);
}

/*
void main()
{
	char str1[] = "abcdefghijk";
	printf("str1 = %s\n", str1);
	//my_memcpy(str1+2, str1, 4);
	my_memmove(str1+2, str1, 4);  //
	printf("str1 = %s\n", str1);
}


/*
void main()
{
	char str1[] = "Hello World";
	char *str2 = "Bit666";

	printf("str1 = %s\n", str1);
	char* res = (char*)memcpy(str1, str2, strlen(str2)+1); 
	printf("str1 = %s\n", res);
}

/*
void main()
{
	char str1[] = "abcdefghijk";
	printf("str1 = %s\n", str1);
	my_memcpy(str1+2, str1, 4);
	//memcpy(str1+2, str1, 4);  //
	printf("str1 = %s\n", str1);
}

/*
void main()
{
	char str1[] = "Hello World";
	char *str2 = "Bit666";
	my_memcpy(str1, str2, strlen(str2)+1);  //x
	printf("str1 = %s\n", str1);

	int ar[10];
	int br[10] = {1,2,3,4,5,6,7,8,9,10};
	my_memcpy(ar, br, sizeof(int)*10);
}

/*
void main()
{
	char str1[100];
	my_memset(str1, 0, 100);
	int ar[10];
	my_memset(ar, 0, sizeof(int)*10);
	int a;
	my_memset(&a, 0, sizeof(int));
}

/*


void main()
{
	char str1[] = "Hello World";
	char *str2 = "Bit666";
	//strcpy(str1, str2);
	memcpy(str1, str2, strlen(str2)+1);  //x
	//memcpy(str1, str2, sizeof(str2));  //x
	printf("str1 = %s\n", str1);

	int ar[10];
	int br[10] = {1,2,3,4,5,6,7,8,9,10};
	//strcpy(ar, br);
	memcpy(ar, br, sizeof(int)*10);
}

/*
void main()
{
	char str1[100];
	memset(str1, 0, 100);
	int ar[10];
	memset(ar, 0, sizeof(int)*10);
	int a;
	memset(&a, 0, sizeof(int));
}

/*
void main()
{
	char str1[100] = {0}; 
	char *str2 = "";  //
	char *str3 = NULL;

}


void ToUpper(char *str)
{
	assert(str != NULL);
	while(*str != '\0')
	{
		*str -= 32;
		str++;
	}
}

void main()
{
	//char str[] = "zhangpengwei@bitedu.tech";
	char str[] = "jfalkfaklfjaklfjkafjlkajfkajfl";
	ToUpper(str);
	printf("str = %s\n", str);
}

/*
void main()
{
	char ch = 'A';
	int flag = islower(ch);
	printf("flag = %d\n", flag);
}

/*
// #define ENOENT          2

void main()
{
	FILE *fp = fopen("Test.txt", "r");
	if(fp == NULL)
	{
		printf("Open file Error. error code = %d\n", errno);
		printf("error info:> %s\n", strerror(errno));
		return;
	}

	printf("Open file OK.\n");
}

/*
int main()
{
	char *p = "zhangpengwei@bitedu.tech"; 
	const char* sep = ".@";
	//int len = strlen(p);
	//char *arr = (char*)malloc(sizeof(char) * (len+1));
	char arr[100];
	char *str = NULL;
	strcpy(arr, p);

	//for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	//{
	//	printf("%s\n", str);
	//}
	str = strtok(arr, sep);
	printf("%s\n", str);
	while(str != NULL)
	{
		str = strtok(NULL, sep);
		printf("%s\n", str);
	}
}

/*
int main()
{
	char str[] = "My- This, a sample string.";
	//char str[] = "MyThisasamplestring";
	char * pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	return 0;
}

/*
char* my_strstr(const char *str1, const char *str2)
{
	assert(str1!=NULL && str2!=NULL);

	int str1_len = strlen(str1);
	int str2_len = strlen(str2);

	int i=0;  //str1
	int j = 0;//str2

	while(i<str1_len  && j<str2_len)
	{
		while(str1[i] == str2[j])
		{
			i++;
			j++;
		}

		if(j >= str2_len)
			break;
		i = i-j+1;
		j = 0;
	}

	if(j >= str2_len)
		return (str1 + i-j);

	return NULL;
}
void main()
{
	//char *S = "abacabcababbabcad";
	char *S = "abacab";

	char *T = "abca";

	char *res = my_strstr(S, T);
	if(res != NULL)
		printf("res = %s\n", res);
	else
		printf("res = 不存在.\n");
}

/*
void main()
{
	const int a = 10; //只读变量
	int b = 20;
	//const int *const p = &a;
	int *p = &a;

	//a = 100;
	//*p = 200;
	//p = &b;
}

/*
char* my_strstr(const char *str1, const char *str2)
{}

void main()
{
	char *S = "abacabcbabbabcad";
	char *T = "abca";

	char *res = my_strstr(S, T);
	if(res != NULL)
		printf("res = %s\n", res);
	else
		printf("res = 不存在.\n");
}
*/