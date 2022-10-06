#include <stdio.h>
void ln(int a, int b, int c, int d)
{
    int e = a, f = a;
    if (e < b)
    {
        e = b;
    }
    if (e < c)
    {
        e = c;
    }
    if (e < d)
    {
        e = d;
    }
    printf("The largest number is -->%d\n", e);

    if (f > b)
    {
        f = b;
    }
    if (f > c)
    {
        f > c;
    }
    if (f > d)
    {
        f = d;
    }
    printf("The smallest number is -->%d \n", f);
}

int main()
{
    int a, b, c, d;
    printf("Enter the four numbers -->\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    ln(a, b, c, d);
    return 0;
}