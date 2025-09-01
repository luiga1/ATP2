#include <stdio.h>

 double ackermann( double m,  double n){
    if(m ==0) return n+1;
    if(m>0 && n==0) return ackermann(m-1, 1);
    if(m>0 && n>0) return ackermann(m-1, ackermann(m, n-1));
}

int main(){
     double num1, num2, resposta;

    printf("digite o numero m ");
    scanf("%Lf",&num1);
    printf("digite o numero n ");
    scanf("%Lf",&num2);

    resposta = ackermann(num1, num2);
    printf("%Lf",resposta);
}

