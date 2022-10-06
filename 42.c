#include <stdio.h>
int main()
{
    int n = 6;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            int d = a + b;
            if (d <= n)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}