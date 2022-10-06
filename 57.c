#include <stdio.h>
int main()
{
    int a, b, j, d;
    printf("Enter the size of array -->\n");
    scanf("%d", &a);
    int c = 2 * a;
    int arr1[a], arr2[a], arr3[c];
    printf("Enter the elemets inside first array -->\n");
    for (b = 0; b < a; b++)
    {
        scanf("%d", &arr1[b]);
    }
    printf("Enter the elemets inside second array -->\n");
    for (b = 0; b < a; b++)
    {
        scanf("%d", &arr2[b]);
    }
    for (b = 0; b < a; b++)
    {
        arr3[b] = arr1[b];
    }
    for (d = 0; d < a; d++)
    {
        arr3[b] = arr2[d];
        b++;
    }

    for (int x = 0; x < c; x++)
    {
        for (int y = 0; y < c - 1; y++)
        {
            if (arr3[y] <= arr3[y + 1])
            {
                j = arr3[y + 1];
                arr3[y + 1] = arr3[y];
                arr3[y] = j;
            }
        }
    }
    for (int r = 0; r < c; r++)
    {
        printf("%d ", arr3[r]);
    }
    return 0;
}