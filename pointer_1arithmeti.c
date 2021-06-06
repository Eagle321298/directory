#include <stdio.h>
int main()
{
    int arr[] = {21, 54, 34, 645, 23, 75};
    printf("values of first element in array is %d\n", arr[0]);

    printf("address of of 1st element of array is %d\n", arr);
    printf("address of 1st element of array is %d\n", &arr[0]);
    printf("address of 2nd element of array is %d\n", arr + 1);
    printf("address of 2nd element of array is %d\n", &arr[1]);

    printf("value of 1st element is %d\n",(*arr));
    printf("value of 1st element of array is %d\n",*(&arr[0]));
    printf("value of 2nd element is %d\n",*(arr+1));
    printf("Value of 2nd element is %d\n",*(&arr[1]));

    return 0;

}
