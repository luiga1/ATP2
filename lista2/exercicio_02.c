/*calcule a soma dos elementos de uma matriz 4x4.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4
int main(){
    int matriz[SIZE][SIZE],
     i, j, soma;

    srand(time(0));
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            matriz[i][j] = rand()%10;
        }
    }

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            soma = soma + matriz[i][j];
        }
    }

    printf("a matriz e %d",soma);
return 0;}
