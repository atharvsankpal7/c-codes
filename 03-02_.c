#include <stdio.h>
int main()
{
    int n = 5;
    int c = 2 * n - 1;
    for (int a = 1; a <= c; a++)
    {
        if (a <= n)
        {
            for (int b = 1; b <= a; b++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int b = c - a; b >= 0; b--)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}