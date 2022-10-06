#include <stdio.h>
int factorial(int a);
int main()
{
    int c;
    printf("Enter the positive value of the number whose value has to be found -->");
    scanf("%d", &c);
    printf("The factorial of %d is %d ", c, factorial(c));
    return 0;
}
int factorial(int a)
{
   // printf("calling the value of factorial --> %d \n", a); // the compiler is calculating the value of the factorial by recalling the value of int a and factorial function will call itself by reducing the value of the int a until it is 1 and then it will return the value

       if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}