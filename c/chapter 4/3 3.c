#include<stdio.h>
#define pi 3.14

int main()
{
    float c,s; //周长 面积
    float r;
    scanf("%f",&r);
    printf("周长：%f，面积：%f\n",r*pi*2,r*r*pi);
    return 0;
}