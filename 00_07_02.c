#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number whose table has to be found -->");
    scanf("%d", &a);
    for (b = 1; b < 11; b++)
    {
        printf("%d * %d == %d \n", a, b, a * b);
    }
    return 0;
}