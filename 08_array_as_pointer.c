#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 8, 7, 9, 10};
    int sum=0, *ptr;
    for (ptr = a; ptr < (a+10); ptr++)
    {
        sum += *ptr;
    }
    printf("%d", sum);
    return 0;
}