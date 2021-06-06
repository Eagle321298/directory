#include <stdio.h>
#define pi 5.56
int main()
{
    #undef pi      //tells compiler to undefine the value of pi
    #define pi 2.4 //to pi 2.4
    #ifdef pi      //ifdef is used to cheak wheather macros is define or not if yes then statement become true
    printf("the value of pi is %.2f\n", pi);
    #else          //is used to cheak wheather macros is not defined then statement become true

    printf("dont know wht is pi\n");
    #endif
    printf("DEAR GODFATHER\n");

    return 0;
}