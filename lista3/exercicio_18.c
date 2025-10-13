/*Declare e inicialize uma estrutura aninhada para armazenar as informacoes de um endereco (rua, numero, cidade) e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char rua[50];
    int numero;
    char cidade[30];
} Endereco;


void sacnEndereco(Endereco* saida){

    printf("Digite a cidade ");
    scanf("%s",saida->cidade);

    printf("Digite a rua ");
    scanf("%s",saida->rua);

    printf("Digite o numero ");
    scanf("%d",&saida->numero);

}

void printEndereco(Endereco* entrada){

    printf("Cidade: %s\nRua: %s\nNumero: %d\n",entrada->cidade, entrada->rua, entrada->numero);
}

int main(){
    Endereco* casa1;

    casa1 = malloc(sizeof(Endereco));

    sacnEndereco(casa1);

    printEndereco(casa1);

    free(casa1);
return 0;
}
