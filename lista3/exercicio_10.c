/*Declare e inicialize uma uniao para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.*/

#include <stdio.h>

typedef union {
    int i;
    float f;
}Valor;

int main(){
    Valor numero;

    numero.i = 10;
    printf("o valor 10 \n");
    printf("valor do inteiro %d \n", numero.i);
    printf("o valor do float %.2f \n",numero.f);

    numero.f = 10.987;
    printf("o valor 10.987 \n");
    printf("valor do inteiro %d \n", numero.i);
    printf("o valor do float %.2f \n",numero.f);

    /** Nesse caso o valor do segundo inteiro vai ser lido todo o binario
     *  ja que estão no mesmo local de memoria por isso resulta em numeros estranhos
    */
return 0;
}
