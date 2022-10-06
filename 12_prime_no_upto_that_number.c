#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the number -->");
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        d = 0;
        for (c = 1; c <= b; c++)
        {
            if (b % c == 0)
            {
                d++; // the loop will always be entered for 1 and number itself if the number is prime then it will enter the loop only 2 times and the value of d will be 2.
            }        // and if the number is not prime it will enter the loop more than 2 times value of d will exceed 2.
        }
        if (d == 2) 
        {
            printf("%d ", b);
        }
    }

    return 0;
}