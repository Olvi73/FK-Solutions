// Created on 带我到温柔的默片时代.

#include <stdio.h>
#include <memory.h>
#include <string.h>

int main() {
   // printf() displays the string inside quotation
   char a=10;
   int b[20];
   b[10]=3;
   printf("%d",b[a]);
   short c[10];
   memset(c,2,10*sizeof(short));
   int i=0;
   for(i=0;i<10;i++)
      printf("%d\n",c[i]);
   return 0;
}