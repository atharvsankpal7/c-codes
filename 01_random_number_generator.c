#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game();
int main()
{
    game();

    return 0;
}
void game()
{
    int a, b;
    srand(time(0));
    a = rand() % 100 + 1;
    do
    {
        printf("\nguess the number -->");
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
            printf("\n**************your guess is right***************\n");
        }
    } while (b != a);
    game();
}