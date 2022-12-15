#include <stdio.h>

int main(){
    int yes = 7;
    int no = 3;
    int sum = yes + no;
    int sub = yes - no;
    int mul = yes * no;
    double div = (double)yes/no;
    int rest = yes%no;

    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%lf\n",div);
    printf("%d\n",rest);

}

#include <stdio.h>

int main(){

    int yes = 20;
     double div = (double)yes*9/5+32;

    printf("%lf\n",div);
    return 0;