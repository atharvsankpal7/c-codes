#include <stdio.h>
typedef struct employee
{
    int a;
    char b[1000];
    float c;
} em;
int main()
{
    em e[5];
    printf("Enter the information of employees ==>\n");
    for (int b = 1; b < 6; b++)
    {
        printf("Enter the code of employee%d: ", b);
        scanf("%d", &e[b].a);

        printf("Enter the name of employee%d: ", b);
        scanf("%s", &e[b].b);

        printf("Enter the salary of employee%d: ", b);
        scanf("%f", &e[b].c);
    }

    for (int b = 1; b < 6; b++)
    {
        printf("%d)NAME : %s\n CODE : %d\n SALARY : %f\n",b,e[b].b,e[b].a,e[b].c);
    }

    return 0;
}