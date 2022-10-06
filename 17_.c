#include <stdio.h>
#include <string.h>
int main()
{
    char ht[100];
    char c = 'K', d = '9';
    printf("Enter the hall ticket number -->");
    scanf("%s", &ht);
    if (ht[2] == c && ht[3] == d)
    {
        printf("You belong to ADCET\n");
    }
    else
    {
        printf("Fuck off bitch\n");
    }
    return 0;
}