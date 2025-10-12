/*leia uma string e conte o numero de caracteres, palavras e linhas na string.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

int main(){
    int letra, caracteres=0,palavras=0,linhas=0;
    char string[MAX],auxi;

    printf("Digite um texto \n");
    printf("aperte ctrl-c para finalizar \n");

    while((auxi = getchar()) != EOF){
        if(auxi != '\n'){
            caracteres++;
            if(auxi!=' '){
                letra =1;
            }
        }
        else {
            if(letra ==1){
                palavras++;
                letra=0;
            }
            linhas++;
        }
        if(auxi ==' ' && letra ==1){
            palavras++;
            letra=0;
        }
    }


    printf("\nResultados:\n");
    printf("Caracteres: %d\n", caracteres);
    printf("Palavras: %d\n", palavras);
    printf("Linhas: %d\n", linhas);

return 0;
}
