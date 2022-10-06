#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct employee s1[5];
    for (int a = 0; a < 5; a++)
    {
        printf("Enter the name of the employee -->\n");
        scanf("%s", &s1[a].name);
        printf("Enter the code of the employee-->\n");
        scanf("%d", &s1[a].code);
        printf("Enter the salary of the employee-->\n");
        scanf("%f", s1[a].salary);
    }
    for (int a = 0; a < 5; a++)
    {
        printf("The salary of the employee having name %s and code %d is %f\n", s1[a].name, s1[a].code, s1[a].salary);
    }
    return 0;
}