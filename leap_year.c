#include <stdio.h>

int main()
{
   int a;
   printf("Enter the year -->");
   scanf("%d", &a);
   if (a % 4 == 0)
   {

      printf("The given year is leap year ");
   }

   else
   {
      printf("the given year is not a leap year");
   }
   return 0;
}