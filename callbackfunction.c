#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void hello(int (*ptr)(int, int))
{
    printf("HEllow Dear\n");
    printf("The sum of 4and 6 is %d\n", ptr(4, 6));
}
void end(int (*ptr)(int, int))
{
    printf("Good morning\n");
    printf("The sum of 4and 6 is %d\n", ptr(4, 6));
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    hello(ptr);

    return 0;
}




// to get an avearge

// #include <stdio.h>
// #include <stdlib.h>
// int avg(int a, int b)
// {
//     return (a + b)/2;
// }
// void hello(int (*ptr)(int, int))
// {
//     printf("HEllow Dear\n");
//     printf("The avearge of 4and 6 is %d\n", ptr(4, 6));
// }
// void end(int (*ptr)(int, int))
// {
//     printf("Good morning\n");
//     printf("The average of 4and 6 is %d\n", ptr(4, 6));
// }
// int main()
// {
//     int (*ptr)(int, int);
//     ptr = avg;
//     hello(ptr);

//     return 0;
// }



