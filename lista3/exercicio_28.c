/*Acesse os componentes de uma estrutura de cliente (nome, idade, endereco)
utilizando o operador ponto ‘.’ e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[60];
}Cliente;

 Cliente scanCliente(void){
    Cliente saida;

    printf("Digite o nome ");
    scanf("%s",saida.nome);

    printf("Digite a idade ");
    scanf("%d",&saida.idade);

    printf("Digite o endereco ");
    scanf("%s",saida.endereco);

    return saida;
}

void printCliente(Cliente entrada){
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n",entrada.nome, entrada.idade, entrada.endereco);
}


int main(){
    Cliente cli1;

    cli1 = scanCliente();
    printCliente(cli1);

return 0;
}
