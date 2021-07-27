#include<stdio.h>
int main()
{
    float score[5][4]={{120,130,110,280},{110,120,105,290},{108,128,120,278},{112,135,122,286},{100,120,108,276}};
    float sum,avg;
    char name[5][15]={"张大明","李小红","王志强","汪晓成","李  丹"};
    int i,j;
    puts("姓名     语文    数学    英语    综合    总分   平均分");
    puts("-------------------------------");
    for(i=0;i<5;i++)
    {
        sum=0,avg=0;
        for(j=0;j<4;j++)
        {
            sum+=score[i][j];
        }
        avg=sum/4.0;
        printf("%s %6.f %6.f %6.f %6.f %6.f %8.2f\n",name[i],score[i][0],score[i][1],score[i][2],score[i][3],sum,avg);
    }
    puts("-------------------------------");
    printf("平均分 ");
    for(i=0;i<4;i++)
    {
        sum=0,avg=0;
        for(j=0;j<5;j++)
        {
            sum+=score[j][i];
        }
        avg=sum/5;
        printf("%7.2f ",avg);
    }
    return 0;
}