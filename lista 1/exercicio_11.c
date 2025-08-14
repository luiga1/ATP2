/*preencha um array de 15 inteiros com numeros aleatorios entre 0 e 50. Em seguida, encontre e imprima o maior valor do array.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 15

int main (){
    int array[MAX], maior=0, i;
    srand(time(0));

    for(i=0;i<MAX;i++) array[i] = 50 * rand()/RAND_MAX;

    for(i=0;i<MAX;i++) if(maior < array[i]) maior = array[i];

    printf("maior = %d",maior);

return 0;
}
