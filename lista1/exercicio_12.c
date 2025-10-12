/*preencha um array de 12 inteiros com numeros aleatorios entre -20 e 20. Em seguida, conte e imprima quantos numeros sao negativos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 12

int main (){
    int array[MAX], negativo=0, i;
    srand(time(0));

    for(i=0;i<MAX;i++) array[i] = (40 * rand()/RAND_MAX) -20;

    for(i=0;i<MAX;i++) if(array[i]<0) negativo++;

    printf("negativo = %d",negativo);

return 0;
}
