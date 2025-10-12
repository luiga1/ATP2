/*preencha um array de 20 inteiros com n ́umeros aleat ́orios entre 1 e 100*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_MAX 20

int main (){
    int array[ARRAY_MAX];
    srand(time(0));

    for(int i=0;i<ARRAY_MAX;i++) array[i] = 100 * rand()/RAND_MAX;

    for(int j=0;j<ARRAY_MAX;j++) printf("%d\n",array[j]);

return 0;
}
