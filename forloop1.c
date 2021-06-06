#include <stdio.h>

int main()
{
   int i=0,j=1;
   for ( ;i < 7; i++,j++)// here i++ and i=i+1 both are same, both have same meaning
   //expression1 is optional
   //we can initilize more than 1variable in expression 1
   {
       printf("%d %d\n",j,i);
   }
   
    return 0;
}
