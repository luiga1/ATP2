/*use um array de ponteiros para armazenar inteiros e encontre o maior valor entre eles.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STR_SIZE 5

int main(){
    int i,j, maior;
    char *ponteiro[STR_SIZE];

    for(i=0;i<STR_SIZE;i++) ponteiro[i] = malloc(sizeof(int));
    srand(time(0));
    for(i=0;i<STR_SIZE;i++){
         *ponteiro[i] = (rand()/10);
    }

    maior = *ponteiro[0];
    for(i=1;i<STR_SIZE;i++){
            printf("%d \t", *ponteiro[i]);
        if(maior < *ponteiro[i]);
        maior = *ponteiro[i];
    }
    printf("\n%d", maior);
return 0;
}

