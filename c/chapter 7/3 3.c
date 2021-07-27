#include<stdio.h>
int main()
{
    int a[10]={0};
    int index1,index2;
    int max,min;
    int i,t;
    printf("before:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)    
            max=a[0],min=a[0],index1=0,index2=0;
        if(a[i]>max) max=a[i],index1=i;
        if(a[i]<min) min=a[i],index2=i;
        printf("%d ",a[i]);
    }    
    printf("\n");
    t=a[index1];
    a[index1]=a[index2];
    a[index2]=t;
    printf("after:");
    for(i=0;i<10;i++) printf("%d ",a[i]);     
    return 0;
}