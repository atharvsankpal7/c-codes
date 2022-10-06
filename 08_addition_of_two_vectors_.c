#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} chom;
chom add(chom v1, chom v2)
{
    chom result;
    result.x = v1.x + v1.y;
    result.y = v2.x + v2.y;
    return result;
}
int main()
{
    chom v1, v2, s;
    v1.x = 10;
    v1.y = 67;
    v2.x = 69;
    v2.y = 29;

    printf("The x axis of the v1 is %d\nThe y axis of the v1 is %d\n", v1.x, v1.y);
    printf("The x axis of the v2 is %d\nThe y axis of the v2 is %d\n", v2.x, v2.y);
    printf("The result of the addition of these two vectors is ->\n");
    s = add(v1, v2);
    printf("The x axis of the addition is %d\nThe y axis of the addition is %d\n ", s.x, s.y);
    return 0;
}