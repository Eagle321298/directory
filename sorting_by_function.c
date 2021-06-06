#include <stdio.h>
#include <stdlib.h> //for qsort function this library is needed
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); //returned value cheak wheather a is come before or after the b
}
//The comparator function takes two void pointers, a and b, as arguments and returns their difference; this is how qsort() determines which element is smaller, or larger, than the other. 
int main()
{    int t, arr[10000];
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, t, sizeof(int), cmpfunc);
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", arr[i]);
    }

    return (0);
}

