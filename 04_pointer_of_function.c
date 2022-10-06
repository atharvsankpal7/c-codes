#include <stdio.h>
int *midfunction(int a[], int b)
{

    return &a[b / 2];
}
int main()
{
    int a;
    printf("Enter the odd size of array -->");
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        int arr[a];
        for (int b = 0; b < a; b++)
        {
            printf("Enter the element no. %d -->", b + 1);
            scanf("%d", &arr[b]);
        }
        int *ptr = midfunction(arr, a);
        printf("The middle of the function is --> %d\n", *ptr);
    }
    else
    {
        printf("Error!!!!!!");
    }
    return 0;
}