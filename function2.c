#include <stdio.h> 
//with argument and without return value
// C functions are used to avoid rewriting same logic/code again and again in a program.
// There is no limit in calling C functions to make use of same functionality wherever required.
// We can call functions any number of times in a program and from any place in a program.


void printstar(int n)
{for(int i = 0; i <n; i++)
{
    printf("%c",'*');
}
}

int main()
{
    printstar(8);
    return 0;
}
