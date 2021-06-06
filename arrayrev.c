// #include <stdio.h>
// // reverse of array
// int rev(int arr[])
// {
//     for (int j = 4; j>=0 ; j--)
//     {
//         printf("%d,", arr[j]);
//     }

// }

// int main()
// {
//     int arr[] = {2, 4, 6, 1, 78};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d,", arr[i]);
//     }printf("\n");
//     rev(arr);

//     return 0;
// }






// reverse of 2D array
#include <stdio.h>

int reverse(int arr[2][4])
{
    for (int  i= 0; i < 2; i++)
    {
        for (int j = 3; j >= 0; j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[2][4] = {{23, 45, 77, 22},
                     {83, 33, 5, 2} };

    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 4; l++)
        {
            printf("%d ", arr[k][l]);
        }
        printf("\n");
    }printf("\n");
    reverse(arr);

    return 0;
}












