/*Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar os meses do ano e
imprima os valores.*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Mes;

int main(){
    int i=0;

    printf("Dia %d : %d",i++,JANEIRO);

    printf("Dia %d : %d",i++,FEVEREIRO);

    printf("Dia %d : %d",i++,MARCO);

    printf("Dia %d : %d",i++,ABRIL);

    printf("Dia %d : %d",i++,MAIO);

    printf("Dia %d : %d",i++,JUNHO);

    printf("Dia %d : %d",i++,JULHO);

    printf("Dia %d : %d",i++,AGOSTO);

    printf("Dia %d : %d",i++,SETEMBRO);

    printf("Dia %d : %d",i++,OUTUBRO);

    printf("Dia %d : %d",i++,NOVEMBRO);

    printf("Dia %d : %d",i++,DEZEMBRO);

    return 0;
}
