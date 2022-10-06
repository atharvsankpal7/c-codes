#include <stdio.h>
int main()
{
    int a, b, i, j;
    int one[2][2], two[2][2];
    printf("Enter the elements in the matrix number one -->\n");
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            scanf("%d", &one[a][b]);
        }
    }
    printf("Enter the elements in the matrix number two -->\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &two[i][j]);
        }
    }
    printf("The matrix one is -->\n");
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            printf("%d\t", one[a][b]);
        }
        printf("\n");
    }

    printf("The matrix two is -->\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", two[i][j]);
        }
        printf("\n");
    }
    printf("The addition of these two matrices is -->\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", one[i][j] + two[i][j]);
        }
        printf("\n");
    }
    return 0;
}