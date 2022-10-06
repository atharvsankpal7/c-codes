#include <stdio.h>
int main()
{
    FILE *FP = fopen("xd.txt", "w");
    fprintf("%s","namaskar");
    fclose(FP);
    return 0;
}