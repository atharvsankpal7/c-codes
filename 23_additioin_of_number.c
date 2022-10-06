#include <stdio.h>
int main()
{
    int a, b = 0, c;
    printf("Enter the number : ");
    scanf("%d", &a);
    while (a != 0)
    {
        b += a % 10;
        a = a / 10;
    }
    printf("%d", b);
    return 0;
}