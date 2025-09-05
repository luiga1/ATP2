/*calcule a soma das colunas de uma matriz 4x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 4
#define COL_SIZE 3

void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);
int** aloca_matriz(int linha, int coluna, int**matriz);
void soma_coluna(int linha, int coluna, int** matriz);

int main(){
    int **matriz;

    matriz = aloca_matriz(LIN_SIZE, COL_SIZE,matriz);

return 0;
}

// linha passa  soma o elemento da coluna e pula pra proxima linha

// terminar
