#include <stdio.h>
int main()
{
    int c;
    printf("Enter the height of triangle -->");
    scanf("%d", &c);
    for (int a = 0; a <= c; a++)
    {
        for (int b = 0; b < a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}