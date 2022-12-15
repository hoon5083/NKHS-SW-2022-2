#include <stdio.h>
int main() {
  int max, i = 4, j = 10, k = 1; 
  if (i > j) {
    if (i > k) {
      max = i;
    } 
    else{
      max = k;
    } 
  } else {
    if (j > k){ 
      max = j;
    } 
    else{ 
      max = k;
    }
  }
  printf("max: %d\n", max);
  return 0;
}
