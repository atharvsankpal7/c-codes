#include <stdio.h>
typedef struct datemonthyear
{
    int day;
    int month;
    int year;
} date;
void show(date d)
{
    printf("The date is : %d/%d/%d\n", d.day, d.month, d.year);
}
void datecmp(date d, date a)
{
    int x = 0;
    if (d.year == a.year && d.day == a.day && d.month == d.month)
    {
        printf("The dates are same\n");
    }
    else
    {
        printf("The dates are not same\n");
    }
    if (d.year > a.year)
    {
        x = 1;
    }
    if (d.month > a.month)
    {
        x = 1;
    }
    if (d.day > a.day)
    {
        x = 1;
    }
    if (d.year < a.year)
    {
        x = 2;
    }
    if (d.month < a.month)
    {
        x = 2;
    }
    if (d.day < a.day)
    {
        x = 2;
    }
    if (x == 1)
    {
        printf("%d/%d/%d is later than %d/%d/%d\n ", d.day, d.month, d.year, a.day, a.month, a.year);
    }
    else if (x == 2)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n ", d.day, d.month, d.year, a.day, a.month, a.year);
    }
}

int main()
{
    date d = {25, 7, 2022};
    date a = {25, 7, 2021};
    show(d);
    show(a);
    datecmp(d, a);
    return 0;
}