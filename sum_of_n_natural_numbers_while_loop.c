#include <stdio.h>
int main()
{
    int a, b = 0, c = 0;
    printf("Enter the natural number -->");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("The number should be natural\n");
    }
    else
    {
        while (b <= a)
        {
            c += b;
            b++;
        }
        printf("The sum first %d numbers is-->%d", a, c);
    }

    return 0;
}