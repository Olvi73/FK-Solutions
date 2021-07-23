#include<stdio.h>
int main()
{
    int i,j;
    int n=5;
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<i;j++)
            printf("  ");
        for(j=0;j<n-i*2;j++)
            printf("* ");
        for(j=0;j<i;j++)
            printf("  ");
        printf("\n");
    }
    for(i=0;i<n/2;i++)
    {
        printf("  ");
    }
    printf("* \n");
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<(n/2)-i-1;j++)
            printf("  ");
        for(j=0;j<3+2*i;j++)
            printf("* ");
        for(j=0;j<(n/2)-i-1;j++)
            printf("  ");
        printf("\n");
    }
    return 0;
}