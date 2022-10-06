#include <stdio.h>
int main()
{
    int n = 4;
    for (int a = 1; a <= n; a++)
    {
        for (int b = n; b >= a; b--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}