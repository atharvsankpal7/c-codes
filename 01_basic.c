#include <stdio.h>
int main()
{
    char arr1[] = "Atharv";
    char *ptr = arr1;
    do
    {
        printf("%c", *ptr);
        ptr++;
    } while (*ptr != '\0');
     
    return 0;
}