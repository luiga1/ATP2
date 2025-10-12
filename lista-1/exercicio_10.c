/*preencha um array de 10 inteiros com numeros aleatorios entre 50 e 150. Calcule e imprima a media dos elementos do array.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main (){
    int array[MAX], media=0, i;
    srand(time(0));

    for(i=0;i<MAX;i++) array[i] = 50 + 100 * rand()/RAND_MAX;

    for(i=0;i<MAX;i++) media = (array[i] + media) / 2;

    printf("media = %d",media);

return 0;
}
