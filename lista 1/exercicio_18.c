/*declare um array de 10 inteiros e use aritimetica de ponteiros para calcular a soma de todos os elementos do array. Imprima a soma.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){
    int vetor[MAX], *ptr;
    int soma;
    ptr = vetor;
    srand(time(NULL));

    for(int i=0;i<MAX;i++){
        *(ptr+i) = rand()%10;
    }
    for(int i=0;i<MAX;i++){
        soma = soma + *(ptr+i);
    }
    printf("soma %d",soma);

return 0;}

