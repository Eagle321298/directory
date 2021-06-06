#include <stdio.h>
// indirect way of calling global variable
int myfunc()
{
    static int myvar;
    myvar++;
    return myvar;
}

int main()
{   
    printf("the value of myvar is %d\n",myfunc());
    printf("the value of myvar is %d\n",myfunc());
    printf("the value of myvar is %d\n",myfunc());
    printf("the value of myvar is %d\n",myfunc());
     
    return 0;
}