#include <stdio.h>
int main()
{
    int n = 10;
    int c = n / 2;
    for (int a = 1; a <= n; a++)
    {
        if (a <= c)
        {
            for (int b = 1; b <= a; b++)
            {
                printf("* ");
            }
        }
        else  
        {
            for (int b = n-a-1; b >= 0; b--)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}