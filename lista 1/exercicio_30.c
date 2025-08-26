/*use um array de ponteiros para armazenar 3 strings, ordene as strings em ordem alfabetica e as imprima.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_SIZE 3
#define SIZE 100

int main(){
    int i,j;
    char *ponteiros[STR_SIZE];

    for(i=0;i<STR_SIZE;i++) ponteiros[i] = malloc(sizeof(char)*SIZE);

    for(i=0;i<STR_SIZE;i++){
        printf("Digite a %d palavra ",i+1);
        scanf("%s", ponteiros[i]);
    }

    for(i = 0; i < STR_SIZE - 1; i++) {
        for(j = i + 1; j < STR_SIZE; j++) {
            if(strcmp(ponteiros[i], ponteiros[j]) > 0) {
                char *aux = ponteiros[i];
                ponteiros[i] = ponteiros[j];
                ponteiros[j] = aux;
            }
        }
    }
    printf("\nStrings em ordem alfabetica:\n");
    for(i = 0; i < STR_SIZE; i++) {
        printf("%s\n", ponteiros[i]);
        free(ponteiros[i]);
    }
return 0;
}
