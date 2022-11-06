#include <stdio.h>

float main(){
 float C = 0;  
 float F;

scanf("%f" , &C);

F = C * 9 / 5 + 32;

printf("화씨온도: %f\n" , F);
return 0;
}