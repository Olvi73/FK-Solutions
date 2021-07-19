#include<stdio.h>

void swap(int *a,int *b)
{
    int *t;
    *t=*a;
    *a=*b;
    *b=*t;
}
int main(void)
{
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("num1:%d num2:%d num3:%d\n",num1,num2,num3);
    if(num1>num2) swap(&num1,&num2);
    if(num1>num3) swap(&num1,&num3);
    if(num2>num3) swap(&num2,&num3);
    printf("num1:%d num2:%d num3:%d",num1,num2,num3);
    return 0;
}