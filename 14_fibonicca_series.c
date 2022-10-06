#include <stdio.h>
int main()
{
    int e, a, b, c = 0, d = 1;
    
    printf("Enter the number -->");
    scanf("%d", &a);
    
    for (b = 1; b < a; b++)
    {
        
        e = c + d;
        printf("%d ", e);
        
        c = d;
        d = e;
    }
    return 0;
}