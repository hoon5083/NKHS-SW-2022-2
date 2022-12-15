#include <stdio.h>

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap_ptr(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

main(){
  int a = 1, b=2;

  printf("%d %d \n", a, b);
  swap(a, b);
  printf("%d %d \n", a, b);
  swap_ptr(&a, &b);
  printf("%d %d \n", a, b);
}