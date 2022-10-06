#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee s1, s2;
    struct employee *ptr, *xd;
    ptr = &s1;
    xd = &s2;
    (*ptr).code = 101; // any of these methods can be used for assigning the pointer for the structure.
    xd->code = 102;
    printf("The value of the s1 code is -->%d\n", s1.code);
    printf("The value of the s1 code is -->%d\n", s2.code);
//  this is just me typing you know
    return 0;
}
