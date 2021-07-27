#include<stdio.h>

int main()
{
    int a[10]={1,3,5,7,9};
    int n,i,mark,temp,t=0;
    puts("input number:");
    scanf("%d",&n);
    for(i=0;a[i]!=0;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(n>a[i]&&n<a[i+1]||n==a[i])
        {
            mark=i+1;
            printf("\nposition is %d\n",mark);
            break;
        }
    }
    temp=a[mark];
    a[mark]=n;
    for(i=mark+1;i<10;i++)
    {
        t=a[i];
        a[i]=temp;
        temp=t;
    }
    for(i=0;a[i]!=0;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}