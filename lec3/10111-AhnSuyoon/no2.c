#include <stdio.h>

void main(){
 float numC = 0;  
 float numF;

scanf("%f" , &numC);

numF = numC * 9 / 5 + 32;

printf("화씨온도: %f\n" , numF);
return 0;


}