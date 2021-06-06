#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomnumber(int n)
{
    srand(time(NULL));
    return rand() %n;
}
int main()
{   
    printf("The random number between 0 to 200 is %d\n",randomnumber(200));
    
    return 0;
}