#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the number of rows and columns of matrix -->\n");
    scanf("%d%d", &x, &y);
    int arr[x][y];
    int arr2[y][x];
    printf("Enter the matrix one ");
    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            arr2[b][a] = arr[a][b];
        }
    }
    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            printf("%d\t", arr2[a][b]);
        }
        printf("\n");
    }

    return 0;
}