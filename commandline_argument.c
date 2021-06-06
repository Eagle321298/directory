#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("the value of argv at index %d : %s\n",i,argv[i]);
    }
    // command line arguments are nothing but simply arguments that are specified after the name of the program in the system's command line, and these argument values are passed on to your program during program execution
    return 0;
}
