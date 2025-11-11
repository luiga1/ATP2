/*Escreva um programa em C para verificar se um arquivo de texto esta vazio ou nao.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* arq;

    arq = fopen("arquivo.txt","r");

    if(arq == NULL){
        perror("arquivo.txt");
        return 1;
    }

    if( fgetc(arq) == EOF) printf("Arquivo vazio");
    else printf("arquivo possue conteudo");

    fclose(arq);

return 0;
}
