#include <stdio.h>
int main()
{
    float a, c;
    int b;
    printf("Enter the value of the amount -->\n");
    scanf("%f", &a);
    b = a;
    c = a - b;
    printf("The amount of ruppee is %d and amount of paise is %.1f", b, a - b);

    return 0;
}