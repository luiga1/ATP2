/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
pessoa (nome, idade, altura) e imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[150];
    int idade;
    float altura;

} Pessoa;

int main(){
    Pessoa julio;
    int tamanho = sizeof(julio);
    printf(" o tamanho é %d",tamanho);
return 0;}
