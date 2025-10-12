/*verifique se uma matriz 4x4 e uma matriz diagonal.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL_SIZE 4
#define LIN_SIZE 4

void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);
void scan_matriz(int matriz[LIN_SIZE][COL_SIZE]);


int main(){
    int matriz[LIN_SIZE][COL_SIZE], diagonal =0;

    printf("A matriz e ");
    scan_matriz(matriz);
    print_matriz(matriz);

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(i == j && matriz[i][j] != 0) diagonal = 1;
            else if(i != j && matriz[i][j] != 0 ) diagonal = 0;
        }
    }
    if(diagonal == 1) printf("a matriz é diagonal");
    else printf("a matriz nao diagonal");
return 0;
}

void print_matriz(int matriz[LIN_SIZE][COL_SIZE]){
    printf("\n");
    for(int i=0;i<LIN_SIZE;i++){
            printf("\n");
        for(int j=0;j<COL_SIZE;j++){
            printf (" %d", matriz[i][j]);
        }
    }
     printf("\n\n");
}

void scan_matriz(int matriz[LIN_SIZE][COL_SIZE]){
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            printf("Digite o elemento[%d][%d]: ",i+1 ,j+1);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }
}
