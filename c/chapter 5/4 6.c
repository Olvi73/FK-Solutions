#include<stdio.h>
int main(void)
{
    int s,c;
    float p,w; //price weight distance choice
    printf("please input price,weight,distance:\n");
    scanf("%f%f%d",&p,&w,&s);
    float d;
    if(s>=3000) c=12;
    else c=s/250;
    switch(c)
    {
        case 0: d=0;break;
        case 1: d=1;break;
        case 2: 
        case 3: d=5;break;
        case 4:
        case 5:
        case 6:
        case 7: d=8;break;
        case 8:
        case 9:
        case 10:
        case 11: d=10;break;
        case 12: d=15;break;
    }
    float f=p*w*s*(1-d/100.0);
    printf("total cost:%.2f",f);
    return 0;
}