#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{   
    printf("the sum of 1 and 2 is %d\n",sum(1,2));
    
    // calling function by function pointer
    int (*ptr)(int, int);//declaring function pointer
    ptr=&sum;
    int d = (*ptr)(3, 6);//derferencing function pointer
    printf("The sum is %d", d);

    return 0;
}