#include<stdio.h>
int main()
{
    int a[5][5];
    int i,j;
    int sum1=0,sum2=1;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            {
                scanf("%d",&a[i][j]);
                if(i==j||j==4-i) 
                {
                    if(i%2==0&&j%2==0) sum2*=a[i][j];
                    sum1+=a[i][j];
                }
            }
    printf("sum1:%d,sum2:%d\n",sum1,sum2);
    return 0;
}
/*
7 2 7 4 8
9 3 5 7 4
8 3 5 6 7
4 8 5 3 5
2 4 8 9 1
*/