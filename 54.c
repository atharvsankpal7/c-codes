#include <stdio.h>
int main()
{
    int n = 5;
    for (int a = n; a > 0; a--)
    {
        for (int b = 0; (a + b) <= 5; b++) // condition can be this b <= (n - a) or this (a + b) <= 5
        {
            printf(" ");
        }
        for (int c = a; c > 0; c--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}