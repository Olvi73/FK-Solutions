#include<stdio.h>
#include<string.h>
const int N=100;
int main()
{
    char str[N];
    int i;
    puts("input string:");
    //gets(str);
    //warning the 'gets' function is dangerous and should not be used.
    //scanf("%s",str);
    scanf("%[^\n]",str);
    puts("reverse string:");
    for(i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}