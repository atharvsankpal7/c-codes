#include <stdio.h>
int main()
{
    int a[100];
    *a = 10;
    *(a+1) =12;
    printf("%d ", a[0]);
    printf("%d", a[1]);
    return 0;
}