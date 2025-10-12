/*realize a rotacao de uma matriz quadrada 4x4 no sentido horario.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4
#define COL_SIZE 4
#define LIN_SIZE 4

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]);
void matriz_transposta(int matriz_trans[COL_SIZE][LIN_SIZE] ,int matriz[LIN_SIZE][COL_SIZE]);
void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);

int main(){
    int matriz[SIZE][SIZE], matriz_h[SIZE][SIZE];

    printf("A matriz e ");
    cria_matriz_rand(matriz);
    print_matriz(matriz);
    matriz_transposta(matriz_h,matriz);
    matriz_transposta(matriz,matriz_h);

    print_matriz(matriz_h);

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


void matriz_transposta(int matriz_trans[COL_SIZE][LIN_SIZE] ,int matriz[LIN_SIZE][COL_SIZE]){
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            matriz_trans[j][i] = matriz[i][j];
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
