#include <stdio.h>
int main()
{
    int n, a[100], max, result[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int c = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] = a[j])
                {
                    c++;
                    a[j] = -1;
                }
            }
            result[i] = c;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            for (int j = 1; j < n; j++)
            {
                int max = a[0];
                if (result[j] > max)
                {
                    max = result[j];
                }
            }
        }
    }
    printf("%d\n", max);

    return 0;
}
