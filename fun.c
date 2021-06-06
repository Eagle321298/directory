#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    char str2[10];
    int store[10];

    scanf("%s%s", &str1, &str2);

    for (int i = 0; i < strlen(str1); i++)
    {
        for (int j = 0; j < strlen(str2); j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = 9;
                str1[i] = 9;
                break;
            }
            else
            {
                store[i] = i + 1;
                printf("%d\n", store[i]);
            }
        }
    }
    for (int j = 0; j < strlen(str2); j++)
    {
        for (int i = 0; i < strlen(str1); i++)
        {
            if (str2[j] != str1[i])
            {
                store[j] = j + 1;
                printf("%d\n", store[j]);
            }
        }
    }

    return 0;
}