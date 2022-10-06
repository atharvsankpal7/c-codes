#include <stdio.h> //make this recursion . this your homework
void fb(int a)
{
    int c = 0, d = 1, e = 0;
    for (int b = 1; b < a; b++)
    {
        e = c + d;
        printf("%d ", e);
        c = d;
        d = e;
    }
}

int main()
{
    int a;
    printf("Enter the number -->");
    scanf("%d", &a);
    fb(a);
    return 0;
}