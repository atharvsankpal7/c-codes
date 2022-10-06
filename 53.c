#include <stdio.h>
int main()
{
    int n = 6;
    int x = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            x++;
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}