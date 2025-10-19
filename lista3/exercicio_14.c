/*Utilize a declaracao de tipos (typedef) para simplificar a definicaoo de uma es
trutura para armazenar as informacoes de um cliente (nome, idade, endereco) e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

/*estrutura cliente*/
typedef struct Cliente {
    char nome[50];
    int idade;
    char endereco[60];
}Cliente;

void printCliente(Cliente entrada);
void scanCliente(Cliente* cliente);

int main(){
    Cliente cliente1;

    scanCliente(&cliente1);

    printCliente(cliente1);

return 0;    
}

void scanCliente(Cliente *cliente){
    
    printf("Digite o nome do cliente: ");
    scanf("%s",cliente->nome);

    printf("Digite a idade: ");
    scanf("%d",&cliente->idade);

    printf("Digite o endereço: ");
    scanf("%s",cliente->endereco);
}

void printCliente(Cliente entrada){

    printf("Nome: %s\n", entrada.nome);

    printf("Idade: %d\n", entrada.idade);

    printf("Endereço: %s\n", entrada.endereco);

}