#include <stdio.h>

int num = 0;

void test_global() {
  printf("num in test_global : %d\n", ++num);
}

int main() {
  printf("num in main : %d\n", num);
  {
    int num = 100;
    test_global();
    test_global();
    printf("num in main : %d\n", ++num);
  }
  printf("num in main : %d\n", num);
  return 0;
}
