/*Escreva um programa em C para dividir um arquivo binario grande em arquivos menores de tamanho fixo.*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

void divide_arq(FILE* arq);

int main(){
    FILE* arq;

    arq = fopen("arquivob7.bin","rb");

    if(arq == NULL){
        perror("arquivob7.bin");
        return 1;
    }

    divide_arq(arq);

    fclose(arq);
    return 0;
}

void divide_arq(FILE* arq){
    unsigned char *buffer;
    char nomeparte[64];
    int i=0;
    long lidos;
    FILE* parte;


    buffer = malloc(SIZE);

    if(buffer == NULL){
        printf("Erro ao alocar memoria");
        exit(EXIT_FAILURE);
    }

    //o lidos conta quandos bytes foram realmente lidos caso um arquivo pegue um numero menor que o maximo
    while((lidos = fread(buffer,1,SIZE,arq))>0){

        //criar um nome para o arquivo
        snprintf(nomeparte,sizeof(nomeparte),"parte%3d.bin",i++);

        parte = fopen(nomeparte,"wb");

        if(parte == NULL){
            perror(nomeparte);
            free(buffer);
            fclose(arq);
            exit(EXIT_FAILURE);
        }   

        // escrever o que foi copiado
        fwrite(buffer,1,lidos,parte);
        fclose(parte);
    }

    free(buffer);
}
