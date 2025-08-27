/*calcule a diagonal principal de uma matriz 5x5.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
#define LIN_SIZE 5
#define COL_SIZE 5

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]);
void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);

int main(){
    int matriz[SIZE][SIZE],diagonal[SIZE][SIZE];

    cria_matriz_rand(matriz);

    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(i==j) diagonal[i][j] = matriz[i][j];
            else diagonal[i][j] = 0;
        }
    }
    printf("a matriz e");
    print_matriz(matriz);
    printf("a diagonal principal da matriz e ");
    print_matriz(diagonal);
return 0;
}

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]){
    srand(time(0));
    for(int i=0;i<COL_SIZE;i++){
        for(int j=0;j<LIN_SIZE;j++){
            matriz[i][j] = rand()%10;
        }
    }
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
