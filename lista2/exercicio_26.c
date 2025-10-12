/*verifique se uma matriz 3x3 e uma matriz esparsa (maioria dos elementos sao zeros).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 3

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void scan_matriz(int linha, int coluna,int** matriz);

int main(){
    int **matriz,
    zero;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    scan_matriz(LIN_SIZE,COL_SIZE,matriz);

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(matriz[i][j] == 0) zero++;
        }
    }
    print_matriz(LIN_SIZE,COL_SIZE,matriz);
    if(zero > 4) printf("a matriz é esparsa");
    else printf(" a matriz não é esparsa");

    for(int i=0;i<LIN_SIZE;i++) free(matriz[i]);
    free(matriz);

return 0;    
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
