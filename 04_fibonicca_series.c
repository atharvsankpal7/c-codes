#include <stdio.h>

int main()
{

    int a, b, c, f = 1;
    printf("Enter the iteration of the series -->");
    scanf("%d", &c);
    printf("Enter the value of the numbers --> \n");
    scanf("%d%d", &a, &b);
    int d = b;
    do
    {

        printf("The next element of the series is  --> %d\n", d);
        d = a + b;
        a = b;
        b = d;
        f++;
    } while (f <= c);
    return 0;
}