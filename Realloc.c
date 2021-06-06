#include <stdio.h>
#include <stdlib.h>

// use of calloc
int main()
{
    int *ptr;
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i <= n; i++)
    {
        printf("The value of array at %d is\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("entered value of array at %d is %d\n", i, ptr[i]);
        printf("value of address at %p is %d", ptr + i, i);
    }
    printf("\n");

    // use of realloc
    // we can increase size of array by using realloc function

    printf("enter the size New of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i <= n; i++)
    {
        printf("The value of array at %d is\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("entered value of array at %d is %d\n", i, ptr[i]);
        printf("value of address at %p is %d", ptr + i, i);
    }

    return 0;
}
