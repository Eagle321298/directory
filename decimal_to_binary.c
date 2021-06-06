#include <stdio.h>
int main()
{
    int d, arr[110], n = 0, org;
    printf("Enter decimal number:");
    scanf("%d", &d);
    org = d;
    while (d >= 1)
    {
        d = d / 2;
        n++;
    }
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = org % 2;
        org = org / 2;
    }
    printf("Binary number:");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}