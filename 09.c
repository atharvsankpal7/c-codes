#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("xd.txt", "r+");

    int a, b;
    fscanf(p, "%d", &a);
    b = 2 * a;
    fprintf(p, "\n%d", b);
    fclose(p);
    
    return 0;
}