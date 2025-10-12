/*verifique se uma matriz 2x2 e uma matriz de reflexao.*/
// matriz transposta pela original é identidade e determinante é -1
#include <stdio.h>
#include <stdlib.h>
#define LIN_SIZE 2
#define COL_SIZE 2

int** aloca_matriz(int linha, int coluna, int**matriz);
void scan_matriz(int linha, int coluna,int** matriz);
int identidade(int linha, int coluna, int**matriz);
void matriz_transposta(int linha, int coluna, int **matriz_trans, int **matriz);
int determinante(int **matriz);
int** mult_matriz(int linha, int coluna,int **multiplica, int** matriz, int**matriz2);

int main(){
    int **matriz, **transp, **multiplica;
    int iden, det;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);
    transp = aloca_matriz(COL_SIZE,LIN_SIZE,transp);
    multiplica = aloca_matriz(LIN_SIZE,COL_SIZE,multiplica);

    scan_matriz(LIN_SIZE,COL_SIZE,matriz);

    matriz_transposta(LIN_SIZE,COL_SIZE,transp,matriz);

    multiplica = mult_matriz(LIN_SIZE,COL_SIZE,multiplica,transp,matriz);

    iden = identidade(LIN_SIZE,COL_SIZE,multiplica);

    det = determinante(matriz);

    if(iden && det == -1) printf("a matriz é de reflexão");
    else printf("a matriz não é de identidade");


    for(int i=0; i<LIN_SIZE;i++) free(matriz[i]);
    free(matriz);

    for(int i=0;i<LIN_SIZE;i++) free(transp[i]);
    free(transp);

    for(int i=0;i<LIN_SIZE;i++) free(multiplica[i]);
    free(multiplica);

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

int** mult_matriz(int linha, int coluna,int **multiplica, int** matriz, int**matriz2){
    for(int i=0;i<linha;i++){
        for(int j=0;j<linha;j++){
            multiplica[i][j]= 0;
            for(int k=0; k<coluna;k++) multiplica[i][j] += (matriz[i][k] * matriz2 [k][j]);
        }

    }
    return multiplica;
}

int identidade(int linha, int coluna, int**matriz){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(i==j) if( matriz[i][j] != 1) return 0;
            if(i!=j) if( matriz[i][j] != 0) return 0;
        }
    }
    return 1;
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
    det = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
    return det;
}
