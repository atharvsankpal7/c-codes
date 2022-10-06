#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a, b, c = 1;
    srand(time(0));
    a = rand() % 100 + 1;
    do
    {
        printf("guess the number -->");
        scanf("%d", &b);
        if (b < a)
        {
            printf("the number is larger than your guess\n");
        }
        else if (b > a)
        {
            printf("The number is shorter than your guess\n");
        }
        else
        {
            printf("your guess is right\nyou guessed the number in %d attempts",  c);
        }
        c++;
    } while (b != a);

    return 0;
}