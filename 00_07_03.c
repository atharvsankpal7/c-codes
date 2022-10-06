#include <stdio.h>
int main()
{
    int a, b, c = 1;
    printf("Enter the number factorial has to be found -->");
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        c *= b;
    }
    printf("The factorial of %d is %d", a, c);
    return 0;
}