#include <stdio.h>
int main()
{
    float a, b = 0, c;
    printf("Enter the value whose harmonic series has to be found -->\n");
    scanf("%f", &a);
    for (float d = 1; d <= a; d++)
    {
        c = (1 / d);
        b += c;
    }
    printf("The harmonic series of the %f is -->%f", a, b);
    return 0;
}