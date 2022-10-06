#include <stdio.h>
void rect(int *p, int *q)
{
    *p = (*p) * (*q);
    *q = 2 * ((*p / *q) + (*q));
}
int main()
{
    int a, b;
    printf("Enter the length of rectangle -->\n");
    scanf("%d", &a);
    printf("Enter the breadth of rectangle -->\n");
    scanf("%d", &b);
    rect(&a, &b);
    printf("The area of the rectangle is -->%d\n", a);
    printf("The perimeter of the rectangle is -->%d\n", b);
    return 0;
}