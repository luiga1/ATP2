/*preencha uma matriz 5x5 com numeros primos.*/
#include <stdio.h>
#define LIN_SIZE 5
#define COL_SIZE 5

void print_matriz(int matriz[LIN_SIZE][COL_SIZE]);
int primo(int n, int divisor, int contador);

int main(){
    int matriz[LIN_SIZE][COL_SIZE], k=1;

    for(int i=0;i<LIN_SIZE;i++){
        for(int j=0;j<COL_SIZE;j++){
            matriz[i][j] = primo(2, 2, i);
        }
    }

    printf("A matriz de numeros primos e \n");
    print_matriz(matriz[LIN_SIZE][COL_SIZE]);

return 0;
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

int primo(int n, int divisor, int contador){
/*
- menor ou igual a dois
 n que vai ser comparada com um divisor até chegar n == divisor e almenta 1 no contador
 se n % divisor == 0 não é primo, e pula para o proximo n;
*/
  if(contador == 0) return;
  if(n == divisor){
    return n;
    contador--;
    n++;
     return primo(n, 2, contador); // divisor reseta acada novo numero

}
  if(n%divisor != 0) {
    divisor++;
     return primo(n, divisor, contador);
  }
  else{
    n++;
    return primo(n, 2, contador);
  }
}
