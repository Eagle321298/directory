#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("enter the number of which you want convertion\n");

    printf("1.kms to m\n2.miles to kms\n3. inches to m\n4.pounds to kgs\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        scanf("%f", &b);
        printf("%f km to m are %f", b, b * 1000);
        break;
    case 2:
        scanf("%f", &b);
        printf("%f miles to kms are %f: ", b, b * 1.609344);
        break;
    case 3:
        scanf("%f", &b);
        printf("%f inches to m are %f: ", b, b * 0.0254);
        break;
    case 4:
        scanf("%f", &b);
        printf("%f pounds to kgs are %f: ", b, b * 0.454);
    default:
        break;
    }

    return 0;
}
