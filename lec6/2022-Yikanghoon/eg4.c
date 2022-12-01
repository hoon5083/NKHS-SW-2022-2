#include <stdio.h>

main(){
  int i =0;
  int* p = &i;
  i = 1;
  printf("%d\n", i); /* prints 1 */
  printf("%d\n", *p); /* prints 1 */
  *p = 2;
  printf("%d\n", i); /* prints 2 */
  printf("%d\n", *p); /* prints 2 */
}