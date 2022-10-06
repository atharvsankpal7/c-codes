#include <stdio.h>
int main()
{
    int a;
    int arr[500];
    printf("Enter the number -->\n");
    scanf("%d", &a);
    for (int b = 0; a > 0; b++)
    {

        arr[b] = a % 10;
        a /= 10;
        printf("%d", arr[b]);
    }
    return 0;
}