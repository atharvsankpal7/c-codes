#include <stdio.h>
int main()
{
    char c;
    printf("Enter the sign for the operation -->\n");
    scanf("%c", &c);
    double a, b;
    printf("Enter both the numbers -->\n");
    scanf("%lf%lf", &a, &b);
    switch (c)
    {
    case '+':
    {
        printf("The addition of these two numbers is --> %lf", a + b);
        break;
    }
    case '-':
    {
        printf("The subtraction of these two numbers is --> %lf", a - b);
        break;
    }
    case '*':
    {
        printf("The multiplication of these two numbers is --> %lf", a * b);
        break;
    }
    case '/':
    {
        printf("The division of these two numbers is --> %lf", a / b);
        break;
    }
    default:
    {
        printf("Please enter the valid choice\n");
    }
    }

    return 0;
}