#include <stdio.h>
int main()
{
    int t, arr[100], b, result = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf(" %c", &b);
    if (b == 'b')
    {
        for (int i = 0; i < t; i += 2)
        {
            result = arr[i] + result;
        }
        printf("%d\n", result);
    }
    else if (b == 'g')
    {
        for (int i = 1; i < t; i += 2)
        {
            result = arr[i] + result;
        }
        printf("%d\n", result);
    }
    

    return 0;
}