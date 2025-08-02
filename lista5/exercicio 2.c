/*Função recursiva de soma dos n primeiros numero naturais*/
#include<stdio.h>

int soma_naturais(int n){
    int total;
    if(n == 1){
        return 1;
    }else{
        total = n + soma_naturais(n-1);
    }
}

int main(){
    int n, soma;

    printf("Digite quantos numeros serao somados: ");
    scanf("%d", &n);
    soma = soma_naturais(n);
    printf("A soma dos primeiros %d naturais e %d", n , soma);

return 0;
}
