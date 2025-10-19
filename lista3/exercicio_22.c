/*Declare e inicialize uma uni ̃ao para armazenar um valor char ou um valor inteiro
e imprima seus valores.*/

#include <stdio.h>

typedef union {
    int i;
    char c;
}Valor;

int main(){
    Valor numero;

    numero.i = 10;
    printf("o valor 10 \n");
    printf("valor do inteiro %d \n", numero.i);
    printf("o valor do char %c \n",numero.c);

    numero.c = 'a';
    printf("as letras a \n");
    printf("valor do inteiro %d \n", numero.i);
    printf("o valor do char %c \n",numero.c);

return 0;
}
