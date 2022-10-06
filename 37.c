#include <stdio.h>
int sqr(int a)
{
    return a * a;
}
int main()
{
    int a;
    printf("Enter the number -->\n");
    scanf("%d", &a);
    printf("The square of the number is -->%d", sqr(a));
    return 0;
}