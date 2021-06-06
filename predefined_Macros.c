#include <stdio.h>

int main()
{   
    printf("Today's date:%s\n",__DATE__);
    printf("Time:%s\n",__TIME__);
    printf("LIne no. is %d\n",__LINE__);
    printf("file name is %s\n",__FILE__);
    printf("ANSI:%d\n",__STDC__);
    
    return 0;
}