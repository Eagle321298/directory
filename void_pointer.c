#include <stdio.h>

int main()
{   int a=5;
    float b=36.6;
    int c=43;

    void *ptr;
    ptr=&a;
    printf("The value of ptr is %d\n",(*(int*)ptr));
    ptr=&b;
    printf("The value of ptr is %0.1f\n",(*(float*)ptr));
    ptr=&c;
    printf("The value of ptr is %d",(*(int*)ptr));

    
    // as it is void ptr, then we can not dereference it directly it can be done only after typecasting that we have done by(*(int*)ptr),if we in simple pointer programme then just by putting *ptr in printf function we can get value of a
    // by using void ptr we can call multiple variables in single ptr 


    return 0;
}