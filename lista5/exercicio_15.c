#include <stdio.h>
#include <stdlib.h>

void subconjuntos(int* array);

int main(){
    int tamanho, *conjunto;

    printf("digite o tamanho do conjunto ");
    scanf("%d",&tamanho);

    conjunto = malloc(sizeof(int) * tamanho);

    for(int i=0;i<tamanho;i++) *(conjunto +i) = i+1;

    subconjuntos(conjunto);

}

void subconjuntos(int* array){
    
}