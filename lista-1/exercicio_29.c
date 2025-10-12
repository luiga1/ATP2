/*use um array de ponteiros para armazenar e imprimir 5 strings.*/
#include <stdio.h>
#include <stdlib.h>
#define STR_SIZE 5
#define SIZE 100

int main(){
    int i;
    char *ponteiros[STR_SIZE];

    for(i=0;i<STR_SIZE;i++) ponteiros[i] = malloc(sizeof(char)*SIZE);

    for(i=0;i<STR_SIZE;i++){
        printf("Digite a %d palavra ",i+1);
        scanf("%s", ponteiros[i]);
    }

     for(i=0;i<STR_SIZE;i++){
        printf("%s", ponteiros[i]);
     }

return 0;
}

