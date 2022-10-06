#include <stdio.h>
int main()
{
    char c;
    FILE *p;
    p = fopen("eof.txt", "r");
    c = fgetc(p);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(p);
    }

    return 0;
}