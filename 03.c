#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                return a;
            }
        }
    }
    if (b > c)
    {
        if (b > a)
        { 
            if (b > d)
            {
                return b;
            }
        }
    }
    if (c > a)
    {
        if (c > b)
        {
            if (c > d)
            {
                return c;
            }
        }
    }

    if (d > a)
    {
        if (d > b)
        {
            if (d > c)
            {
                return d;
            }
        }
    }
}
int main()
{
    int a, b, c, d;
    printf("Enter the numbers -->\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    
    printf("The largest number is --> %d", ans);

    return 0;
}