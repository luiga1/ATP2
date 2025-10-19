/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
produto (nome, c ́odigo, preco) e imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[150];
    int codigo;
    float preco;

} Produto;

int main(){
    Produto garrafa;
    int tamanho = sizeof(garrafa);

    printf(" o tamanho e %d",tamanho);

return 0;
}
