#include<stdio.h>
int main() {
  int num, i, j;
  char munjayeol[1001], munja;
  scanf("%d", &num);
  if (num < 1 || num > 10) {
    printf("1이상 10이하의 자연수를 넣어주세요\n");
    scanf("%d", &num);
  }
  for(i = 1; i <= num; i++) {
    scanf("%s", &munjayeol);
    printf("%c", munjayeol[0]);
    for(j = 0; munjayeol[j] != 0; j++) {
      munja = munjayeol[j];
    }
    printf("%c\n", munja);

  }
}