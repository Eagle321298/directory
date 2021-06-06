#include <stdio.h>

int main()
{char a;
    printf("enter alphabate:");
    scanf("%c",&a);
    if ((a=='a'|| a=='e' || a=='i' || a=='o' || a=='u') || (a=='A'|| a=='E' || a=='I' || a=='O' || a=='U'))
    {
       printf("The alphabate %c is vowel",a);
    }
    else
    {
        printf("the alphabate %c is not vowel", a);
    }
    


    
    return 0;
}
