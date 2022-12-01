#include <stdio.h>

main(){
  int number = 10;
  int *p;
  p = &number;

  printf("%d", *p);
}