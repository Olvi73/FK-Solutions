#include<stdio.h>
int main()
{
    int a[10];
    int b[10];
    int i,j=0;
    int k,temp=0;
    int m,n;
    for(k=0;k<10;k++)
    {
        scanf("%d",&temp);
        if(temp%2==0) b[j++]=temp;
        else a[i++]=temp;
    }
    for(m=1;m<i;m++)
        for(n=0;n<i-1;n++)
        {
            if(a[n]>a[n+1])
            {
                temp=a[n];
                a[n]=a[n+1];
                a[n+1]=temp;
            }
        }
    for(m=1;m<j;m++)
        for(n=0;n<j-1;n++)
        {
            if(b[n]>b[n+1])
            {
                temp=b[n];
                b[n]=b[n+1];
                b[n+1]=temp;
            }
        }
    for(m=0;m<i;m++)
        printf("%d ",a[m]);
    for(m=0;m<j;m++)
        printf("%d ",b[m]);
    return 0;
}