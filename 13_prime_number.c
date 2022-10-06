#include <stdio.h>
int main()
{
    // this is not the best method to solve this problem
    int a, b = 1, c;
    printf("Enter the number-->");
    scanf("%d", &a);
    for (c = 2; c < a; c++)
    {
        if (a % c == 0)
        {
            b = 0;
           break;//the break is given to increase the efficiency of the program
        }
    }

    if (b == 0)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }
    return 0;
}