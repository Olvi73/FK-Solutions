#include <stdio.h>
void f(int i){
    printf("%d,%d,%d,%d\n", i, i++, i++, i++);
}
void f2(int i){
    printf("%d,%d,%d,%d\n", i, i++, ++i, ++i);
}
int main(void)
{
    int i = 1;
    int a=1;
    f(i);
    f2(i);
    return 0;
}