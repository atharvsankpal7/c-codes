#include <stdio.h>
int main()
{
    int a[5];
    int *p;
    printf("Enter the elements in the array -->\n");
    for (p = a; p < (a + 5); p++)
    { 
        scanf("%d", p);
    }
    printf("The elements in the array in reverse order is \n");
    for (p = (a + 4); p >= a; p--)
    {
        printf("%d ", *p);
    }

    return 0;
}