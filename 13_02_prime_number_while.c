#include <stdio.h>
int main()
{
    int a = 2, b = 1, c;
    printf("Enter the number-->");
    scanf("%d", &c);
    while (a < c)
    {
        if (c % a == 0)
        {
            b = 0;
        }
        a++;//this a++ could fit anywhere in the while loop
    }
    if (b == 0)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }
    return 0;
}