#include <stdio.h>
float avg();
int main()

{
    avg();
    return 0;
}
float avg()
{
    float a, b, c;
    float avg;
    printf("Enter the value of the numbers whose average has to be found -->\n");
    scanf("%f%f%f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("The average of these three numbers is --> %f\n", avg);
}