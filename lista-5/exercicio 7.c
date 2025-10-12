/*Função recursiva para calcular a potencia de um numero*/
#include <stdio.h>

double calc_potencia(int base, int potencia);

int main(){
    int expoente,base;
    double resposta;

    printf("digite uma base");
    scanf("%d",&base);
    printf("digite um expoente");
    scanf("%d",&expoente);
    resposta = calc_potencia(base,expoente);
    printf("%f",resposta);

return 0;
}

double calc_potencia(int base, int expoente){

    if(expoente<0) return 1 / calc_potencia(base, expoente * -1 ); 
    if(expoente == 0) return 1;
    return base * calc_potencia(base, expoente -1);
}