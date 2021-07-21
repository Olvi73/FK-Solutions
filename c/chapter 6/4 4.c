#include<stdio.h>
int main()
{
    int a,n;
    int sum=0;
    int i,pre=0;
    printf("please input a,n:\n");
    scanf("%d%d",&a,&n);
    for(i=0;i<n;i++)
    {
        pre=pre*10+a;
        sum+=pre;
    }
    printf("a+aa+...+aa..aa(n个a)=%d\n",sum);
    return 0;
}