#include <stdio.h>
int main() {
  int num = 8;
  switch (num) {
    case 7:
      printf("Value is 7\n");
      //break;
    case 8:
      printf("Value is 8\n");
      //break;
    case 9:
      printf("Value is 9\n");
      //break;
    default:
      printf("Out of range\n");
  }
  printf("End of switch\n");
  return 0;
}
