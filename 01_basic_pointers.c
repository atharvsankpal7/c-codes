#include <stdio.h>
void xD();
int main()
{
xD();
    return 0;
}
void xD()
{
    for (int v = 1; v < 10; v++)
    {
        int a = 45;
        int *j = &a;
        printf("the value of the a is %d\n", a);
        printf("the value of the a is %d\n", *j);
        printf("the address of the a is %d\n", &a);
        printf("the address of the a is %d\n", j);
    }
}
