/*declare um array de 8 inteiros e passe esse array para uma funcao que inverta a ordem dos elementos do array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STR_SIZE 8

void inverte(int *string_invert, int *string){
    for(int i=0; i<STR_SIZE;i++){
        printf(" %d ",*(string+i));
        *(string_invert + STR_SIZE -i -1) = *(string + i);
    }
}

int main(){
    int numeros[STR_SIZE], numeros_invert[STR_SIZE];

    srand(time(0));
    for(int i=0;i<STR_SIZE;i++) numeros[i] = rand() %10;

    inverte(numeros_invert, numeros);

    printf("\n a string invertida e ");
    for(int i=0;i<STR_SIZE;i++) printf("%d ",*(numeros_invert +i));
return 0;
}
