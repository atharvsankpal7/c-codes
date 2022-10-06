#include <stdio.h>
int main()
{
    int a, b, c = 1;
    printf("Enter the number whose factorial has to be found -->");
    scanf("%d", &a);
    for (b = a; b >= 1; b--)
    {
        c *= b;
    }
    printf("the factorial of the %d is %d", a, c);
    return 0;
}