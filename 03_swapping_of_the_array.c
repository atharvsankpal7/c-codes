#include <stdio.h>
void swap(int *arr, int size);
int main()
{
       int n,i;

    printf("Enter the size of the array -->");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array -->");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    swap(arr, n);
    for (int i = 0; i < n; i++)
        printf("The elements of the arrays after swappings are ==>:%d\n", arr[i]);
    return 0;
}

void swap(int *arr, int size)
{
    int x = size / 2;
    int xd;
    for (int i = 0; i < x; i++)
    {
        xd = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = xd;
    }
}