#include <stdio.h>
#include <string.h>
struct dob
{
    int date;
    char month[100];
    int year;
};
struct std
{
    int id;
    char name[100];
    float cgpa;

    struct dob d;
};
int main()
{

    int n;
    printf("Enter the number of students -->\n");
    scanf("%d", &n);

    struct std arr[n];

    printf("Enter the information of students -->\n");
    for (int a = 0; a < n; a++)
    {
        printf("Enter the roll number of student %d:", a + 1);
        scanf("%d", &arr[a].id);

        gets(arr[a].name); // This statements is used for solving the buffer issue

        printf("Enter the name of student %d:", a + 1);
        gets(arr[a].name);

        printf("Enter the CGPA number of student %d:", a + 1);
        scanf("%f", &arr[a].cgpa);

        printf("Enter the date of birth of student %d -->", a + 1);
        scanf("%d%s%d", &arr[a].d.date, &arr[a].d.month, &arr[a].d.year);
    }

    for (int a = 0; a < n; a++)
    {
        printf("The roll number of student %d is %d\n", a + 1, arr[a].id);

        printf("The name of student %d is %s\n", a + 1, arr[a].name);

        printf("The CGPA of student %d is %f\n", a + 1, arr[a].cgpa);

        printf("The date of birth of student %d is %d %s %d\n", a + 1, arr[a].d.date, arr[a].d.month, arr[a].d.year);
    }
    return 0;
}