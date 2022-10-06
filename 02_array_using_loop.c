#include <stdio.h>
int main()
{
    int marks[5];
    for (int a = 0; a < 5; a++)
    {
        printf("Enter the value of the marks of student %d -->", a + 1);
        scanf("%d", &marks[a]);
    }
    for (int a = 0; a < 5; a++)
    {
        printf("The entered values are --> %d\n",marks[a]);
    }
    return 0;
}