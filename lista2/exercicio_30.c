/*calcule a media dos elementos de uma matriz 4x4.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 3

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);

int main(){
    int **matriz;
    float media;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    cria_matriz_rand(LIN_SIZE,COL_SIZE,matriz);

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(i==0 && j==0) media = matriz[i][j];
            else media = (media + matriz[i][j])/2;
        }
    }

    printf("a matriz é ");
    print_matriz(LIN_SIZE,COL_SIZE,matriz);
    printf("a media da matriz é %.2f", media);

    for(int i=0; i<LIN_SIZE;i++) free(matriz[i]);
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

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matriz[i][j] = rand()%10;
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
