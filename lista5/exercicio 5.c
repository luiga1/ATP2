/*Função recursiva para verificar se e primo*/
#include <stdio.h>

int calc_primo(int n, int divisor){
    if(n <= 2) return (n == 2); //se o numero for menor que dois não é primo
    if(n == divisor) return 1; //parada quando paddar por todos os numeros 
    if(n % divisor == 0){ //caso algum numero anterior seja divisor ja nao é primo
        return 0;
    }else{
        calc_primo(n, divisor + 1); //chama para o proximo numero 
    }
}
int primo(int n){
    return calc_primo(n, 2); //chama o inicio do calculo com o menor primo 
}

int main(){
    int num;

    printf("digite um numero");
    scanf("%d",&num);
    if(primo(num))
        printf("e primo");
    else
        printf("nao e primo");

return 0;
}
