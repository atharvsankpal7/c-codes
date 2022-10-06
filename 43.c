#include <stdio.h>
int main()
{
    int n = 5;
    int m = (2 * n) - 1;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; (a + b) <= n; b++)
        {
            printf(" ");
        }
        for (int c = 1; c <= a; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}