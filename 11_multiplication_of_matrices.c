#include <stdio.h>
int main()
{
    int mat1[100][100], mat2[100][100], a, b, c, d, e, mat3[100][100];
    printf("Enter the number of rows and columns-->\n");
    scanf("%d", &c);
    printf("Enter the matrix one -->\n");
    for (a = 0; a < c; a++)
    {
        for (b = 0; b < c; b++)
        {
            printf("Enter the element a%d%d\n", a + 1, b + 1);
            scanf("%d", &mat1[a][b]);
        }
    }
    printf("Enter the matrix two -->\n");
    for (a = 0; a < c; a++)
    {
        for (b = 0; b < c; b++)
        {
            printf("Enter the element a%d%d\n", a + 1, b + 1);
            scanf("%d", &mat2[a][b]);
        }
    }
    printf("Matrix one is -->\n");

    for (a = 0; a < c; a++)
    {
        for (b = 0; b < c; b++)
        {
            printf("%d\t", mat1[a][b]);
        }
        printf("\n");
    }
    printf("Matrix two is -->\n");
    for (a = 0; a < c; a++)
    {
        for (b = 0; b < c; b++)
        {
            printf("%d\t", mat2[a][b]);
        }
        printf("\n");
    }
    printf("The addition of the two matrices is -->\n");
    for (a = 0; a < c; a++)
    {
        for (b = 0; b < c; b++)
        {
            for (e = 0; e < c; e++)

            {
                mat3[a][b] += mat1[a][e] * mat2[e][b]; // formula is different and important
            }
            printf("%d\t", mat3[a][b]); // placement of this display command is also important
        }

        printf("\n");
    }
    return 0;
}