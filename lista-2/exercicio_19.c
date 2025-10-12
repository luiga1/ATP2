/*multiplique uma matriz 2x3 por uma matriz 3x2 e armazene o resultado em uma matriz 2x2.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 2
#define COL_SIZE 3

void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);
int** aloca_matriz(int linha, int coluna, int**matriz);
void mult_matriz(int **matriz, int** matriz_, int**multiplica);

int main(){
    int **matriz, **matriz_, **multiplica;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    matriz_ = aloca_matriz(COL_SIZE,LIN_SIZE,matriz_);
    multiplica = aloca_matriz(LIN_SIZE,LIN_SIZE,multiplica);

    srand(time(0));
    cria_matriz_rand(LIN_SIZE, COL_SIZE, matriz);
    cria_matriz_rand(COL_SIZE, LIN_SIZE, matriz_);

    printf("As matrizes sao");
    print_matriz(LIN_SIZE,COL_SIZE,matriz);
    print_matriz(COL_SIZE,LIN_SIZE,matriz_);


    printf("a multiplicacao e");
    mult_matriz(matriz, matriz_,multiplica);
    print_matriz(LIN_SIZE,LIN_SIZE,multiplica);

    //free matriz

    for (int i = 0; i < LIN_SIZE; i++) free(matriz[i]);
    free(matriz);

    for (int i = 0; i < LIN_SIZE; i++) free(matriz_[i]);
    free(matriz_);

    for (int i = 0; i < LIN_SIZE; i++) free(multiplica[i]);
    free(multiplica);

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

void mult_matriz(int **matriz, int** matriz_, int**multiplica){
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<LIN_SIZE;j++){
            multiplica[i][j]= 0;
            for(int k=0; k<COL_SIZE;k++) multiplica[i][j] += (matriz[i][k] * matriz_ [k][j]); // percorre a linha e a coluna pra multiplicar
        }

    }
}
