#include <stdio.h>

int main()
{
    int n;
    printf("what is number?-->");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("the given number is positive");
    }
    else
    {
        printf("the given number is negative");
    }

    return 0;
}