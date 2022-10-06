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
int main()
{
    date d = {25, 7, 2022};
    show(d);
    return 0;
}