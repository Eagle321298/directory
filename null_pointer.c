#include <stdio.h>
int main()
{
    int *ptr = NULL;
    printf("the value of ptr is %d\n",ptr);
    // value of null pointer is 0
    // printf("the value of  ptr is %d\n",*ptr);
    if (ptr != NULL)
    {
        printf("the value of ptr is %d\n", ptr);
    }
    else
    {
        printf("the pointer is null pointer and can not be dereferece\n");
    }
    int a = 3;
    int *ptr1 = &a;
    
    printf("the value of ptr1 is %d\n", *ptr1);
    if (ptr1 != NULL)
    {
        printf("the value of ptr1 is %d\n", *ptr1);
    }
    else
    {
        printf("the pointer is null pointer and can not be dereferece");
    }

    return 0;
}