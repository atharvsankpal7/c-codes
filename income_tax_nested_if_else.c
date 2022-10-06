#include <stdio.h>

int main()
{
    int income, tax = 0;
    printf("enter the value of the income --> ");
    scanf("%d", &income);

    if (income <= 250000)
    {
        printf("your portfolio is tax free!!");
    }
    if (income > 250000 && income <= 500000)
    {
        tax += (.05) * (income - 250000);
        printf("the tax on your income is --> %d\n", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax += (.1) * (income - 500000);
        printf("the tax on your income is --> %d \n", tax);
    }
    else if (income > 1000000)
    {
        tax += (.3) * (income - 1000000);
        printf("the tax on your income is --> %d \n ", tax);
    }

    return 0;
}