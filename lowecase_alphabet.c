#include <stdio.h>
// 97-122 ==>  a-z
int main()
{
    char ch;
    printf("Enter the alphabet -->");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 98)
    {
        printf("The given alphabet is lowercase ");
    }
    else
    {
        printf("The given alphabet is not lowercase");
    }

    return 0;
}