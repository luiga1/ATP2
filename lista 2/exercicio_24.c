/*verifique se duas matrizes 3x3 sao ortogonais.*/
//matriz transposta é igual a inversa
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 3

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);
void matriz_transposta(int linha, int coluna, int **matriz_trans, int **matriz);
int determinante(int **matriz);
int comp_matriz(int linha, int coluna ,int **matriz, int **matriz2);


int main(){
    int **matriz,
    **matriz_t,
    **inv,
    det;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    matriz_t = aloca_matriz(COL_SIZE,LIN_SIZE,matriz_t);
    inv = aloca_matriz(LIN_SIZE,COL_SIZE,inv);

    matriz_transposta(LIN_SIZE, COL_SIZE,matriz_t,matriz);

    det = determinante(matriz);

    // calcular a inversa
    inv[0][0] =  (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) / det;
    inv[0][1] = -(matriz[0][1] * matriz[2][2] - matriz[0][2] * matriz[2][1]) / det;
    inv[0][2] =  (matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1]) / det;

    inv[1][0] = -(matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) / det;
    inv[1][1] =  (matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0]) / det;
    inv[1][2] = -(matriz[0][0] * matriz[1][2] - matriz[0][2] * matriz[1][0]) / det;

    inv[2][0] =  (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]) / det;
    inv[2][1] = -(matriz[0][0] * matriz[2][1] - matriz[0][1] * matriz[2][0]) / det;
    inv[2][2] =  (matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0]) / det;

    if(comp_matriz(LIN_SIZE, COL_SIZE,matriz_t,inv)) printf("a matriz é ortogonal");
    else printf("a matriz não é ortogonal");

    for(int i=0;i<LIN_SIZE;i++) free(matriz[i]);
    free(matriz);

    for(int i=0;i<LIN_SIZE;i++) free(matriz_t);
    free(matriz_t);

    for(int i=0;i<LIN_SIZE;i++) free(inv[i]);
    free(inv);

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

void matriz_transposta(int linha, int coluna, int **matriz_trans, int **matriz){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matriz_trans[j][i] = matriz[i][j];
        }
    }
}

int determinante(int **matriz){
    int det;
    det = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
        (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
        (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
        (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
        (matriz[0][0] * matriz[1][2] * matriz[2][1]) -
        (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    return det;
}

int comp_matriz(int linha, int coluna ,int **matriz, int **matriz2){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(matriz[i][j] != matriz2[i][j]) return 0;
        }
    }
    return 1;
}