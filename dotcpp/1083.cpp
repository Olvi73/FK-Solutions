#include<stdio.h>

int main()
{
    char c;
    int a[100],i=0;

while((scanf("%d",&a[i]))!=EOF)
{

   i++;

}

    for(int j=0;j<i;j++)
      printf("%c",a[j]);

    return 0;
}
