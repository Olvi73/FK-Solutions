#include<stdio.h>
int main()
{
    int x;
    int temp;
    int sum=0;
    scanf("%d",&x);
    x= x>0?x:-x;
    temp=x;
    while(temp)
    {
        sum+=temp%10;
        temp/=10;
    }
    printf("sum:%d",sum);
    return 0;
}