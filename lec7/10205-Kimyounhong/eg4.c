#include <stdio.h>

int main(){
  int N = 0;
  scanf("%d",&N);

  for(int i = 0;i<N;i++){
    char string[1000];
    char lastChar;
    scanf("%s", string);
    printf("%c", string[0]);
    for(int j = 0 ; string[j] != 0 ; i++){
      lastChar = string[j];
    }
    printf("%c", lastChar);
  }
}