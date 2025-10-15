/*Atribua os valores de uma estrutura de contato para outra e imprima os valores
da nova estrutura.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int numero;
} Contato;

Contato scanContato(void);
void printContato(Contato entrada);

int main(){
    Contato pessoa, pessoa1;

    pessoa = scanContato();
    pessoa1 = pessoa;

    printContato(pessoa1);

return 0;
}

Contato scanContato(void){
    Contato saida;

    printf("Digite o nome  ");
    scanf("%s",saida.nome);

    printf("Digite o numero da pessoa ");
    scanf("%d",&saida.numero);

    return saida;
}

void printContato(Contato entrada){

    printf("\n%s \nNumero: %d",entrada.nome, entrada.numero);
}
