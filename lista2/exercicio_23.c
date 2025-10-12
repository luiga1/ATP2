/*calcule o determinante de uma matriz quadrada 3x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 3

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);

int main(){
    int **matriz, determinante=0;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);

    cria_matriz_rand(LIN_SIZE,COL_SIZE,matriz);

    printf("a matriz é ");
    print_matriz(COL_SIZE,LIN_SIZE,matriz);

    determinante = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
                   (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
                   (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
                   (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
                   (matriz[0][0] * matriz[1][2] * matriz[2][1]) -
                   (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    
    printf("o determinante é %d",determinante);

    for(int i=0;i<LIN_SIZE;i++) free(matriz[i]);
    free(matriz);

return 0; 
}

void cria_matriz_rand(int linha, int coluna, int** matriz){
    srand(time(0));
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matriz[i][j] = rand()%6;
        }
    }
}

int** aloca_matriz(int linha, int coluna, int**matriz){
    matriz = malloc(sizeof(int*)*linha);
    for(int i=0;i<linha;i++){
        *(matriz + i) = malloc(sizeof(int)*coluna);
    }
    return matriz;
}

void print_matriz(int linha, int coluna, int** matriz){
    printf("\n");
    for(int i=0;i<linha;i++){
            printf("\n");
        for(int j=0;j<coluna;j++){
            printf (" %d", matriz[i][j]);
        }
    }
     printf("\n\n");
}