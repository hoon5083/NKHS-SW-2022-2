#include <stdio.h>

void set_one(int a) {
  a = 1;
}

void main() {
  int num = 7;
  set_one(num);
  printf("%d\n", num); //what happens?
}
