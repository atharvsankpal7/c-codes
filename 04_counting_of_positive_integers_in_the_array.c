#include <stdio.h>
int count(int arr[], int a);
int main()
{
    int a, b;
    int i;
    b = 0;
    printf("Enter the size of the array --> \n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array -->\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    count(arr[a], a);
    return 0;
}
int count(int arr[], int a)
{
    int i, b;
    for (i = 0; i < a; i++)
    {
        if (arr[i] >= 0)
            b++;
    }
    printf("The count of the positive numbers in the arrays is-->%d\n", b);
}