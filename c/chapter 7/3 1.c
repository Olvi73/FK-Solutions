#include<stdio.h>
int main()
{
    int a[25];
    int i;
    int sum,cnt=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            cnt++;
            sum+=a[i];
        }
    }
    printf("非负个数：%d ,sum:%d\n",cnt,sum);
    return 0;
}