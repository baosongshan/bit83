#include<stdio.h>
void main()
{
	const int a = 10; //只读变量  常量
	int *p = &a;

	//a = 100;
	//*p  = 200;

	printf("a = %d\n", a);
}
