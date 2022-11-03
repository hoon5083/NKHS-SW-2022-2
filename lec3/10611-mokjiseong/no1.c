#include <stdio.h>

int main(){
    int a = 7;
    int b = 3;
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    double div = (double)a/b;
    int rest = a%b;

    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%lf\n",div);
    printf("%d\n",rest);

}