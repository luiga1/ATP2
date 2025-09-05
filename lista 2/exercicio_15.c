/*inverta a ordem das linhas de uma matriz 3x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL_SIZE 3
#define LIN_SIZE 3

void cria_matriz_rand(int** matriz);
void print_matriz(int** matriz);

int main(){
    int **matriz,
    **linha_copy;

    matriz = malloc(sizeof(int*)*LIN_SIZE);
    for(int i=0;i<COL_SIZE;i++){
        *(matriz + i) = malloc(sizeof(int)*COL_SIZE);
    }

    linha_copy = malloc(sizeof(int*)*LIN_SIZE);
    for(int i=0;i<COL_SIZE;i++){
        *(linha_copy + i) = malloc(sizeof(int)*COL_SIZE);
    }

    cria_matriz_rand(matriz);
    print_matriz(matriz);

    for(int i=0;i<COL_SIZE;i++){
        linha_copy[i] = matriz[0][i];
        matriz[0][i] = matriz[1][i];
        matriz[1][i] = linha_copy[i];
    }

    printf("a matriz trocada é ");
    print_matriz(matriz);

    for(int i=0;i<COL_SIZE;i++) free(*(matriz +i));
    free(matriz);
    free(linha_copy);

return 0;
}

void cria_matriz_rand(int** matriz){
    srand(time(0));
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            matriz[i][j] = rand()%10;
        }
    }
}

void print_matriz(int** matriz){
    printf("\n");
    for(int i=0;i<LIN_SIZE;i++){
            printf("\n");
        for(int j=0;j<COL_SIZE;j++){
            printf (" %d", matriz[i][j]);
        }
    }
     printf("\n\n");
}
