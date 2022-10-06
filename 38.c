#include <stdio.h>
int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6, 10880, 5, 85, 6, 8, 6, 4};
    int l = sizeof(arr) / sizeof(arr[0]);
    int c = arr[0];

    for (int i = 1; i < l; i++)
    {
        if (c < arr[i])
        {
            c = arr[i];
        }
    }
    printf("%d\n", c);
    return 0;
}