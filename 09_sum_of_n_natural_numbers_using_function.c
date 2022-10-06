#include <stdio.h>
int sum();
int main()
{
    sum();
    return 0;
}
int sum()
{
    int a, b = 0, c = 0, d;
    printf("Enter the value of the number -->");
    scanf("%d", &d);
    do
    {
        c += b;

        b++;

    } while (b <= d);
    printf("The sum of the first %d natural numbers is %d", d, c);
}