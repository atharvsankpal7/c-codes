#include <stdio.h>
#include <conio.h>
int main()
{

  int marks;

  printf("Marks obtained in the Exams --> ");

  scanf("%d", &marks);
  if (marks >= 75)

  {
    printf("Distinction");
  }
  else if (marks >= 60)
  {
    printf("First Class");
  }
  else if (marks >= 50)
  {
    printf("Second Class");
  }
  else if (marks >= 40)
  {
    printf("Passed");
  }
  else
  {
    printf("Failed");
  }

  return 0;
}