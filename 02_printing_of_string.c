#include <stdio.h>
int main()
{
    char bass[] = "hello bhai";
    char *class = "namskar bhava";
    char nice[100];
    printf("%s\n", bass);
    printf("%s\n", class);
    printf("Enter the string nice --> \n");
    scanf("%s", nice);
    printf("The string nice is --> %s", nice);
    return 0;
}