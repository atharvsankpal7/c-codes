#include <stdio.h>
int main()
{
    int i, b;
    printf("Enter the value of the number till whom list is wanted -->");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        printf("%d\n", i);
        /*the first part of the for's bracket is intialising value and
        second one is the condition and third one is for increment or decrement*/
    }
    return 0;
}
