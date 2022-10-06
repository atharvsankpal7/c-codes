#include <stdio.h>
int main()
{
    char string[100][100] = {"hello", "world"};
    printf("%s ", string[0]);
    printf("%s\n", string[1]);

    printf("Enter the values of the for string/n");
    for (int a = 2; a < 5; a++)
    {
        scanf("%s", &string[a]);
    }
    
    printf("The content inside the string is -->\n");
    for (int a = 2; a < 5; a++)
    {
        printf("%s\n", string[a]);
    }

    return 0;
}