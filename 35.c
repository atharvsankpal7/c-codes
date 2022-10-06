#include <stdio.h>

double function(int);
int main()
{
    int a;
    printf("Enter the number-->\n");
    scanf("%d", &a);
    printf("%lf", function(a));
    return 0;
}
double function(int a)
{
    double sum = 0;
     double x = 1;
    int q = 1;
    for (int b = 1; b <= a; b++)
    {
        q = 1;
        for (int p = 1; p <= b; p++)
        {

            q *= p;
        }

       

        x = q / b;
        sum += x;
    }
    return sum;
}