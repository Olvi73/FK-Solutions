#include<stdio.h>
int main()
{
    int i,j;
    int n=5;
    for(i=0;i<5;i++)
    {
        for(j=n;j>i+1;j--)
            printf("  ");
        for(j=0;j<n;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}