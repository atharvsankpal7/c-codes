#include <stdio.h>
int main()
{
    int a, c, b;
    printf("Enter the marks of the first subject -->\n");
    scanf("%d", &a);
    printf("Enter the marks of the second subject -->\n");
    scanf("%d", &b);
    printf("Enter the marks of the third subject -->\n");
    scanf("%d", &c);
    if (b < 35 || a < 35 || c < 35 || (a + b + c) / 3 < 40)
    {
        printf("The student has failed");
    }
    else
    {
        printf("The student has passed");
    }
    return 0;
}