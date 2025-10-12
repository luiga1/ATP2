/*conte quantos elementos pares existem em uma matriz 3x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3
#define COL_SIZE 3
#define LIN_SIZE 3

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]);
void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);

int main(){
    int matriz[SIZE][SIZE],
     par=0;

    printf("A matriz e ");
    cria_matriz_rand(matriz);
    print_matriz(matriz);

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(matriz[i][j] % 2 ==0) par++;
        }
    }

    printf("existem %d numeros pares",par);

return 0;
}

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]){
    srand(time(0));
    for(int i=0;i<COL_SIZE;i++){
        for(int j=0;j<LIN_SIZE;j++){
            matriz[i][j] = rand()%10;
        }
    }
}

void print_matriz(int matriz[LIN_SIZE][COL_SIZE]){
    printf("\n");
    for(int i=0;i<LIN_SIZE;i++){
            printf("\n");
        for(int j=0;j<COL_SIZE;j++){
            printf (" %d", matriz[i][j]);
        }
    }
     printf("\n\n");
}
