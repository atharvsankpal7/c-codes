#include <stdio.h>
int main()
{
    int a, b = 1, c = 1;
    printf("Enter the number whose factorial has to be found--> ");
    scanf("%d", &a);
    /*
    In the do while loop 15the compiler executes the do loop first and then checks the
    while loop's condition and if the condition is false then the compiler will still
    execute the do loop
    */
    do
    {
        b++;
        c *= b;
    } while (b < a);
    printf("%d", c);
    return 0;
}