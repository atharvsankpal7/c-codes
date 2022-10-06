#include<stdio.h>
int main()
{
int a[2]={1,2,3};
int *ptr=&a;
ptr+=3;
printf("%d",*ptr);
return 0;
}