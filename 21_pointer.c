#include <stdio.h>
int main()
{
    int a[10];
    int *ptr ;
    printf("");
    for (ptr = &a[0]; ptr <= &a[9]; ptr++)
    {
        scanf("%d", ptr);
    }
    for (ptr = &a[0]; ptr <= &a[9]; ptr++)
    {
        printf("%d\n", *ptr);
    }
    return 0;
}