#include <stdio.h>
// this is wild pointer
int main()
{
    int a=4;
    int *ptr;
    ptr=&a;
    printf("the value of ptr is %d",*ptr);
    return 0;
}