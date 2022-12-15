#include <stdio.h>

int main(){
    int A, B;
    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);

    printf("A + B = %d\n", A+B);
    printf("A - B = %d\n", A-B);
    printf("A * B = %d\n", A*B);
    printf("A / B = %d\n", A/B);
    printf("A 나머지 B = %d", A%B);
    return 0;
}