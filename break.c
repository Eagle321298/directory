#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 5; i++)
    {
        printf("Enter your age\n");
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
    }

    return 0;
}
