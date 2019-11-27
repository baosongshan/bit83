#include<stdio.h>
#include<string.h>

//1、https://www.nowcoder.com/practice/22948c2cad484e0291350abad86136c3?tpId=37&&tqId=21331&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking
// 最小公倍数   [最大公约数]
#include<stdio.h>

int fun(int a, int b)
{
    int k;
    if(a > b)
        k = a;
    else
        k = b;
    while(1)
    {
        if(k%a==0 && k%b==0)
            break;
        k++;
    }
    return k;
}

int main()
{
    int a, b, res;
    scanf("%d %d", &a, &b);
    /////////////////////////////////////
    res = fun(a, b);
    printf("%d", res);
    /////////////////////////////////////
    
    return 0;
}

/*
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    /////////////////////////////////////
    int k = 1;
    while(1)
    {
        if(k%a==0 && k%b==0)
            break;
        k++;
    }
    printf("%d", k);
    /////////////////////////////////////
    
    return 0;
}
*/

//2、https://www.nowcoder.com/practice/ee5de2e7c45a46a090c1ced2fdc62355?tpId=85&&tqId=29867&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking
// 倒置字符串
#include<stdio.h>
#include<string.h>

void Reverse(char *str, int start, int end)
{
    while(start < end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        
        start++;
        end--;
    }
}

void ReverseWord(char *str)
{
    if(str==NULL || *str=='\0' || str[1]=='\0')
        return;
    //1 先完全转置
    int len = strlen(str)-1;
    Reverse(str, 0, len);
    
    int start, end;
    start = end = 0;
    while(str[end] != '\0')
    {
        while(str[end]!=' ' && str[end]!='\0')
            end++;
        Reverse(str, start, end-1);
        start = end+1;
        end++;
    }   
}

int main()
{
    char str[101] = {0};
    //scanf("%s", str);
    gets(str);
    ReverseWord(str);
    printf("%s", str);
    return 0;
}










/*
void Reverse(char *str, int start, int end)
{
    while(start < end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        
        start++;
        end--;
    }
}

int main()
{
    char str[101] = {0};
    //scanf("%s", str);    //i like bit
	gets(str);
    int start = 0;
    int end = strlen(str)-1;
    Reverse(str, start, end);
    printf("%s", str);
    return 0;
}
*/