#include <stdio.h>
int main()
{
    int arr1[1000], arr2[1000];
    int n, a;
    printf("Enter the size of array -->\n");
    scanf("%d", &n);
    printf("Enter the elements in first array-->\n");
    for (a = 0; a < n; a++)
    {
        scanf("%d", &arr1[a]);
    }
    printf("Enter the elements in second array-->\n");
    for (a = 0; a < n; a++)
    {
        scanf("%d", &arr2[a]);
       }
    return 0;
}