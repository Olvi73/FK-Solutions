#include<stdio.h>
int main()
{
    int a,b,c=1;
    int cnt=0;
    for(a=1;a<100;a++)
        for(b=1;b<100;b++)
            for(c=1;c<100;c++)
            {
                if(a+b+c==100&&5*a+2*b+c==150)
                {
                    printf("5分：%02d 2分：%02d 1分：%02d\n",a,b,c);
                    cnt++;
                }
            }
    printf("cnt:%d",cnt);
    return 0;
}