#include <stdio.h>

int main(){
   int A=0;
  scanf("%d",&A);
   int B=0;
  scanf("%d",&B);
    
    
    int sum = A + B;
    int sub = A - B;
    int mul = A * B;

    double div = (double)A/B;
    int rest = A%B;

    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%lf\n",div);
    printf("%d\n",rest);

}
