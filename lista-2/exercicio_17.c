/*encontre a posicao (linha e coluna) de um elemento especifico em uma matriz 3x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL_SIZE 3
#define LIN_SIZE 3

void cria_matriz_rand(int** matriz);
void print_matriz(int** matriz);

int main(){
    int **matriz,
    numero;

    matriz = malloc(sizeof(int*)*LIN_SIZE);
    for(int i=0;i<COL_SIZE;i++){
        *(matriz + i) = malloc(sizeof(int)*COL_SIZE);
    }

    cria_matriz_rand(matriz);
    print_matriz(matriz);

    printf("digite um numero da matriz ");
    scanf("%d", &numero);

    for(int i=0; i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(matriz[i][j] == numero) printf("o numero esta na posicao [%d][%d]\n",i+1,j+1);
        }
    }

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
