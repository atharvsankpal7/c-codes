#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("putc.txt", "w");
    putc('c', p);
    putc('c', p);
    putc('c', p);
    putc('c', p);
    putc('c', p);
    putc('c', p);
    return 0;
}