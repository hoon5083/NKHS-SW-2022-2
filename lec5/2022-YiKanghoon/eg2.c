#include <stdio.h>
double avg(){
  return (num1 + num2)/2.0;
}

int main(){
  int num1, num2;
  printf("Input two numbers(ex: 1 2): ");
  scanf("%d %d", &num1, &num2);
  printf("Average of %d and %d is %f.\n", num1, num2, avg( ));
  return 0;
}
