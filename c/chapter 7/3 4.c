#include<stdio.h>
int main()
{
    int a[7];
    int i,j;
    int pre=1;
    for(i=1;i<=6;i++) scanf("%d",&a[i]);
    for(i=1;i<=6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d ",a[pre++]);
            if(j==5) pre--;
            if(pre==7) pre=1;
        }
        printf("\n");
    }
    return 0;
}