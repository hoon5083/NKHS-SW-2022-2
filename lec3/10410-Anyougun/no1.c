#include <stdio.h>

int main(){
    int Woo = 0;
    scanf("%d",&Woo);
    int Ya = 0;
    scanf("%d",&Ya);

    int sum = Woo + Ya;
    int sub = Woo - Ya;
    int mul = Woo * Ya;
    double div = (double)Woo/Ya;
    int rest = Woo%Ya;

    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%lf\n",div);
    printf("%d\n",rest);

}
