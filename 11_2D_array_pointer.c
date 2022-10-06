#include <stdio.h>
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr;
    printf("Enter the elements in the array -->\n");
    for (ptr = &a[0][0]; ptr <= &a[2][2]; ptr++)
    {

        scanf("%d", ptr);
    }
    printf("Elements in the array are -->\n");
    for (ptr = &a[0][0]; ptr <= &a[2][2]; ptr++)
    {
        printf("%d ", *ptr);
    }

    return 0;
}