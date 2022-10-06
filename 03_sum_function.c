#include <stdio.h>

int sum();
int main()
{
    int a, b, c;
    printf("Enter the value of the a and b-->");
    scanf("%d%d", &a, &b);
    sum();//The sum function is completly independant of the c addition program
    c = a + b;
    printf("The sum of these two numbers is --> %d \n", c);
    sum();//This function will also run independently and will take the values of t and h and hence will give the different output if different input is given





    return 0;
}

int sum()
{
    int g, t, h;
    printf("Enter the value of the t and h-->");
    scanf("%d%d", &t, &h);


    g = t + h;
    printf("The sum of these numbers is -->%d \n", g);
}