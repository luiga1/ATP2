/*verifique se uma matriz 3x3 e uma matriz identidade.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN_SIZE 3
#define COL_SIZE 3

void cria_matriz_rand(int** matriz);
void print_matriz(int** matriz);
void scan_matriz(int** matriz);
int identidade(int** matriz);

int main(){
    int **matriz, iden;

    matriz = malloc(sizeof(int*)*LIN_SIZE);
    for(int i=0;i<COL_SIZE;i++){
        *(matriz + i) = malloc(sizeof(int)*COL_SIZE);
    }


    scan_matriz(matriz);

    iden = identidade(matriz);

    if(iden == 0) printf("a matriz não é identidade");
    else printf("a matriz é identidade");

    for(int i=0;i<COL_SIZE;i++) free(*(matriz +i));
    free(matriz);

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

void scan_matriz(int** matriz){
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            printf("Digite o elemento[%d][%d]: ",i+1 ,j+1);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }
}

int identidade(int** matriz){
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(i==j) if( matriz[i][j] != 1) return 0;
            if(i!=j) if( matriz[i][j] != 0) return 0;
        }
    }
    return 1;
}
