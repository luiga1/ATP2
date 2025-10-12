/*declare um array de 5 inteiros e passe esse array para uma função que calcule a media dos elementos do array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STR_SIZE 5

float media(int *string){
    float media;
    int i;
    media = *string;
    for(i=1;i<STR_SIZE;i++) media = (*(string +i) + media) /2;

    return media;
}

int main(){
    int numeros[STR_SIZE];
    float mdia;

    srand(time(0));
    for(int i=0;i<STR_SIZE;i++) numeros[i] = rand() %10;

    mdia = media(numeros);

    printf("a media eh %f",mdia);
return 0;
}
