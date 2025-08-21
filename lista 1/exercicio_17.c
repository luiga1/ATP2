/*declare um array de 5 inteiros e use aritimetica de ponteiros para somar 10 a cada elemento do array. Imprima o array resultante.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int array[5], *ptr,i;

    srand(time(0));
    ptr = array;

    for(i=0;i<5;i++) array[i] = rand()%10;

    for(i=0;i<5;i++){
        *(ptr + i) = *(ptr + i) + 10;
    }

    for(i=0;i<5;i++) printf("%d ",array[i]);

return 0;
}
