#include <stdio.h>
int main()
{
    int a = 10, b = 20, c;
    printf("The value of the integers before swapping is -->%d  &  %d\n", a, b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("The value of the integers after swapping is -->%d  &  %d\n", a, b);

    return 0;
}