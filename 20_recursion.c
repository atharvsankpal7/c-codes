#include <stdio.h>
int sum(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else

        return a + sum(a - 1);
}
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    printf("The sum of first %d natural number is : %d", a, sum(a));
    return 0;
}