/*conte o numero de elementos pares e impares em um array de 20 inteiros.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20

int main(){
    int array[MAX], *ptr, impar =0, par =0, i;

    srand(time(0));
    ptr = array;

    for(i=0;i<MAX;i++) *(ptr +i) = rand()%100;

    for(i=0;i<MAX;i++){
        if((*(ptr +i) % 2) == 0) par++;
        else  impar++;
    }

    printf("impares é %d, pares é %d", impar, par);

return 0;
}

