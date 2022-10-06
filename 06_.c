#include <stdio.h>
int main()
{
    int a = 1, b;
    printf("Enter the number -->");
    scanf("%d", &b);
    FILE *p;
    p = fopen("multi_table.txt", "w");
    while (a < 11)
    {
        fprintf(p, "%d ", a * b);
        a++;
    }
    fclose(p);

    return 0;
}