/*preencha uma matriz 3x3 com numeros primos e depois calcule o produto dos elementos da diagonal secundaria.*/
#include <stdio.h>
#include <stdlib.h>
#define LIN_SIZE 3
#define COL_SIZE 3

int primo(int n);
int** aloca_matriz(int linha, int coluna, int**matriz);
void print_matriz(int linha, int coluna, int** matriz);
void matriz_primo(int linha, int coluna, int** matriz);

int main(){
    int k, **matriz;

    matriz = aloca_matriz(LIN_SIZE,COL_SIZE,matriz);

    matriz_primo(LIN_SIZE,COL_SIZE,matriz);


    //free
return 0;
}

int primo(int n){
    if(n<2) return 0;
    for(int i=2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void matriz_primo(int linha, int coluna, int** matriz){
    int k=2;
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            while(primo(k) == 0){
                k++;
            }
            matriz[i][j] = k;
            k++;
        }
    }
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
