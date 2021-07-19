#include<stdio.h>
int main(void)
{
    int year,month=0;
    scanf("%d%d",&year,&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31天\n");break;
        case 4:
        case 6:
        case 9:
        case 11: printf("30天\n");break;
        case 2: if(year%4==0&&year%100!=0||year%400==0) printf("29天");
                else printf("28天");break;
        default: printf("输入错误！");break;
    }

    return 0;
}