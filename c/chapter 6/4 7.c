#include<stdio.h>
int main()
{
    int i;
    int a,b,c;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        //printf("a:%d,b:%d,c:%d\n",a,b,c);
        if(i==a*a*a+b*b*b+c*c*c)printf("%d \n",i);
    }
    return 0;
}
/*
整数拆分
num=n%10; 得到个位
n/=10; 缩小十倍
*/