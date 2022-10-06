#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    printf("Enter the number --> ");
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        sum += b;
    }
    printf("The addition of %d number is %d", a, sum);
    return 0;
}