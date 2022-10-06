#include <stdio.h>
int main()
{
    int i = 1, b;
    printf("Enter the number upto line has to be displayed -->");
    scanf("%d", &b);
    do // the do operator commands the compiler to execute the condition and while operator checks the condition in the while operator
    // so in the do program their is atleast one output
    {
        printf("%d\n", i);
        i++;
    } while (i <= b);

    return 0;
}