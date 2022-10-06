#include <stdio.h>
int main()
{
    float a, b, c, pi;
    printf("Enter the value of the radius of circle -->\n");
    scanf("%f", &a);
    pi = 3.142;
    b = 2 * pi * a;
    printf("The area of the circle is --> %f\n", b);

    return 0;
}