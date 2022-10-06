#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void game()
{
    srand(time(0));
    int x;
    int xd = 0;
    x = rand() % 3 + 1;
    char s[100] = {"stone"}, p[100] = {"paper"}, si[100] = {"scissors"};
    char u[100], ai[100];
    if (x == 1)
    {
        strcpy(ai, s);
    }
    if (x == 2)
    {
        strcpy(ai, p);
    }
    if (x == 3)
    {
        strcpy(ai, si);
    }
    printf("Enter your choice\n");
    gets(u);
    strlwr(u);

    int a = strcmp(u, s);
    int b = strcmp(u, p);
    int c = strcmp(u, si);
    if (a == 0)
    {
        xd = 1;
    }
    if (b == 0)
    {
        xd = 2;
    }
    if (c == 0)
    {
        xd = 3;
    }
    if (xd == 0)
    {
        printf("Please enter valid choice\n");
        game();
    }
    else
    {
        printf("You choose %s\n", u);
        printf("Machine choose %s\n", ai);
        if (x == xd)
        {
            printf("Draw!!!");
        }
        if (x == 1)
        {
            if (xd == 2)
            {
                printf("Machine won!\n");
            }
            if (xd == 3)
            {
                printf("You won\n");
            }
        }
        if (x == 2)
        {
            if (xd == 3)
            {
                printf("Machine won!\n");
            }
            if (xd == 1)
            {
                printf("You won\n");
            }
        }
        if (x == 3)
        {
            if (xd == 1)
            {
                printf("Machine won!\n");
            }
            if (xd == 2)
            {
                printf("You won\n");
            }
        }
        if (xd == 0)
        {
            printf("Please enter valid choice\n");
            game();
        }
    }
}
int main()
{
    game();

    return 0;
}