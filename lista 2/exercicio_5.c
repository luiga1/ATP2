/*transponha uma matriz 3x2 para uma matriz 2x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 2

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]);
void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);

int main(){
    int matriz[LIN_SIZE][COL_SIZE], resposta[COL_SIZE][LIN_SIZE];

    printf("a matriz é");
    cria_matriz_rand(matriz);
    print_matriz(matriz);
    printf("a matriz transposta e");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            resposta[i][j] = 0;
            resposta[i][j] += matriz[j][i];
        }
    }

    //imprimi matriz
    for(int i=0;i<COL_SIZE;i++){
            printf("\n");
        for(int j=0;j<LIN_SIZE;j++){
            printf (" %d", matriz[i][j]);
        }
    }
     printf("\n\n");

return 0;}

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
