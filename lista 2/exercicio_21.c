/*verifique se uma matriz 3x3 e uma matriz de permutacao.*/
#include <stdio.h>
#include <stdlib.h>
#define LIN_SIZE 3
#define COL_SIZE 3

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void scan_matriz(int linha, int coluna,int** matriz);

int main(){
    int **matriz;
    int permut=1;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    scan_matriz(LIN_SIZE, COL_SIZE, matriz);

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0, aux=0;j<COL_SIZE;j++){
            if(matriz[i][j] == 1 && aux ==0) aux++;
            else if(matriz[i][j] == 1 && aux == 1) permut = 0;
            if(matriz[i][j] > 1) permut = 0;
        }
    }

    if(permut ==1) printf("a matriz e de permutacao");
    else printf("a matriz não e de permutacao");

    for(int i=0;i<LIN_SIZE;i++) free(matriz[i]);
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

void scan_matriz(int linha, int coluna,int** matriz){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Digite o elemento[%d][%d]: ",i+1 ,j+1);
            scanf("%d", &matriz[i][j]);
            printf("\n");
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