#include <stdio.h>
void star();
void main()
{
    star();
}
void star()
{
    for (int a = 1; a <= 5; a += 2)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}