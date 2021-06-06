#include <stdio.h>
#include <string.h>

struct drivers
{
    char name[9];
    int driving_licence_no;
    char route[12];
    char experience[20];
};

int main()
{
    int n;
    struct drivers t;
    scanf("%d", &n);
    while (n > 0)
    {
        printf("Name:");
        scanf("%s", &t.name);

        printf("Driving Licence No.:\n");
        scanf("%d", &t.driving_licence_no);

        printf("route:\n");
        scanf("%s",t.route);

        printf("Experience:\n");
        scanf("%s",t.experience);
        n--;
    }

    return 0;
}