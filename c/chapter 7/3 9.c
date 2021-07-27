#include<stdio.h>
#define N 80
int main()
{
    char s1[N];
    char s2[]="abcd\0nothere";
    int i=0;
    while(1)
    {
        s1[i]=s2[i];
        if(s2[i]=='\0')
            break;
        i++;
    }
    printf("the copy str:%s",s1);
    return 0;
}