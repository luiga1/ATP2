/*preencha uma matriz 5x5 com numeros primos.*/
#include <stdio.h>
#define LIN_SIZE 5
#define COL_SIZE 5

void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);
int primo(int n);

int main(){
    int matriz[LIN_SIZE][COL_SIZE], k=1;

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            while(primo(k) == 0){
                k++;
            }
            matriz[i][j] = k;
            k++;
        }
    }

    printf("A matriz de numeros primos e \n");
    print_matriz(matriz);

return 0;
}

void print_matriz(int matriz[LIN_SIZE][COL_SIZE]){
    printf("\n");
    for(int i=0;i<LIN_SIZE;i++){
            printf("\n");
        for(int j=0;j<COL_SIZE;j++){
            printf (" %0.2d", matriz[i][j]);
        }
    }
     printf("\n\n");
}

int primo(int n){
    if(n<2) return 0;
    for(int i=2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
