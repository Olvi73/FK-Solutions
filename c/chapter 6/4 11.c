#include<stdio.h>
int main()
{
    int i,sum,flag=0;
    char guy=' ';
    for(i=0;i<=3;i++)
    {
        guy='A'+ i;
        sum=(guy!='A')+(guy=='C')+(guy=='D')+(guy!='D');
        if(sum==3)
        {
            printf("good guy is %c",guy);
            flag=1;
        }
    }
    if(flag==0) puts("Can't found");
    return 0;
}