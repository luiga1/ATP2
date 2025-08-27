/*verifique se duas matrizes 2x2 são iguais.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 2


int main(){
    int matriz1[SIZE][SIZE] ={1,2,3,4},
     matriz2[SIZE][SIZE] = {1,2,3,4},
     i, j, igual=1;

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            if(matriz1[i][j] != matriz2[i][j]) igual =0;
        }
    }
    if(igual) printf("as matrizes sao iguais");
    else printf("a matrizes sao diferentes");

return 0;
}
