#include <stdio.h>
#include <string.h>
int main()
{
    // char s1[] = {"Rutika"};
    // char s2[] = {"Rutika"};

    // case 2 -
    // char s1[] = {"Rutika"};
    // char s2[] = {"Bhuimbar"};

    // case 3 -
    // char s1[] = {"A"};
    // char s2[] = {"Bhuimbar"};

    // char s1[] = {"Bhuimbar"};
    // char s2[] = {"bhuimbar"};

    char s1[] = {"bhuimbar"};
    char s2[] = {"Bhuimbar"};

    // char s1[] = {"+"};
    // char s2[] = {"+"};

    printf("%d", strcmp(s1, s2));

    return 0;
}