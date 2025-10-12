/*calcule a media dos elementos de uma matriz 2x4.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL_SIZE 4
#define LIN_SIZE 2

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]);
void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);

int main(){
    int matriz[LIN_SIZE][COL_SIZE];
    float media;

    printf("A matriz e ");
    cria_matriz_rand(matriz);
    print_matriz(matriz);

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            if(i==0 && j==0) media = matriz[i][j];
            else media = (media + matriz[i][j])/2;
        }
    }

    printf("a media dos elementos e %.2f",media);

return 0;
}

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]){
    srand(time(0));
    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
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
