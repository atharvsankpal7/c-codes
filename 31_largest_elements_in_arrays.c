#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter the size of array -->\n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements in the array -->\n");
    do
    {
        scanf("%d", &arr[b]);
        b++;
    } while (b < a);
    int d = arr[0];

    for (int c = 0; c < a; c++)
    {
        if (d < arr[c])
        {
            d = arr[c];
        }
    }
    printf("The largest number inside the array is %d", d);
    return 0;
}