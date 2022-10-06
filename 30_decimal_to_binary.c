#include <stdio.h>
int main()
{

    int i, arr[500], a, b = 0;
    printf("Enter the number in decimal-->\n");
    scanf("%d", &i);
    printf("The given number in binary is -->\n");
    if (i == 0)
    {
        printf("0\n");
    }
    else
    {
        while (i != 0)
        {
            a = i % 2;
            i /= 2;
            arr[b] = a;
            b++;
        }
        for (int c = b - 1; c >= 0; c--)
        {
            printf("%d", arr[c]);
        }
    }
    return 0;
}