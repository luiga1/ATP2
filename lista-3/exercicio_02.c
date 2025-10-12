/*Utilize a declaracao de tipos (typedef) para simplificar a definicao de uma estrutura
 para armazenar as informacoes de um carro (marca, modelo, ano) e imprima seus valores.*/

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
    Carro uno;

    uno = scanCarro();

    printCarro(uno);
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

    printf("%s \n%s \n%d",entrada.nome, entrada.modelo, entrada.ano);
}
