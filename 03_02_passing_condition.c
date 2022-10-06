#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the marks of the student in first subject -->\n");
    scanf("%d", &b);
    printf("Enter the marks of the student in second subject -->\n");
    scanf("%d", &a);
    printf("Enter the marks of the student in third subject -->\n");
    scanf("%d", &c);
    if (b < 40)
        printf("The student is fail");
    if (a < 40)
        printf("The student is fail");
    if (c < 40)
        printf("The student is fail");
    else
        printf("The student has passed");
       //This is one uses less complexity but is bit more lengthy 
    return 0;
}