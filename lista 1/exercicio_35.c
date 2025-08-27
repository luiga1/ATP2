/*receba um numero inteiro como argumento na linha de comando e verifique se ele e par ou impar.*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int eh_par, numero;

    numero = atoi(argv[1]);

    if(numero%2 ==0) printf("o numero %d eh par",numero);
    else printf("o numero %d nao eh par",numero);

return 0;
}
