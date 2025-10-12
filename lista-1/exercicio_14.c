/* declare um array de 5 inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores dos elementos do array. Imprima o array resultante.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetor[5] = {1,2,3,4,5}, *ponteiro;
    ponteiro = vetor;
    srand(time(NULL));

    for(int i=0;i<5;i++){
        *(ponteiro+i) = rand()%10;
    }
    for(int i=0;i<5;i++){
        printf("%d ",*(ponteiro+i));
    }

return 0;}


