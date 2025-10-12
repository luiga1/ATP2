/*declare um array de 7 inteiros e use um ponteiro para calcular a soma dos elementos do array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main(){
    int vetor[SIZE], *ponteiro;
    int soma;
    ponteiro = vetor;
    srand(time(NULL));

    for(int i=0;i<SIZE;i++){
        *(ponteiro+i) = rand()%100;
    }
    for(int i=0;i<SIZE;i++){
        soma = soma + *(ponteiro+i);
    }
    printf("soma %d",soma);

return 0;}
