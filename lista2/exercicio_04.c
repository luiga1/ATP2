/*multiplique duas matrizes 3x3.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL_SIZE 3
#define LIN_SIZE 3

void cria_matriz_rand(int matriz[LIN_SIZE][COL_SIZE]);
void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);

int main(){
    int matriz[LIN_SIZE][COL_SIZE],
        matriz_[LIN_SIZE][COL_SIZE],
        multiplica[LIN_SIZE][COL_SIZE];
    int i,j, soma=0;

    cria_matriz_rand(matriz);
    cria_matriz_rand(matriz_);

    printf("As matrizes sao");
    print_matriz(matriz);
    printf("a segunda e");
    print_matriz(matriz_);


    for(i=0;i<COL_SIZE;i++){
        for(j=0;j<LIN_SIZE;j++){
            multiplica[i][j]= 0;
            for(int k=0; k<LIN_SIZE;k++) multiplica[i][j] += (matriz[i][k] * matriz_ [k][j]); // percorre a linha e a coluna pra multiplicar
        }

    }
    printf("a multiplicacao e");
    print_matriz(multiplica);

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
