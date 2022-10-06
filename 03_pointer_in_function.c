#include <stdio.h>
void function(int arr[], int a, int *max, int *min)
{
    *max = *min = 0;
    for (int b = 0; b < a; b++)
    {
        if (arr[b] < *min)
        {
            *min = arr[b];
        }
        if (arr[b] > *max)
        {
            *max = arr[b];
        }
    }
}

int main()
{
    int a;
    printf("Enter the number of elements in arrays -->\n");
    scanf("%d", &a);
    int arr[a];

    for (int b = 0; b < a; b++)
    {
        printf("Enter the element no. %d -->", b + 1);
        scanf("%d", &arr[b]);
    }
    int max, min;
    function(arr, a, &max, &min); /* while passing the array there is not mention of the
     [] cause the in defination of function we have mentioned the array, while in for
     pointers we have mentioned the address in the calling of the function.*/
    printf("The maximum element in the array is %d \n The minimum value element in the array is %d \n", max, min);
    return 0;
}   