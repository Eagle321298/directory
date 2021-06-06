// #include <stdio.h>
// // this is method of passing 1D arrays as parameter in function

// int fun(int array[])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("value of array at index %d is %d\n", i, array[i]);
//     }
//     array[0] = 90;
//     // imp pt if you change value of array in fun it will get reflect in main function also
// }

// int main()
// {
//     int arr[] = {23, 45, 67, 87};
//     printf("the values of array at index 0 is %d\n", arr[0]);
//     fun(arr);
//     printf("the value of array at index 0 is %d\n", arr[0]);

//     return 0;
// }
//
//
//
//
//
//
// passing 1D arrays in function by base address

// #include <stdio.h>

// int fun(int *ptra)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("value of array at index %d is %d\n", i, *(ptra+i));
//     }*(ptra + 3)=80;
// }

// int main()
// {
//     int arr[] = {68, 34, 788, 233};
//     printf("the values of array at index 0 is %d\n", arr[0]);
//     fun(arr);
//     printf("the value of array at index 3 is %d\n", arr[3]);

//     return 0;
// }










// 2D arrays
// #include <stdio.h>

// int fun(int arr[4][3])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("the value of array at %d and %d is %d\n", i, j, arr[i][j]);
//         }
//     }
// }

// int main()
// {int arr[4][3]={{34,566,7},
//                 {12,76,869},
//                 {345,21,98},
//                 {21,77,2} };
//     fun(arr);
//     return 0;
// }



// #include <stdio.h>

// int fun(int *ptra)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d, ", *((ptra+i*3)+j));
//         }printf("\n");
//     }
// }

// int main()
// {int arr[4][3]={{34,566,7},
//                 {12,76,869},
//                 {345,21,98},
//                 {21,77,2} };
//     fun(*arr);

//     return 0;
// }