#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[50];
} emp;
void fis(emp e1)
{
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 100.21325;

    strcpy(ptr->name, "Atharv");
    // printf("%d\n", e1.code);
    // printf("%f\n", e1.salary);
    // printf("%s\n", e1.name);
    fis(e1);
    return 0;
}