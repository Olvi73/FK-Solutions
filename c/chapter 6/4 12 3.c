#include<stdio.h>
int main()
{
    int n=11;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i+1;j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}