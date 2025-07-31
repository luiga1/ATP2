/*Função recursiva para verificar se é primo*/

#include <stdio.h>

int calc_primo(int n, int divsr){
    if(n <= 2) return (n == 2);
    if(n == divsr) return 1;
    if(n % divsr == 0){
        return 0;
    }else{
        calc_primo(n, divsr + 1);
    }
}
int primo(int n){
    return calc_primo(n, 2);
}

int main(){
    int num;

    printf("digite um numero");
    scanf("%d",&num);
    if(primo(num))
        printf("e primo");
    else
        printf("não e primo");

return 0;
}
