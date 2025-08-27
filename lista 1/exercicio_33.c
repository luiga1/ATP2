/*receba 3 numeros inteiros como argumentos na linha de comando e imprima a soma deles.*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int soma, numero1, numero2, numero3;

    numero1 = atoi(argv[1]);
    numero2 = atoi(argv[2]);
    numero3 = atoi(argv[3]);

    soma = numero1 + numero2 + numero3;

    printf("\n A soma e %d", soma);

return 0;
}
