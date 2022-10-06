#include <stdio.h>
#include <math.h>//this is code is not giving desired output in vscode but does give an output on online compiler
int main()
{
    int a, b = 0, c = 1, d, e = 0;
    printf("Enter the value whose series has to be found -->\n");
    scanf("%d", &a);
    for (int z = 1; z <= a; z++)
    {
        c = pow(10, z);
        d = c - 1;
        b += d;
    }
    // int y = pow(10, 4);
    printf("%d", b);//when the index is even number the problem occurs for c
    
    return 0;
}