#include <stdio.h>

int main(){
  int a = 10;
  int b = 20;

  if(a == 10 && b ==10){
    printf("a, b == 10\n");
  }
  if(a == 10 || b ==10){
    printf("a or b == 10\n");
  }
  if(!(a == 11)){
    printf("a is not 10\n");
  }
}