/*Utilize a definicao de tipos enumeraveis para representar os dias da semana e
imprima os valores. */

#include <stdio.h>
#include <stdlib.h>

typedef enum{
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
} Semana;

int main(){
    int i=0;

    printf("Dia %d : %d",i++,DOMINGO);

    printf("Dia %d : %d",i++,SEGUNDA);

    printf("Dia %d : %d",i++,TERCA);

    printf("Dia %d : %d",i++,QUARTA);

    printf("Dia %d : %d",i++,QUINTA);

    printf("Dia %d : %d",i++,SEXTA);

    printf("Dia %d : %d",i,SABADO);

    return 0;
}