#include <stdio.h>
// #include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee s1;
    s1.code = 100;
    s1.salary = 120000.36;
    strcpy(s1.name, "chom");
    printf("the name of the employee is %s  the code and salary of the employee is %d and %f ", s1.name, s1.code, s1.salary);
    return 0;
}