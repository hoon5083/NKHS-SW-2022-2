#include <stdio.h>
int main()
{
  int num = 0, sum = 0;
  while (num < 10) {
    sum += num++;
    printf("before if\n");
    if (sum < 20) {
      printf("num:%d sum:%d (continue)\n", num, sum);
      continue;
    } else {
      printf("num:%d sum:%d (break)\n", num, sum);
      break;
    }
    printf("after else\n");
  }
}
