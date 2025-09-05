/*calcule a soma das colunas de uma matriz 4x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 4
#define COL_SIZE 3

void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);
int** aloca_matriz(int linha, int coluna, int**matriz);
int soma_coluna(int linha, int coluna, int** matriz);

int main(){
    int **matriz,
    *somas;

    matriz = aloca_matriz(LIN_SIZE, COL_SIZE,matriz);
    somas = malloc(sizeof(int)*4);



    for(int i=0;i<4;i++){
        somas[i] = soma_coluna(LIN_SIZE,i, matriz);
    }

    for(int i=0; i<4;i++){
        printf("a coluna %d vale %d\n",i+1,somas[i]);
    }

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

int soma_coluna(int linha, int coluna, int** matriz){
    int soma=0;
        for(int j=0;j<linha;j++){
            soma += matriz[j][coluna];
        }

    return soma;
}
