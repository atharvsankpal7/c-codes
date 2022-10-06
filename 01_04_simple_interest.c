#include <stdio.h>
int main()
{
    int si, p, r, t;
    printf("Enter the value of the principle -->\n");
    scanf("%d", &p);
    printf("Enter the value of the rate -->\n");
    scanf("%d", &r);
    printf("Enter the value of the time in year(s) -->\n");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("The value of the simple interest is -->%d\nThe value of the loan that has to be return is -->%d\n", si, (si + p));

    return 0;
}