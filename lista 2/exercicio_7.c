/*verifique se uma matriz 3x3 e simetrica.*/
// matriz simetrica tranposta é igual a normal
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 3

void matriz_transposta(int matriz_trans[COL_SIZE][LIN_SIZE] ,int matriz[LIN_SIZE][COL_SIZE]);
void scan_matriz(int matriz[LIN_SIZE][COL_SIZE]);

int main(){
    int matriz[LIN_SIZE][COL_SIZE],matris_t[COL_SIZE][LIN_SIZE],
    igual=1;

    printf("Digite uma matriz quadrada \n");
    scan_matriz(matriz);
    matriz_transposta(matris_t, matriz);

    //comparar matriz

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(matriz[i][j] != matris_t[i][j]) igual =0;
        }
    }
    if(igual == 1) printf("A matriz e simetrica");
    else printf("A matriz nao e simetrica");

return 0;
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

void matriz_transposta(int matriz_trans[COL_SIZE][LIN_SIZE] ,int matriz[LIN_SIZE][COL_SIZE]){
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            matriz_trans[j][i] = matriz[i][j];
        }
    }
}

