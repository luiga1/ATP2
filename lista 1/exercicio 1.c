/*Função recursiva de fatorial*/
#include <stdio.h>

int fatorial(int n){
    int fat;
    if(n == 1 || n == 0){
        return 1;
    }else{
        fat = n * fatorial(n-1);
    }
return fat;
}

int main(){
    int resp, numero;
    printf("Digite um numero ");
    scanf("%d", &numero);
    resp = fatorial(numero);
    printf("o fatorial de %d e %d", numero, resp);

return 0;
}
