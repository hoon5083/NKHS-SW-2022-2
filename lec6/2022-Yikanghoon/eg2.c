#include <stdio.h>

main(){
  char c = 'a'; 
  float f = 3.2; 
  int i = 4;
  char* ptr_c = &c; 
  float* ptr_f = &f;
  int* ptr_i = &i;

  printf("%c %f %d / %c %f %d ", c,f,i,*ptr_c,*ptr_f,*ptr_i );
}