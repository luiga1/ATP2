/*encontre o maior e o menor elemento em um array de 10 inteiros.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    int array[MAX], *ptr, maior, menor, i;

    srand(time(0));
    ptr = array;

    for(i=0;i<MAX;i++) *(ptr +i) = rand()%100;

    maior = *ptr;
    menor = *ptr;
    for(i=1;i<MAX;i++){
        if(*(ptr +i) < menor) menor = *(ptr +i);
        if(*(ptr+i) > maior) maior = *(ptr +i);
    }

    printf("maior é %d, menor é %d", maior, menor);

return 0;
}
