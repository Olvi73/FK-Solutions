#include<stdio.h>
int main()
{
    int sec;
    scanf("%d",&sec);
    int day,hour,m,s;
    day=sec/(60*60*24);
    sec-=day*(60*60*24);
    hour=sec/3600;
    sec-=hour*3600;
    m=sec/60;
    sec-=60*m;
    s=sec;
    printf("day:%d,current time: %02d:%02d:%02d\n",day,hour,m,s);
    return 0;
}