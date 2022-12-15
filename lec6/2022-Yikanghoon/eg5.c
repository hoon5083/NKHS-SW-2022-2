#include <stdio.h>

main(){
  int i, *p, *q;
  p = &i;
  q = p; 
  printf("%d %d\n", *p, *q);
  printf("%p %p\n", p, q);
  *p = 1;
  *q = 2;
  printf("%d %d\n", *p, *q);
  printf("%p %p\n", p, q);
}