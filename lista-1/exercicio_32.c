/*use um array de ponteiros para armazenar 4 strings e encontre a string de maior comprimento.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_SIZE 5
#define SIZE 100

int main(){
    int i,j;
    char *ponteiros[STR_SIZE];

    for(i=0;i<STR_SIZE;i++) ponteiros[i] = malloc(sizeof(char)*SIZE);

    for(i=0;i<STR_SIZE;i++){
        printf("Digite a %d palavra ",i+1);
        scanf("%s", ponteiros[i]);
    }

    ponteiros[STR_SIZE -1] = ponteiros[0];

    for(i = 0; i < STR_SIZE ; i++) {
        if( strlen(ponteiros[i]) > strlen(ponteiros[STR_SIZE -1])) ponteiros[STR_SIZE -1] = ponteiros[i];
    }

    printf("\n a maior palavra é \n");
    printf("%s",ponteiros[STR_SIZE-1]);

return 0;
}
