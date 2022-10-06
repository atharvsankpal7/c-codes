#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game();
int main()
{
    game();

    return 0;
}

int game()
{
    int a, b, ga, gb;
    srand(time(0));      // the random numbers will be above 0
    a = rand() % 20 + 1; // the random numbers will be under 20
    b = rand() % 20 + 1; // the random numbers will be under 20
    printf("\nthe substraction of these numbers is %d\nthe multiplication of the numbers is %d\n", a - b, a * b);

    while (ga != a && gb != b)
    {
        printf("guess the two numbers -->\n");

        scanf("%d%d", &ga, &gb);
          if (ga == a && gb == b)
    	{
    	    printf("*******************the guess is right*****************\n");
    	}
    	else
		{
			printf("The guess is wrong please try again\n");
		}
    }

  
    game();
}
