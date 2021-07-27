#include<stdio.h>
#include<string.h>
int main()
{
   long k,min,max,cnt[10]={0};
   char str[9];
   int i;

   printf("please input min number:\n");
   scanf("%d",&min);
   printf("please input max number:\n");
   scanf("%d",&max);
   if(min>max) printf("error");
   for(k=min;k<=max;k++)
   {
      sprintf(str,"%8d",k);
      for(i=7;i>=0&&str[i]!=' ';i--)
      {
         cnt[str[i]-'0']++;
      }
   }
   for(int i=0;i<10;i++)
   {
      printf(" %d:%d次",i,cnt[i]);
      if(i==4) puts("");
   }
   puts("");
   return 0;
}