#include <stdio.h>
int main()
{
    int arr[3][10];
    int n;
    for (int j = 0; j < 3; j++)
    {
        printf("Enter the number whose table has to be found ==>\n");
        scanf("%d", &n);
        for (int i = 0; i < 10; i++)
        {
            arr[j][i] = n * (i + 1);
            printf("%d * %d ==> %d\n", n, i + 1, arr[j][i]);
        }
    }
    // printf("%d", arr[0][0]);
    return 0;
}