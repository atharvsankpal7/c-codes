#include <stdio.h>
int main()
{
    int a, b = 1, c = 0;
    printf("Enter the value of natural number -->");
    scanf("%d", &a);
    do
    {
        c += b;
        b++;
    } while (b <= a);
    printf("The sum of %d natural numbers is -->%d", a, c);
    return 0;
}