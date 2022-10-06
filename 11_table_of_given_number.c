#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number whose table has to be found -->");
    scanf("%d", &a);
    for (b = 1; b < 11; b++)
    {
        c = b * a;
        printf("%d * %d ==> %d \n", a, b, c);
    }
    return 0;
}