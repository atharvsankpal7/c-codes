#include<stdio.h>
int main()
{
 int a= 123450,rem,rev=0;
    while (a!=0)
    {
        rem=a%10;
        a/=10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
return 0;
}