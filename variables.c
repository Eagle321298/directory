#include <stdio.h>
// difference between local and global variables
int b=45; 
// this is global variable

int fun(int b)
{
    return b * 10;
}

int main()
{
     int b = 34;
    // this is local variable
    // if both local and global variables are present, then only local variables is dominant
    printf("%d\n", fun(b));

    return 0;
}