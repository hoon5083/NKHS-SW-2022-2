#include <stdio.h>

main(){
  int i = 100;        // Note that we have two different asterisks.
  int* p = &i;        // for a pointer data type
  printf("%d\n", *p); // for dereferencing
  *p = 200;           // also for dereferencing
  printf("%d\n", *p);
}