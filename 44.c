#include <stdio.h>
int main()
{
    int n = 5;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; (a + b) <= n; b++)
        {
            printf(" ");
        }
        for (int c = 1; c <= 2 * a - 1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}