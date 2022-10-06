#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the 2 numbers -->\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d is greater than the %d", a, b);
    }
    if (a < b)
    {
        printf("%d is greater than the %d", b, a);
    }

    return 0;
}