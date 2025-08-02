/*Funcao recursiva para imprimir os elementos de um array na ordem inversa*/
#include <stdio.h>
#define TAM_MAX 15

void inverter(int *array, int i){
    if(i == TAM_MAX) return; // define quando chegar no final do array para executar a pilha 
    inverter(array, i+1); //faz que o print forme uma pilha ao contrario até o ultimo elemento do array
    printf("%d\t",array[i]);
}

int main(){
    int numeros[TAM_MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}; 

    inverter(numeros,0);

return 0;
}