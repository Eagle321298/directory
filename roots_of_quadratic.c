#include <stdio.h>
int main()
{
    double a, b, c, root1, root2, discriminant, real_part, imaginary_part;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("enter value of %lf %lf %lf\n", a, b, c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("%.2lf\n%.2lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("%.2lf %.2lf", root1, root2);
    }
    else
    {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real_part, imaginary_part, real_part, imaginary_part);
    }

    return 0;
}
