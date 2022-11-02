#include <stdio.h>

int main() 
{
  int A, B;
  printf("Write A and B\n");
  scanf("%d %d", &A, &B);
  printf("A is %d, B is %d.\n",A, B);

  printf("%d\n",A+B);
  printf("%d\n",A-B);
  printf("%d\n",A*B);
  printf("%f\n",(double)A/(double)B);
  printf("%d\n",A%B);

  return 0;
}
