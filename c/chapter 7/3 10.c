#include<stdio.h>
int main()
{
    char srcStr[]="first string\0testsrc";
    char dstStr[]="second string\0testdst";
    int i,j=0;
    while(1)
    {
        if(dstStr[i]=='\0')
            break;
        i++;
    }
    while(1)
    {
        dstStr[i]=srcStr[j];
        if(srcStr[j]=='\0')
            break;
        j++;
        i++;
    }
    printf("new str:%s",dstStr);
    return 0;
}