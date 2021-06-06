#include <stdio.h>
int main()
{
label:
    printf("we are at label\n");
    goto end;

    printf("DEAR GODFATHER\n");
    goto label;
end:
    printf("we are at end\n");
    
    return 0;
}
