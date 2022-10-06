#include <stdio.h>
int main()
{
    double b;
    int c[100];
    printf("Enter the salary of employee  -->\n");
    scanf("%lf", &b);
    printf("Enter the name of employee -->\n");
    scanf("%s", c);
    FILE *p;
    p = fopen("employee.txt", "w");
    fprintf(p, "%lf, %s", b, c);
    fclose(p);
    printf("The program has been excuted\n");
    return 0;
}