#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[500];
    gets(str);
    int i;
    char c;
    for (i = 0; i < 500; i++)
    {
        c = str[i];
        if (c == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", c);
        }
        if (c == '\0')
        {
            break;
        }
    }

    return 0;
}