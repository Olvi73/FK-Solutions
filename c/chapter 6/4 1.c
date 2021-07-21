#include<stdio.h>
int main()
{
    int i=2;
    int sum=0;
    for(i;i<=100;i+=2) 
    {
        printf("%d ",i);   
        sum+=i;
    }
    printf("\nsum:%d",sum);
    return 0;
}