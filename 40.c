#include <stdio.h>

int main()
{
    int b;
    printf("Enter the size of array -->\n");

    scanf("%d", &b);

    int arr[b], i, j;

    printf("enter the elements inside array --> \n");

    for (j = 0; j < b; j++)
    {
        scanf("%d", &arr[j]);
    }

    printf("The elements inside the arrays are -->\n");

    for (j = 0; j < b; j++)
    {
        printf("%d\n", arr[j]);
    }

    return 0;
}