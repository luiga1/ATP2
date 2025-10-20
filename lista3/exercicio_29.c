/*Acesse os componentes de uma estrutura de cliente (nome, idade, endereco)
utilizando o operador “->” e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char endereco[50];
    int idade;
} Cliente;

void scanCliente(Cliente* saida){

    printf("Digite o nome ");
    scanf("%s",saida->nome);

    printf("Digite o endereco ");
    scanf("%s",saida->endereco);

    printf("Digite a idade ");
    scanf("%d",&saida->idade);

}

void printCliente(Cliente* entrada){

    printf("Nome: %s\nEndereco: %s\nIdade: %d\n",entrada->nome, entrada->endereco, entrada->idade);
}

int main(){
    Cliente* cli1;

    cli1 = malloc(sizeof(Cliente));

    scanCliente(cli1);

    printCliente(cli1);

    free(cli1);
return 0;
}
