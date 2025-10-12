/*Declare um array de 5 inteiros. Use um ponteiro para acessar e imprimir todos os elementos do array.*/
#include <stdio.h>

int main(){
    int vetor[5] = {1,2,3,4,5}, *ponteiro;
    ponteiro = vetor;

    for(int i=0;i<5;i++){
        printf("%d ",*(ponteiro+i));
    }
return 0;}
