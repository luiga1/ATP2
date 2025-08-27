/*receba 5 numeros inteiros como argumentos na linha de comando e imprima o maior deles.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int eh_par, numero;

    numero = atoi(argv[1]);

    if(numero%2 ==0) printf("o numero %d eh par",numero);
    else printf("o numero %d nao eh par",numero);

return 0;
}
