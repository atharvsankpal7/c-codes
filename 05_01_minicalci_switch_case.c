#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the value of two numbers -->");
    scanf("%d%d", &a, &b);
    printf("Enter the number respective of the operation -->\n1=>addition \n2=>substraction \n3=>multiplication \n4=>division\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("The addition of these two numbers is -->%d", a + b);
        break;
    case 2:
        printf("The substraction of these two numbers is -->%d", a - b);
        break;
    case 3:
        printf("The multiplication of these two numbers is -->%d", a * b);
        break;
    case 4:
        printf("The division of these two numbers is -->%d", a / b);
        break;

    default:
        printf("Error!!!");
        break;
    }
    return 0;
}