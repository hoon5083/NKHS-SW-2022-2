#include <stdio.h>

void swap_ptr(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void reverse(int array[], int size){
// Fill in here
}

int main(){
  int num[10] = {1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<10; i++) {
    printf("%d ", num[i]);
  }
  printf("\n");
  reverse(num, 10);
  for(int i=0; i<10; i++) {
    printf("%d ", num[i]);
  }
  printf("\n");
  return 0;
}
