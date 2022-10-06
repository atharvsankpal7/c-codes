#include <stdio.h>
void gm();
void gn();
void ga();
int main()

{
    printf("This program shows how the function inside the function works\n");
    gn();

    return 0;
}

void gn()
{
    printf("hello\n");
    gm();
}
void gm()
{
    printf("hi\n");
    ga();
}
void ga()
{
    printf("bonjour\n");
}

