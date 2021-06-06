#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
        printf("enter your age\n");
        scanf("%d", &age);
        if (age>18)
        {
            continue;
        }printf("you can't vote\n");
    }

    return 0;
}