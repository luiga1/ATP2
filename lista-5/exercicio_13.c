/*Escreva uma funcao recursiva para encontrar o numero de ocorrencia de um elemento em um array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int ocorrencia(int *array, int numero, int i);

int main(){
    int *array, numero, qnt;

    array = malloc(sizeof(int) * SIZE);

    srand(time(0));

    for(int i=0;i<SIZE;i++) *(array +i) = rand()%10;

    printf("Digite um numero entre 0 e 9 ");
    scanf("%d",&numero);
    qnt = ocorrencia(array, numero, 0);
    for(int i=0;i<SIZE;i++) printf(" %d ", *(array +i));
    printf("\n o numero %d ocorreu %d vezes no array \n", numero, qnt);


return 0;
}

int ocorrencia(int *array, int numero, int i){
    int vezes=0;
    if(i == SIZE) return 0;
    if(*(array+i) == numero){
        i++;
        vezes++;
        return vezes + ocorrencia(array, numero, i);
    }
    else{
        i++;
        return vezes + ocorrencia(array, numero, i);
    }

}