#include <stdio.h>
int main()
{
    int sum = 0, marks[8] = {35, 98, 89, 78, 99, 87, 56}; //index of 1st no is 0,for 2nd no 1,2,3 so on
    for (int i = 0; i < 8; i++)
    { //scanf("%d",i);
        printf("marks of roll no %d is %d\n", i, marks[i]);
    }
    for (int j = 0; j < 8; j++)
    {
        sum = sum + marks[j];
        
    }printf("Total marks class is %d", sum);

    return 0;
}
