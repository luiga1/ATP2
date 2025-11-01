/*Escreva um programa em C para copiar o conteudo de um arquivo binario para outro arquivo.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* arq, *copy;
    char c;

    arq = fopen("arquivob1.bin","rb");
    copy = fopen("arquivob2.bin","wb");

    if(arq == NULL){
        perror("arquivob1");
        return 1;
    }
    if(copy == NULL){
        perror("arquivob2");
    }

    while((c = fgetc(arq)) != EOF){
        fputc(c,copy);
    }

    fclose(arq);
    fclose(copy);

    return 0;
}