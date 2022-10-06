#include <stdio.h>
struct box
{
    int l;
    int b;
    int h;
} s;
int main()
{
    scanf("%d%d%d", &s.l, &s.b, &s.h);
    if (s.h < 41)
    {
        printf("%d", s.l * s.b * s.h);
    }
    else
    {
    }

    return 0;
}