/*Atribua os valores de uma estrutura para outra e imprima os valores da nova estrutura.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char modelo[50];
    int ano;
} Carro;

Carro scanCarro(void);
void printCarro(Carro entrada);

int main(){
    Carro uno, uno2;

    uno = scanCarro();

    uno2 = uno;

    printCarro(uno2);
return 0;
}

Carro scanCarro(void){
    Carro saida;

    printf("Digite o nome do carro  ");
    scanf("%s",&saida.nome);

    printf("Digite o modelo do carro  ");
    scanf("%s",&saida.modelo);

    printf("Digite o ano do carro  ");
    scanf("%d",&saida.ano);

    return saida;
}

void printCarro(Carro entrada){

    printf("\n%s \n%s \n%d",entrada.nome, entrada.modelo, entrada.ano);
}
