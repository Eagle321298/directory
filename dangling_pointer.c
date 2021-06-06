#include <stdio.h>
#include <stdlib.h>
int *func1()
{
    int a, b, sum;
    a = 2;
    b = 44;
    sum = a + b;
    return &sum;
}

int main()
{ //case 1:
    int *ptr = (int *)malloc(7 * sizeof(int));
    free(ptr); //ptr is now a dangling pointer

    // case 2:function returning local variable address
    int *ptr1 = func1(); //ptr1 is now a dangling pointer

    // case 3: if variables goes out of scope
    int *ptr2;
    {
        int a = 12;
        ptr2 = &a;
    } //here is variable going out of scope, hence again ptr2 is dangling pointer
    printf("%d\n", *ptr2);
    return 0;
}