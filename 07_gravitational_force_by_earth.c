#include <stdio.h>
float gf();
int main()
{

  printf("The gravitational force acting on the body is -->%f", gf());

  return 0;
}
float gf()
{
  int g;
  printf("Enter the value of the mass of body -->");
  scanf("%d", &g);
  float a;
  a = 9.81 * g;

  return a;
}