// Created on 附近一群猪🐷.
#include<stdio.h>
int cnt=0;
void hanoi(int n,char A,char B,char C);
void move(char x,char y);
int main()
{
   int n;
   printf("input the number of diskes:\n");
   scanf("%d",&n);
   printf("the step to moving %d diskes:\n",n);
   hanoi(n,'A','B','C');
   return 0;
}

void hanoi(int n,char A,char B,char C)
{
   if(n==1) move(A,C);
   else
   {
      hanoi(n-1,A,C,B);
      hanoi(1,A,B,C);
      hanoi(n-1,B,A,C);
   }
}

void move(char x,char y)
{
   printf("%c----->%c count:%d\n",x,y,cnt++);
}