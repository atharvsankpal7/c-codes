#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee s1 = {10, 120000, " atharv"}; // the declaration should be in the way the the structure is declared
    struct employee s2 = {0};                     // This makes every elements in the perticular structure 0
    printf("The name of the employee is %s \nThe code of the employee is %d \nThe salary of the employee is %f \n", s1.name, s1.code, s1.salary);
    printf("The name of the employee is %s \nThe code of the employee is %d \nThe salary of the employee is %f \n", s2.name, s2.code, s2.salary);
    return 0;
}