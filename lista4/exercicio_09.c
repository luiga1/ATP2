/*Escreva um programa em C para contar o numero de registros em um arquivo binario.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    char nome[30];
} Pessoa;

int main(){
    FILE* arq;

    arq = fopen("arqbin2.bin","rb");

    if(arq == NULL) return -1;

    fseek(arq,0,SEEK_END); // coloca o ponteiro no ultimo espaço

    long int tamanho = ftell(arq); // pegar o tamanho do arquivo

    int registros = tamanho / sizeof(Pessoa);

    printf("Quantidade de registros: %d",registros);

    fclose(arq);

    return 0;
}