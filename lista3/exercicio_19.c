/*Crie uma funcao que recebe uma estrutura de carro (marca, modelo, ano) como
parametro e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char modelo[50];
    int ano;
} Carro;

void scanCarro(Carro* saida);
void printCarro(Carro* entrada);

int main(){
    Carro* car1;

    car1 = malloc(sizeof(Carro));

    scanCarro(car1);
    printCarro(car1);

    free(car1);

return 0;
}

void scanCarro(Carro* saida){

    printf("Digite o nome do carro  ");
    scanf("%s",saida->nome);

    printf("Digite o modelo do carro  ");
    scanf("%s",saida->modelo);

    printf("Digite o ano do carro  ");
    scanf("%d",&saida->ano);

}

void printCarro(Carro* entrada){

    printf("\n%s \n%s \n%d",entrada->nome, entrada->modelo, entrada->ano);
}
