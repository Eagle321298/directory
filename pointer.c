#include <stdio.h>
int main()
{
    int a = 5;
    int *ptra = &a;
    int *ptr2;
    printf("the address of pointers to a is %d\n", ptra);
    printf("the address of pointers to a is %p\n", ptra);
    printf("the address of pointers to a is %p\n",&ptra);
    printf("addres of a is %p\n", &a);
    printf("the vaule of a is %d\n", *ptra);
    printf("the address of some garbage value is %p", *ptr2);

    return 0;
}
