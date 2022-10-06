#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a;
    int z = 0;
    int i = 0;
    scanf("%d", &a);
    char str[a];
    scanf("%s", &str);
    char c;
    for (i = 0; i < a; i++)
    {
        c = str[i];
        if (c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u')
        {
            printf("%c ", c);
            z++;

            for (int x = 2; x < i; x++)
            {
                if (i % x == 0)
                {
                    z++;
                   
                }
            }
            if(z==1)
            {
                printf("Prime\n");
            }
            else
            {
                printf("\n");
            }
        }
    }

    return 0;
}