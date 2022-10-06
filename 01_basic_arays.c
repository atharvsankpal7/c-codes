#include <stdio.h>
int main()
{
    int marks[4];
    printf("Enter the value of the student 1 -->");
    scanf("%d", &marks[0]);
    printf("Enter the value of the student 2 -->");
    scanf("%d", &marks[1]);
    printf("Enter the value of the student 3 -->");
    scanf("%d", &marks[2]);
    printf("Enter the value of the student 4 -->");
    scanf("%d", &marks[3]);
    printf("The values of the given arrays is --> \n%d\n%d\n%d\n%d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}