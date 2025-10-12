/*preencha uma matriz 4x4 com numeros aleatorios e depois ordene os elementos de cada linha.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 4
#define COL_SIZE 4

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);

int main(){
    int **matriz, aux;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    cria_matriz_rand(LIN_SIZE, COL_SIZE, matriz);

    for(int i=0;i<LIN_SIZE;i++){

        for(int j=0;j<COL_SIZE;j++){
            for(int k=j;k<COL_SIZE;k++){
                if(matriz[i][j] > matriz[i][k]){
                    aux = matriz[i][j];
                    matriz[i][j] = matriz[i][k];
                    matriz[i][k] = aux;
                }
            }
        }

    }

    printf("a matriz organizada é ");
    print_matriz(LIN_SIZE,COL_SIZE,matriz);

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