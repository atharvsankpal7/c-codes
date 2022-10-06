#include <stdio.h>

int main()
{

    int a, b;
    int c, d;
    printf("The value of a is -->");
    scanf("%d", &a);

    printf("The value of b is -->");
    scanf("%d", &b);

    c = a / b;

    printf("The division of this two numbers is  --> %d ",c);

    return 0;
}