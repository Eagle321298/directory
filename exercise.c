#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a;
    char *ptr;

    printf("No. of Employee:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Employee :%d\n", i);
        printf("Enter no. of character in your id:");
        scanf("%d", &a);
        ptr = (char *)malloc((a + 1) * sizeof(char));
        printf("Enter the Id:\n");
        scanf("%s", &ptr);
    }

    return 0;
}