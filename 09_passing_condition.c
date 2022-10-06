#include <stdio.h>
int main()
{
    int a;
    printf("Enter the marks of the student -->");
    scanf("%d", &a);
    if (a >= 75 && a <= 100)
    {
        printf("The student has passed with destinction");
    }
    if (a < 74 && a >= 65)
    {
        printf("The student has passed with first class");
    }
    if (a < 64 && a >= 55)
    {
        printf("The student has passed with second class ");
    }
    if (a >= 35 && a < 54)
    {
        printf("The student has passed");
    }
    if (a < 0)
    {
        printf("Please enter the positive marks");
    }
    if (a > 100)
    {
        printf("please enter the marks below hundred");
    }
    if (a < 35 && a > 0)
    {
        printf("The student has failed");
    }

    return 0;
}