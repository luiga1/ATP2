/*Implemente uma funcao recursiva para calcular a soma dos digitos de um numero inteiro.*/
#include <stdio.h>

int soma_digitos(int numero);

int main(){
    int numero, soma;

    printf("Digite um numero ");
    scanf("%d",&numero);
    soma = soma_digitos(numero);
    printf("a soma dos digitos é %d ", soma);
}

int soma_digitos(int numero){
    int i=0;
    i= numero/10; // verifica o primeiro digito se não é unidade
    if(i ==0) return numero; // retorna o ultimo digito do numero
    return numero%10 + soma_digitos(i); // soma o ultimo digito com o proximo digito
}
