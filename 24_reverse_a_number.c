#include <stdio.h>
int main()
{
    int a, b[10000];
    printf("Enter the number -->");
    scanf("%d", &a);

    while (a > 0)
    {
        int c = 0;
        b[c] = a % 10;
        a = a / 10;
        printf("%d", b[c]);
        c++;
    }

    return 0;
}