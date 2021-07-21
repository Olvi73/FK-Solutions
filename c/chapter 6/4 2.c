#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    for(i;i<=99;i+=2)
    {
        sum+=i*(i+1)*(i+2);
        printf("%d sum:%d\n",i,sum);
    }
    printf("\nsum:%d",sum);
    return 0;
}