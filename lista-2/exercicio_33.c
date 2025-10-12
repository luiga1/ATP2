/*menor elemento em uma matriz 5x5.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 5
#define COL_SIZE 5

int** aloca_matriz(int linha, int coluna, int**matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);
void print_matriz(int linha, int coluna, int** matriz);

int main(){
    int **matriz,menor;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    cria_matriz_rand(LIN_SIZE,COL_SIZE,matriz);
    
    menor = matriz[0][0];

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }

    print_matriz(LIN_SIZE,COL_SIZE,matriz);
    printf("o menor elemento é %d",menor);

    for(int i=0;i<LIN_SIZE;i++)free(matriz[i]);
    free(matriz);

    return 0;
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

void cria_matriz_rand(int linha, int coluna, int** matriz){
    srand(time(0));
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matriz[i][j] = rand()%25;
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
