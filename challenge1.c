#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    char s2[20];

    gets(s1);
    gets(s2);
    
    printf("%s and %s are true friends\n",s1,s2);

    return 0;
}