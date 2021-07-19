#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x!=0)
        x= x>0?1:-1;
    printf("sign:%d",x);
}
