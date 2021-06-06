#include <stdio.h>
#include <stdlib.h>

// use of malloc

int main()
{
    int *ptr;
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d", &n);
    ptr = malloc(n * sizeof(int));
    for (int i = 0; i <= n; i++)
    {
        printf("The value of array at %d is\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("entered value of array at %d is %d\n", i, ptr[i]);
    }

    return 0;
}

    // if we didn't give any input then malloc will print any garbage value,while in calloc output will be zero this is common difference between malloc and calloc( comment out 1st for loop in both case then we can analyse difference)



// use of calloc
// int main()
// {
//     int *ptr;
//     int n;
//     printf("enter the size of array you want to create\n");
//     scanf("%d", &n);
//     ptr = (int *)calloc(n, sizeof(int));
//     // for (int i = 0; i <= n; i++)
//     // {
//     //     printf("The value of array at %d is\n", i);
//     //     scanf("%d", &ptr[i]);
//     // }
//     for (int i = 0; i <= n; i++)
//     {
//         printf("entered value of array at %d is %d\n", i, ptr[i]);
//     }

//     return 0;
// }


