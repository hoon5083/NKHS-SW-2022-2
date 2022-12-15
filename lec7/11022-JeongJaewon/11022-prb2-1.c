#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  
  if (n > 100000) {
    printf("100000 이하의 자연수를 입력해 주십시오.\n");
    scanf("%d", &n);
  }
  else if (n < 0) {
    printf("자연수를 입력해 주십시오.\n");
    scanf("%d", &n);
  }

  for (i = 1; i <= n; i++) {
    printf("%d\n", i);
  }
  return 0;
}