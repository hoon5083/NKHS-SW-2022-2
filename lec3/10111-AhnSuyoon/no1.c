#include <stdio.h>


int main(){
    int numA = 0, numB = 0;
    int sum, min, multi, rest;
    float div;
    
    scanf("%d %d", &numA, &numB);

    sum = numA + numB;
    min = numA - numB;
    multi = numA * numB;
    div = (float)numA / numB;
    rest = numA % numB;

    
    printf("합: %d\n" , sum);
    printf("차: %d\n" , min);
    printf("곱: %d\n" , multi);
    printf("나누기: %f\n" , div);
    printf("나머지: %d\n" , rest);
    return 0;
}
