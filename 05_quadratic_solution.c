#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, e;
    printf("Enter the value of a \n");
    scanf("%f", &a);
    printf("Enter the value of b \n");
    scanf("%f", &b);
    printf("Enter the value of c \n");
    scanf("%f", &c);
    d = ((b * b) - (4 * a * c));
    int f = sqrt(d);
    if (d == 0)
    {
        printf("The equation have real and equal solution \n");
        e = ((-b) / 2 * a);
        printf("The solution of the equation is --> %f \n", e);
    }

    if (d > 0)
    {
        printf("The equation have real and distinct solution \n");
        e = ((-b + f) / (2 * a));
        printf("The solution one is of equation is --> %f \n", e);
        e = ((-b - f) / (2 * a));
        printf("The solution two is of equation is --> %f \n", e);
    }
    if (d < 0)
    {
        printf("The equation have imaginary solution ");
    }
    return 0;
}