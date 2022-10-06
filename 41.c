#include <stdio.h>
int main()
{
    int n = 5;
    for (int a = n; a > 0; a--)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}