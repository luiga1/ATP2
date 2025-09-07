/*multiplique uma matriz 3x3 por um escalar.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 3

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);
int** mult_matriz(int linha, int coluna,int **multiplica, int** matriz, int**matriz2);

int main(){
    int **matriz, **escalar, **multiplica ,k;

    matriz = aloca_matriz(LIN_SIZE, COL_SIZE, matriz);
    escalar = aloca_matriz(LIN_SIZE,COL_SIZE,escalar);
    multiplica = aloca_matriz(COL_SIZE,LIN_SIZE,multiplica);

    //matriz escalar
    srand(time(0));
    k = rand()%5 +1;

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(i ==j) escalar[i][j] = k;
        }
    }

    cria_matriz_rand(LIN_SIZE,COL_SIZE,matriz);

    printf("a matriz é");
    print_matriz(LIN_SIZE,COL_SIZE,matriz);
    print_matriz(LIN_SIZE, COL_SIZE,escalar);

    multiplica = mult_matriz(LIN_SIZE,COL_SIZE,multiplica,matriz,escalar);
    printf("a multiplicação e");
    print_matriz(LIN_SIZE,COL_SIZE,multiplica);

    //free
    for(int i=0;i<LIN_SIZE;i++) free(matriz[i]);
    free(matriz);

    for(int i=0;i<LIN_SIZE;i++) free(escalar[i]);
    free(escalar);

    for(int i=0;i<LIN_SIZE;i++) free(multiplica[i]);
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

int** mult_matriz(int linha, int coluna,int **multiplica, int** matriz, int**matriz2){
    for(int i=0;i<linha;i++){
        for(int j=0;j<linha;j++){
            multiplica[i][j]= 0;
            for(int k=0; k<coluna;k++) multiplica[i][j] += (matriz[i][k] * matriz2 [k][j]);
        }

    }
    return multiplica;
}
