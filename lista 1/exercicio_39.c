/*declare um array de 6 inteiros e passe esse array para uma função que conte quantos elementos são positivos.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STR_SIZE 6

int quantos_positivos(int *string){
    int positivo;
    for(int i=0; i<STR_SIZE;i++){
            printf(" %d ",*(string+i));
        if(*(string+i)>=0) positivo++;
    }
    return positivo;
}

int main(){
    int numeros[STR_SIZE], positivo;

    srand(time(0));
    for(int i=0;i<STR_SIZE;i++) numeros[i] = rand() %10 -5;

    positivo = quantos_positivos(numeros);

    printf("\n tem %d positivos",positivo);
return 0;
}
