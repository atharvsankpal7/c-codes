#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("hellnaw.txt", "r");

    printf("The character is -->%c\n", fgetc(p));
    printf("The character is -->%c\n", fgetc(p));
    printf("The character is -->%c\n", fgetc(p));
    printf("The character is -->%c\n", fgetc(p));
    printf("The character is -->%c\n", fgetc(p));
    printf("The character is -->%c\n", fgetc(p));
    printf("The character is -->%c\n", fgetc(p));
    printf("The character is -->%c\n", fgetc(p));
    fclose(p);
    return 0;
}