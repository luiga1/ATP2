/*Atribua os valores de uma estrutura de endereco para outra e imprima os valores da nova estrutura.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char rua[50];
    int numero;
} Endereco;

Endereco scanEndereco(void);
void printEndereco(Endereco entrada);

int main(){
    Endereco casa, casa1;

    casa = scanEndereco();
    casa1 = casa;

    printEndereco(casa1);

return 0;
}

Endereco scanEndereco(void){
    Endereco saida;

    printf("Digite o nome da rua ");
    scanf("%s",saida.rua);

    printf("Digite o numero da casa ");
    scanf("%d",&saida.numero);

    return saida;
}

void printEndereco(Endereco entrada){

    printf("\n%s n- %d",entrada.rua, entrada.numero);
}
