#include <stdio.h>
#include <string.h>
#include <windows.h>

void magenta()
{
    printf("\033[1;35m");
}

void yellow()
{
    printf("\033[1;33m");
}

void reset()
{
    printf("\033[0m");
}

int main()
{
    int i, j, n;
    char name[50];
    int len;
    char q[]="%c";
    yellow();

    printf("Enter your's soulmate name: ");
    gets(name);

    printf("Enter value of n : "); //n should be two digits no. for better result 10<n<30
    scanf("%d", &n);

    len = strlen(name);

    //for blinking text
    for (int l = 0; l < 100; l++)
    {
    // Print upper part of the heart shape
    for (i = n / 2; i <= n; i += 2)
    {

        for (j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            magenta();
            printf(q,3);
        }

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            magenta();
            printf(q,3);
        }

        printf("\n");
    }

    // Prints lower triangular part of the pattern
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        // Print the name
        if (i == n)
        {
            for (j = 1; j <= (n * 2 - len) / 2; j++)
            {
                magenta();
                printf(q,3);
            }
            yellow();

            printf("%s", name);

            for (j = 1; j < (n * 2 - len) / 2; j++)
            {
                magenta();
                printf(q,3);
            }
        }
        else
        {
            for (j = 1; j <= (i * 2) - 1; j++)
            {
                magenta();
                printf(q,3);
            }
        }

        printf("\n");
        reset();
    }
        Sleep(500);
        system("cls");//to clear the screen
        Sleep(500);
    }
    return 0;
}
