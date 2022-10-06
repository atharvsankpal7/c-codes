#include <stdio.h>
int main()
{
    int a = 1;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = ptr1;
    *ptr2 = 5;
    printf("%d", *ptr1);

    return 0;
}