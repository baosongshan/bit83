#include<stdio.h> //
#include<stdlib.h>



void main()
{
	int start, end;
	int sum;
	printf("input start and end:>");
	scanf("%d %d", &start, &end);
	//  1       10
	//start    end
	while(start <= end)
	{
		sum = sum + start;
		start++;
	}
	printf("sum = %d\n", sum);
}


/*
//Linux

int main()
{
	int a = 0;
	printf("%d %d %d %d\n", a++, ++a, a++, ++a); // 可移植性
	//      2  2   1  1
	//         3   1  1
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


/*
int main()
{
	int a = 0;
	int v = ++a; //
	printf("v = %d\n", v);
	printf("a = %d\n", a);
	return 0;
}



int main()
{
	int a = 0;
	       //1      1
	int v = (a++)+(a++)+(++a); //

	printf("v = %d\n", v); //0
	printf("a = %d\n", a); //3
	
	return 0;
}


int main()
{
	int a = 0;
	       //1      1
	int v = (a++)+(++a); //

	printf("v = %d\n", v); //1
	printf("a = %d\n", a); //2
	
	return 0;
}

/*
int main()
{
	int a = 0;
	int v = (++a)+(a++); //

	printf("v = %d\n", v); //1
	printf("a = %d\n", a); //2
	
	      //4
	return 0;
}


int main()
{
	int a = 0;
	int v = (a++)+(a++); //

	printf("v = %d\n", v); //2
	printf("a = %d\n", a); //2
	
	      //4
	return 0;
}

/*
int main()
{
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	printf("%d %d %d %d\n", a++, ++b, c++, ++d); //不然
	      //0  2  2  4
	      //0  1  0  1
	      //0  1  1  2
	      //2  2  1  1
	printf("a = %d\n", a);
	      //4
	return 0;
}


int main()
{
	int a = 0;
	printf("%d %d %d %d\n", a++, ++a, a++, ++a);
	      //0  2  2  4
	      //0  1  0  1
	      //0  1  1  2
	      //2  2  1  1
	printf("a = %d\n", a);
	      //4
	return 0;
}


void main()
{
	//char str[] = "Hello";
	//char ch = 'A';
	//char ch = '1';
	char ch = '\3';
	printf("%c\n", ch); //65
	printf("%d\n", ch);
}
*/