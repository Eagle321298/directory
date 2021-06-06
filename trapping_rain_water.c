// #include <stdio.h>

// int find_leftmax(int a[], int n, int i)
// {
//     int leftmax = a[0];
//     for (int j = 1; j <= i; j++)
//     {
//         if (a[j] > leftmax)
//         {
//             leftmax = a[j];
//         }
//     }
//     return leftmax;
// }

// int find_rightmax(int a[], int n, int i)
// {
//     int rightmax = a[0];
//     for (int j = n - 1; j >= i; j--)
//     {
//         if (a[j] > rightmax)
//         {
//             rightmax = a[j];
//         }
//     }
//     return rightmax;
// }

// int min(int leftmax, int rightmax)
// {
//     return (leftmax < rightmax) ? leftmax : rightmax;
// }

// int total_water_trap(int a[], int n)
// {
//     int total_water = 0;
//     for (int i = 1; i < n - 1; i++)
//     {
//         int leftmax = find_leftmax(a, n, i);
//         {
//             int rightmax = find_rightmax(a, n, i);
//             total_water = total_water + min(leftmax, rightmax) - a[i];
//         }
//     }
//     return total_water;
// }

// int main()
// {
//     int a[] = {4, 0, 3, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     printf("The maximum amount of rainwater trapped in between walls is %d",total_water_trap(a,n));

//     return 0;
// }




///********getting input from user******////
#include <stdio.h>

int find_leftmax(int a[], int n, int i)
{
    int leftmax = a[0];
    for (int j = 1; j <= i; j++)
    {
        if (a[j] > leftmax)
        {
            leftmax = a[j];
        }
    }
    return leftmax;
}

int find_rightmax(int a[], int n, int i)
{
    int rightmax = a[n-1];
    for (int j = n - 2; j >= i; j--)
    {
        if (a[j] > rightmax)
        {
            rightmax = a[j];
        }
    }
    return rightmax;
}

int min(int leftmax, int rightmax)
{
    return (leftmax < rightmax) ? leftmax : rightmax;
}

int total_water_trap(int a[], int n)
{
    int total_water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        {
            int leftmax = find_leftmax(a, n, i);
            int rightmax = find_rightmax(a, n, i);
            total_water = total_water + min(leftmax, rightmax) - a[i];
        }
    }
    return total_water;
}

int main()
{
    int a[100],n;
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &a[k]);
    }

    printf("The maximum amount of rainwater trapped in between walls is %d", total_water_trap(a, n));

    return 0;
}