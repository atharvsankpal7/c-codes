#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter the no. row of matrix one -->");
    scanf("%d", &i);
    printf("Enter the no. of columns of matrix one and no. of rows of matrix two --> ");
    scanf("%d", &j);
    printf("Enter the no. of rows of matrix two -->");
    scanf("%d", &k);
    int a[i][j], b[j][k], c[i][k];
    printf("Enter the elements in the matrix one -->\n");
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the element a%d%d :", x + 1, y + 1);
            scanf("%d", &a[x][y]);
        }
    }
    printf("Enter the elements in the matrix two -->\n");
    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < k; y++)
        {
            printf("Enter the element a%d%d :", x + 1, y + 1);
            scanf("%d", &b[x][y]);
        }
    }
    printf("\nThe matrix one is -->\n");
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("%d\t", a[x][y]);
        }
        printf("\n");
    }
    printf("\nThe matrix two is -->\n");
    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < k; y++)
        {
            printf("%d\t", b[x][y]);
        }
        printf("\n");
    }
    printf("\nThe multiplication of these matrices is -->\n");
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            for (int z = 0; z < k; z++)
            {
                
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
    for (int x = 0; x < i; x++)
    {
        for (int z = 0; z < i; z++)
        {
            printf("%d\t", c[i][k]);
        }
    }

    return 0;
}