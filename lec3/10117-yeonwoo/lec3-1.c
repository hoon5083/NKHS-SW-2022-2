#include <stdio.h>

int main(){
    int numA = 0, numB = 0;
    int p, m, mu, r;
    float d;

    scanf("%d %d", &numA, &numB);

    p = numA + numB;
    m = numA - numB;
    mu = numA * numB;
    d = (float)numA / numB;
    r = numA % numB;


    printf("합: %d\n" , p);
    printf("차: %d\n" , m);
    printf("곱: %d\n" , mu);
    printf("나누기: %f\n" , d);
    printf("나머지: %d\n" , r);
    return 0;
}