#include <stdio.h>
#include <conio.h>
int main()
{
    // THIS PROGRAM IS USED TO FIND LARGEST NUMBER AMONG THREE NUMBERS
    int a, b, c;
    // GET VALUES OF a b c FROM THE USER
    printf("what is the value of a?  -->");
    scanf("%d/n", &a);
    printf("what is the value of b?  -->");
    scanf("%d/n", &b);
    printf("what is the value of c?   --> ");
    scanf("%d/n", &c);
    if (a > b) // CONDITION NUMBER 1A
    {
        {
            if (a > c) // CONDITION NUMBER 1B
                printf("%d is the largest number",a);
        }
    }

    else
    {
        if (b > c)
        { // CONDITION NUMBER 2 A

            if (b > a)
            { // CONDITION NUMBER 2B
                printf("%d is the largest number",b);
            }
        }
        else
        { // CONDITION THAT WILL BE SATISFIED IF OTHER ARE NOT
            printf("%d is the largest number",c);
        }
    }

    return 0;
}
