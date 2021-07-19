#include<stdio.h>
int main(void)
{
    printf("*****Time*****\n");
    printf("1     morning\n");
    printf("2     afternoon\n");
    printf("3     night\n");
    printf("Please enter your choice:\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Good morning");break;
        case 2: printf("Good afternoon");break;
        case 3: printf("Good night");break;
        default: printf("Selection error!");
    }
    return 0;
}