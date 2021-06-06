#include <stdio.h>
#define PI 3.14
#define CIRCLE(r) r*r

//if we take PI other value inside curly bracket then it will give an error bcz #define is preprocessing command which is always constant
int main()
{
    int r = 4;
    printf("%3.2f\n", PI);
    printf("Area of circle %.2f", PI * CIRCLE(r));
    return 0;
}




