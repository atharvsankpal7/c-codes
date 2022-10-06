#include <stdio.h>
int main()
{
    float a, b;
    char c;
    printf("Enter the sign of the operation ==>\n");
    scanf("%c", &c);
    printf("Enter the value of the two numbers ==>\n");
    scanf("%d%d", &a, &b);

    switch (c)
    {
    case '+':
    {
        printf("The addition of these two numbers is %f", a + b);
        break;
    }
    case '-':
    {
        printf("The substraction of these two numbers is %f", a - b);
        break;
    }
    case '*':
    {
        printf("The multiplication of these two numbers is %f", a * b);
        break;
    }
    case '/':
    {
        printf("The division of these two numbers is %f", a / b);
        break;
    }
    default:
    {
        printf("Error!!!");
    }
    }
    return 0;
}