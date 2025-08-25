/*use um array de ponteiros para armazenar 3 strings, ordene as strings em ordem alfabetica e as imprima.*/
#include <stdio.h>
#include <stdlib.h>
#define STR_SIZE 3
#define SIZE 100

int main(){
    int i;
    char *ponteiros[STR_SIZE],*aux[SIZE];

    for(i=0;i<STR_SIZE;i++) ponteiros[i] = malloc(sizeof(char)*SIZE);

    for(i=0;i<STR_SIZE;i++){
        printf("Digite a %d palavra ",i+1);
        scanf("%s", ponteiros[i]);
    }
    for(i=1;i<STR_SIZE+1;i++){
        if( strcomp(ponteiros[i-1],ponteiros[i]) < 0 ){
            //i-1 pro aux, i pro i-1, e auxi pro i
            aux = ponteiros[i-1];
            ponteiro[i-1] = ponteiro[i];
            ponteiro[i] = aux;
        }
    }

return 0;
}

