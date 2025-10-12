/*implemente a busca binaria em uma matriz ordenada 4x4.*/
// ordenar a matriz e depois procurar
#include <stdio.h>
#include <stdlib.h>
#define LIN_SIZE 4
#define COL_SIZE 4

int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
int busca_binaria_matriz(int linha, int coluna, int num, int **matriz);

int main(){
    int **matriz,
    numero;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);

    for(int i=0; i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            matriz[i][j] = LIN_SIZE *i +j;
        }
    }

    printf("a matriz é ");
    print_matriz(LIN_SIZE,COL_SIZE,matriz);

    printf("digite o elemento que sera buscado ");
    scanf("%d",&numero);

    if(busca_binaria_matriz(LIN_SIZE,COL_SIZE,numero,matriz)) printf("o numero esta na matriz");
    else printf("o numero nao esta na matriz");

    for(int i=0;i<LIN_SIZE;i++) free(matriz[i]);
    free(matriz);
    
return 0;
}

int busca_binaria_matriz(int linha, int coluna, int num, int **matriz){

    for (int i = 0; i < linha; i++){
        int inicio = 0;
        int fim = coluna - 1;

        while (inicio <= fim){
            int pivo = (int) (inicio + fim) / 2;

            if (num < matriz[i][pivo]) fim--;
            
            if (num > matriz[i][pivo]) inicio++;
            
            if (num == matriz[i][pivo]) return 1;
            
        }
    }
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

int** aloca_matriz(int linha, int coluna, int**matriz){
    matriz = malloc(sizeof(int*)*linha);
    for(int i=0;i<linha;i++){
        *(matriz + i) = malloc(sizeof(int)*coluna);
    }
    return matriz;
}