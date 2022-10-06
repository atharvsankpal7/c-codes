#include<stdio.h>
int main()
{
int a, b;
    printf("Enter the size of the array --> \n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array -->\n");
    for(int i = 0; i < a; i++)
    {
        scanf("%d", arr[i]);
    }
return 0;
}