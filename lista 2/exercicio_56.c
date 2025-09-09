/*preencha uma matriz 4x4 com numeros aleatorios e depois encontre o terceiro maior elemento.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 4
#define COL_SIZE 4

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void cria_matriz_rand(int linha, int coluna, int** matriz);
int terceiro_maior(int linha, int coluna, int** matriz);

int main(){
    int **matriz, tm;

    matriz = aloca_matriz(LIN_SIZE, COL_SIZE,matriz);

    cria_matriz_rand(LIN_SIZE,COL_SIZE,matriz);

    tm = terceiro_maior(LIN_SIZE,COL_SIZE,matriz);

    print_matriz(LIN_SIZE,COL_SIZE,matriz);
    printf("o terceiro maior e %d",tm);

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
            matriz[i][j] = rand()%25 +1;
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

int terceiro_maior(int linha, int coluna, int** matriz){
    int maior=0, segundo =0, terceiro=0;

    for(int i=0;i<linha;i++){
        for(int j=0; j < coluna;j++) {
            if (matriz[i][j] > maior) {
                terceiro = segundo;
                segundo = maior;
                maior = matriz[i][j];
            } else if (matriz[i][j] < maior && matriz[i][j] > terceiro) {
                if(matriz[i][j] < segundo) terceiro = matriz[i][j];
                if(matriz[i][j] > segundo){
                    terceiro = segundo;
                    segundo = matriz[i][j];
                }
            }
        }
    }
    return terceiro;
}
