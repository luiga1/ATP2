/*Escreva uma função recursiva para calcular o numeros de caminhos possiveis em uma grade NxN.*/
#include <stdio.h>
#include <stdlib.h>
 // 2(n-1)! / n-1! * n-1!

 int fatorial(int n){
    int fat;
    if(n == 1 || n == 0){
        return 1;
    }else{
        fat = n * fatorial(n-1);
    }
return fat;
}

int caminho(int tamanho);

int main(){
    int numero, resposta;
    printf("digite um tamanho de quadrado\t ");
    scanf("%d", &numero);
    resposta = caminho(numero);
    printf("\nsao %d caminhos possiveis", resposta);

return 0;
}

int caminho(int tamanho){ // 2(n-1)! / n-1! * n-1!
    int up=0, down=0;

    up = fatorial(2*(tamanho -1));
    printf("%d\n", up);
    down = fatorial(tamanho-1);
    printf("%d\n", down);
     down *= down;
     up /= down;
    return up;

}
