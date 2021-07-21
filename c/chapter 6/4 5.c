#include<stdio.h>
int main()
{
    float up=2.0,low=1.0;
    int i;
    float ans=1.0;
    for(i=0;i<100;i++)
    {
        printf("up:%f,low:%f\n",up,low);
        ans*=up/low;
        if(i%2==0)
            low+=2;
        else up+=2;
    }
    printf("pi=2*ans=%f\n",ans*2.0);
    return 0;
}