#include <stdio.h>
int main()
{
    float a, b, c, pi;
    printf("Enter the value of the radius and height of cylinder -->\n");
    scanf("%f%f", &a, &c);
    pi = 3.142;
    b = 2 * pi * a * c;
    printf("The volume of the cylinder is --> %f cubic unit\n", b);

    return 0;
}