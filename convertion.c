#include <stdio.h>

int main()
{
    int i;
    float j;
    printf("Enter the number of conversions you want:\n");
    printf(" 0. Quit\n 1. KmsToMiles\n 2. InchesToFoot\n 3. CmsToInches\n 4. PoundsToKgs\n 5. InchesToMeters\n");
    scanf("%d", &i);
    switch (i)
    {
    case 0:
        goto end;

    case 1:
        printf("Print number you want to convert\n");
        scanf("%f", &j);
        printf("%f kms in miles are %f", j, j * 0.621371);
        break;
    case 2:
        printf("Print number you want to convert\n");
        scanf("%f", &j);
        printf("%f inches in foots are %f", j, j * 0.0833333);
        break;
    case 3:
        printf("Print number you want to convert\n");
        scanf("%f", &j);
        printf("%f cms in inches are %f", j, j * 0.393701);
        break;
    case 4:
        printf("Print number you want to convert\n");
        scanf("%f", &j);
        printf("%f pounds in kgs are %f", j, j * 0.453592);
        break;
    case 5:
        printf("Print number you want to convert\n");
        scanf("%f", &j);
        printf("%f inches in meters are %f", j, j * 0.0254);
        break;
    default:
        printf("You have entered a wrong number");    
        break;
    }
end:
    return 0;
}

