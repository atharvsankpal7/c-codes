#include <stdio.h>
int main()
{
    char a;
    int c;
    printf("Enter the number of month of the year -->");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
    {
        printf("The month of the year is JANUARY");
        break;
    }
    case 2:
    {
        printf("The month of the year is FEBRUARY");
        break;
    }
    case 3:
    {
        printf("The month of the year is MARCH");
        break;
    }
    case 4:
    {
        printf("The month of the year is APRIL");
        break;
    }
    case 5:
    {
        printf("The month of the year is MAY");
        break;
    }
    case 6:
    {
        printf("The month of the year is JUNE");
        break;
    }
    case 7:
    {
        printf("The month of the year is JULY");
        break;
    }
    case 8:
    {
        printf("The month of the year is AUGUST");
        break;
    }
    case 9:
    {
        printf("The month of the year is SEPTEMBER");
        break;
    }
    case 10:
    {
        printf("The month of the year is OCTOMBER");
        break;
    }

    case 11:
    {
        printf("The month of the year is NOVEMBER");
        break;
    }
    case 12:
    {
        printf("The month of the year is DECEMBER");
        break;
    }
    default:
    {
        printf("Error!!!");
    }
    }

    return 0;
}