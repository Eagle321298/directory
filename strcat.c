#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = {"Rutika "};
    char s3[] = {"rutika"};
    char s2[] = {"Bhuimbar"};

   printf("%s\n",strcat(s1,s2));
   puts(strcat(s3,s2));
  
//    strcat is used to combined two strings

   
    return 0;
}