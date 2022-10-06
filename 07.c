#include <stdio.h>
int main()
{
    char c;
    FILE *p;
    FILE *q;
    p = fopen("multi_table.txt", "r");
    q = fopen("multi_table_copy.txt", "w");
    c = fgetc(p);
    while (c != EOF)
    {
        // putc(c, q);
        fprintf(q, "%c", c);
        c = fgetc(p);
    }
    fclose(p);
    fclose(q);
    printf("The program has been successfully exicuted/n");
    return 0;
}