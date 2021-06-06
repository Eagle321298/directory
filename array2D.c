#include <stdio.h>

int main()
{
    int marks[2][4] = {{23, 34, 566, 234},
                       {34, 56, 12, 998}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("The element in %d,%d is %d\n", i, j, marks[i][j]);
            printf("%d  ",marks[i][j]);//to get ans in matrix form

        }printf("\n");//for line spacing after 1st row
    }

    return 0;
}
