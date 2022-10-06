#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers -->\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && c > b)
    {
        printf("%d is largest number\n", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is largest number\n", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is largest number\n", c);
    }
    return 0;
}