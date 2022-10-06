#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char str1[1000];

    printf("Enter the string no. one -->\n");
    gets(str);

    printf("Enter the string no. two -->\n");
    gets(str1);

    puts(str);
    puts(str1);

    strupr(str);
    puts(str);

    strlwr(str1);
    puts(str1);

    printf("Length of first string is : %d\n", strlen(str));
    printf("Length of second string is : %d\n", strlen(str1));

    strcpy(str, str1);
    puts(str);

    strcat(str1, str);
    puts(str1);

    printf("%d", strcmp(str, str1));
    return 1;
}