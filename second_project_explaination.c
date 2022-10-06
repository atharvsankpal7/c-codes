#include <stdio.h>
#include <stdlib.h> //for generation of random number
#include <time.h>   //for the time function
int game();         // declaration of the function
int main()
{
    game(); // calling of the function

    return 0;
}

int game()
{
    int a, b, ga, gb;
    srand(time(0));      // the random numbers will be above 0
    a = rand() % 20 + 1; // the random numbers will be under 20
    b = rand() % 20 + 1; // the random numbers will be under 20
    printf("\nthe substraction of these numbers is %d\nthe multiplication of the numbers is %d\n", a - b, a * b);

    while (ga != a && gb != b) // checks if the entered number is equal to the generated number and if not again intakes the values for guess untill guess is right
    {
        printf("guess the two numbers -->\n");

        scanf("%d%d", &ga, &gb);
        if (ga == a && gb == b)
        {
            printf("********************the guess is right******************\n");
        }
        else
        {
            printf("the guess is wrong!!!!!\nPlease guess the number again\n");
        }
    }

    game(); // recursion
}