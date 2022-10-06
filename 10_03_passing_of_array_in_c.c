#include <stdio.h>
int sum(int a[], int l)
{
    int add = 0;
    for (int i = 0; i < l; i++)
    {
        add += a[i];
    }
    return add;
}
int main()
{
    int a[] = {1,
               2,
               3,
               4,
               5};
    int l = sizeof(a) / sizeof(a[0]);
    printf("%d", sum(a, l));
    return 0;
}