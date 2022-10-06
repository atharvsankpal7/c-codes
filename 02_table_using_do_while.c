#include <stdio.h>
int main()
{
    int a = 1, b, c;
    printf("Enter the value of the number whose table has to be found -->");
    scanf("%d", & b);
    do
    {
        c = a * b;
        printf("%d\n", c);
        a++;
    } while (a < 11);
    return 0;
}