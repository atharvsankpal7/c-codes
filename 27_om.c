#include <stdio.h>
int factorial(int a)
{

    if (a == 0)
    {
        return 1;
    }
    else
    {
        printf("calling factorial %d\n", a);
        int value = a * factorial(a - 1);
        return value;
    }
}

int main()
{
    int x;
    printf("Enter the number ");
    scanf("%d", &x);

    printf("%d", factorial(x));

    return 0;
}