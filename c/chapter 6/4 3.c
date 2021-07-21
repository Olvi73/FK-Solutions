/*
双重循环版本
*/
/*
#include<stdio.h>
int main()
{
    int sum=0;
    int i=1;
    for(i;i<=10;i++)
    {
        int temp=i;
        int t=1;
        while(temp)
        {
            t*=temp;
            temp--;
        }
        sum+=t;
        printf("t:%d, sum:%d\n",t,sum);
    }
    printf("final sum:%d\n",sum);
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int sum=0;
    int pre=1;
    int i=1;
    for(i;i<=10;i++)
    {
        sum+=pre*i;
        pre*=i;
    }
    printf("final sum:%d",sum);
    return 0;
}