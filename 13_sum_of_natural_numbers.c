#include <stdio.h>
int fs(int a)
{
    int c = 0, b;
    if (a > 0)
    {
        return a + (fs(a - 1));
    }
}
int main()
{
    int a;
    printf("Enter the number -->");
    scanf("%d", &a);

    printf("The sum of first %d natural number is --> %d", a, fs(a));
    return 0;
}