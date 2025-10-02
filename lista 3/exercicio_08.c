/*Declare um arranjo de estruturas para armazenar as informacoes de 5 produtos
(nome, codigo, preco) e imprima seus valores.*/

#include <stdio.h>
#define SIZE 5

typedef struct{
    char nome[150];
    int codigo;
    float preco;
} Produto;

void printProduto(Produto* produto);
void coletarProduto(Produto* produto);

int main(){
    Produto estoque[SIZE];

    for(int i=0;i<SIZE;i++){
        coletarProduto((estoque +i));
    }

    for(int i=0;i<SIZE;i++){
        printProduto((estoque +i));
    }

return 0;
}

void printProduto(Produto* estoque){

   printf("O produto é %s \n codigo %d \n preco %.2f \n",estoque->nome, estoque->codigo, estoque->preco);
}

void coletarProduto(Produto *produto){
    printf("Digite o nome do produto ");
    scanf("%s",produto->nome);

    printf("digite o codigo ");
    scanf("%d",&produto->codigo);

    printf("digite o preco ");
    scanf("%f",&produto->preco);
}
