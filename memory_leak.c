#include <stdio.h>
#include <stdlib.h>


// this is rrrreallly awesome, to cheak how does memory leak happend refer video, can't explain it in word
int main()
{
    int i = 0;
    int *i2;
    while (i < 23302)
    {
        printf("The DEAR GODFATHER\n");
        i2=malloc(2324*sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        free(i2);
        //first of all run code without free function and notice how much memory allocate by program during loop but if we add free function memory get free after use of variable
        i++;
    }

    return 0;
}