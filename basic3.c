#include <stdio.h>

int main()
{ int a;
 float b;
    a = 5;
    b = 5.7;

    printf("a&&b = %d\n", a&&b);// if one of two are zero then truth value become false i.e 0
    printf("a||b = %d\n", a||b);// if any value is zero then truth value become true i.e 1
    
    
    return 0;
}