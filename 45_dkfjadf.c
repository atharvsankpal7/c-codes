#include <stdio.h>
int main()
{
    int a, b, c, i, j, k;
    printf("Enter the number of row of the matrix one -->\n");
    scanf("%d", &a);
    printf("Enter the number of column of first matrix and number of row of second matrix -->\n");
    scanf("%d", &b);
    printf("Enter the column of second matrix -->\n");
    scanf("%d", &c);
    int arr1[a][b], arr2[b][c], arr3[a][c];
    printf("Enter the elements of first matrix -->\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix -->\n");
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The matrix one is -->\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The matrix two is -->\n");
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            arr3[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                arr3[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }
    printf("The multiplication of these two matrices is -->\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}