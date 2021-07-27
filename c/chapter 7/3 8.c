#include<stdio.h>
#include<string.h>
#define N 80
int main()
{
    char str[N],strtemp[N];
    int i,cnt=0;
    scanf("%[^\n]",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!='c')strtemp[cnt++]=str[i];
    }
    strcpy(str,strtemp);
    printf("%s",str);
    return 0;
}