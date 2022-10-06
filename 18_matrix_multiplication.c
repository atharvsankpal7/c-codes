#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the row of matrix one -->");
    scanf("%d", &a);

    printf("Enter the column of matrix one and rows of matrix two -->");
    scanf("%d", &b);

    printf("Enter the column of matrix two -->");
    scanf("%d", &c);

    int arr1[a][b], arr2[b][c], arr3[a][c];

    printf("Enter the matrix one -->\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the matrix two -->\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf(" The matrix one is-->\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf(" The matrix two is-->\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    printf("The multiplication of these two matrices is -->\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                arr3[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}