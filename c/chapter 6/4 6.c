#include<stdio.h>
int main()
{
    float x,sum;
    int i=0,cnt=0;
    float tx,ty,tz;
    printf("please input x:\n");
    scanf("%f",&x);
    sum=x;
    tx=x*x*x;
    ty=1*2*3;
    for(i=3;;i+=2)
    {
        tz=tx/ty;
        if(cnt%2==0) 
        {
            sum-=tz;
        }     
        else sum+=tz;
        cnt++;
        tx*=x*x;
        ty*=(i+1)*(i+2);
        if(tz<1e-5) 
        {
            printf("tz:%f\n",tz);
            break;
        }
    }
    printf("sum:%f,cnt:%d",sum,cnt);
    return 0;
}