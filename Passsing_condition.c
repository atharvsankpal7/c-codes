#include <stdio.h>
#include <conio.h>
int main()
{
    int phy, chem, maths, total;
    printf("Enter the marks in the physics-->");
    scanf("%d", &phy);

    printf("Enter the marks in the physics-->");
    scanf("%d", &chem);

    printf("Enter the marks in the physics-->");
    scanf("%d", &maths);
    total = (maths + chem + phy) / 3;
    if (total < 40 || phy < 33 || maths < 33 || chem < 33)
    {
        printf("your percentage is %d and you failed, better luck next time :)", total);
    }
    else

    {
        printf("your percentage is %d and you passed , congrats", total);
    }
    getch();
    return 0;
}