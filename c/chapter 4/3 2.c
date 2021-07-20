#include<stdio.h>
int main(void)
{
    int a,b=0;
    scanf("%d%d",&a,&b);
    printf("a:%d,b:%d\n",a,b);
    a+=b;
    b=a-b;
    a=a-b;
    printf("a:%d,b:%d\n",a,b);
    return 0;
}