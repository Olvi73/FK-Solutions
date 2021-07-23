#include<stdio.h>
int main()
{
    int x,x1;
    int y=0;
    int i=0;
    scanf("%d",&x);
    x1=x;
    while(x)
    {
        i=x%10;
        y=y*10+i;
        x/=10;
    }
    if(x1==y) puts("YES!");
    else puts("NO!");
    return 0;
}