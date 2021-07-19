#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>0) printf("正数！");
    else printf("负数！");
    if(a%2==0) printf("偶数！");
    else printf("奇数！");
    return 0;
}