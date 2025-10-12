/*Declare e inicialize uma estrutura aninhada para armazenar as informacoes de uma data
(dia, mes, ano) e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

Data pegaData(void);

int main(){
    Data hoje;

    hoje = pegaData();

    printf("O dia é %d de %d de %d",hoje.dia, hoje.mes ,hoje.ano);

return 0;
}

Data pegaData(void){
    Data hoje;

    printf("digite o dia ");
    scanf("%d",&hoje.dia);
    printf("\ndigite o mes ");
    scanf("%d",&hoje.mes);
    printf("\ndigite o ano ");
    scanf("%d",&hoje.ano);

    return hoje;
}
