#include <stdio.h>

int main()
{
  double Cel;
  printf("Input Celsius :");
  scanf("%lf", &Cel);
  printf("Celsius to Fahrenheit : %lf\n",Cel*9/5+32);
  return 0;
}