#include <stdio.h>

main(){
  int i, j;
  int *p, *q;
  i = 1; j = 2; 
  p = &i;
  q = p;
  // p = &i;
  // q = &j;
  // *q = *p;
  printf("%d %d %d %d", i, j , *p, *q );
}