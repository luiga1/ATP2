/*declare um array de 8 numeros de ponto flutuante e use aritimetica de ponteiros para calcular a media dos valores.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 8

int main(){
    float vetor[MAX], *ptr, media;
    ptr = vetor;
    srand(time(NULL));

    for(int i=0;i<MAX;i++){
        *(ptr+i) = rand()%10;
    }
    media=*ptr;
    for(int i=1;i<MAX;i++){
        media = (media + *(ptr+i))/2;
    }
    printf("media %f",media);

return 0;}
