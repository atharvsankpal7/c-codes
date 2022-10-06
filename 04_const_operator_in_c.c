#include <stdio.h>
int change(const int *ptr)
{
    *ptr = 1;
    return *ptr;
}
int main()
{
    const int i = 10; // this progran will though an error coz the declaration of the varible is said to be constant and cannot be changed
    int a;
    a = change(&i);
    printf("%d", a);
    return 0;
}