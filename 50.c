#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter three numbers -->\n");
    scanf("%d%d%d", &a, &b, &c);
    d = a;
    if (d < b)
    {
        d = b;
        if (d < c)
        {
            d = c;
        }
    }
    printf("The largest number among all of the above is --> %d", d);
    return 0;
}