#include <stdio.h>

int factorial(int num) {
  if (num <= 1){
    return 1;
  }
  else{
    return num * factorial(num - 1);
  }
}

int main() {
  for(int num = 0; num <= 21; num++){
    printf("%d! is %d\n", num, factorial(num));
  }
  return 0;
}
