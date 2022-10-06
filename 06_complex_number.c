#include <stdio.h>
typedef struct cn
{
    int real;
    int imag;
} chom;
chom addition(chom x, chom y)
{
    chom result;
    result.real = x.real + y.real;
    result.imag = x.imag + y.imag;
    return result;
}

int main()
{
    chom cn1, cn2, sum;

    printf("Enter the value of the real part of first complex number -->\n");
    scanf("%d", &cn1.real);

    printf("Enter the value of the imaginary part of first complex number -->\n");
    scanf("%d", &cn1.imag);

    printf("Enter the value of the real part of second complex number -->\n");
    scanf("%d", &cn2.real);

    printf("Enter the value of the imaginary part of second complex number -->\n");
    scanf("%d", &cn2.imag);

    sum = addition(cn1, cn2);
    printf("The real part of the addition of above complex numbers is %d\nThe imaginary part of addition of the above complex numbers is %d", sum.real, sum.imag);
    return 0;
}