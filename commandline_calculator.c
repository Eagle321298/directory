#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]); ///atoi is used to get string and convert it into integer
    num2 = atoi(argv[3]);
    if (strcmp(operation, "addition") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtraction") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "division") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}
