#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the three numbers -->\n");
    scanf("%d%d%d", &a, &b, &c);
    d = a;
    if (b > d)
    {
        d = b;
    }
    if (c > d)
    {
        d = c;
    }
    printf("The largest numbers is --> %d", d);
    return 0;
}