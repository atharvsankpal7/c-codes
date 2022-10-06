#include <stdio.h>
int main()
{
    int a, c = 1;
    printf("Enter the number whose factorial has to be found -->");
    scanf("%d", &a);
    for (int b = a; b > 0; b--)
    {
        c *= b;
    }
    printf("%d", c);
    return 0;
}