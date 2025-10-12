/*Implemente uma funcao recursiva para verificar se uma palavra ́e um palindromo.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int palindromo(char *palavra, int tamanho, int i);

int main(){
    int tamanho, palin;
    char *palavra;

    palavra = malloc(sizeof(char)*SIZE);

    printf("DIgite uma palavra ");
    scanf("%s",palavra);
    tamanho = strlen(palavra);
    palin = palindromo(palavra, tamanho, 0);

    if(palin == 1) printf(" a palavra é palindromo");
    else printf(" a palavra nao e palindromo");
}

int palindromo(char *palavra, int tamanho, int i){
    if((tamanho-i-1) < i) return 1;
    if(*(palavra +i) == *(palavra + tamanho - i-1)){
        i++;
        return palindromo(palavra, tamanho, i);
    }
    else {
        return 0;
    }
}