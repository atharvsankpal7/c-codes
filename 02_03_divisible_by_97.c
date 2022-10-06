#include<stdio.h>
int main()
{
int a;
printf("Enter the number that you want to check-->\n");
scanf("%d",&a);
if(a%97==0)
printf("The number is divisible by the 97");
else
printf("The number is not divisible by the 97");
return 0;
}