/*verifique se todos os elementos de um array de 5 inteiros sao positivos.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

int main(){
    int *ptr, i, positivo;
    ptr = malloc(sizeof(int)* 5);

    srand(time(0));

    for(i=0;i<MAX;i++){
       *(ptr +i) = rand()%10-1;
    }

     for(i=0;i<MAX;i++){
        printf("%d ",*(ptr +i));
    }

    i=-1;
    do{
        i++;
        if(*(ptr +i) >= 0) positivo =1;
        else positivo =0;
    }while(positivo && i<MAX);

    if(positivo) printf("\n é positivo");
    else printf("\n nao e positivo");
return 0;
}
