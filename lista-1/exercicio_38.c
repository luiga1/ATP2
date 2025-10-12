/*declare um array de 10 inteiros e passe esse array para uma função que encontre o maior elemento do array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STR_SIZE 10

int maior_string(int *string){
    int maior;
    maior = *string;
    for(int i=0; i<STR_SIZE;i++){
            printf(" %d ",*(string+i));
        if(maior < *(string +i)) maior = *(string +i);
    }
    return maior;
}

int main(){
    int numeros[STR_SIZE], maior;

    srand(time(0));
    for(int i=0;i<STR_SIZE;i++) numeros[i] = rand() %10;

    maior = maior_string(numeros);

    printf("\no maior é %d",maior);
return 0;
}
