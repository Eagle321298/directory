#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = {"Rutika "};
    char s2[34];
    // strcpy is used to copy s1 in s2
    puts(strcpy(s2, s1));

    return 0;
}