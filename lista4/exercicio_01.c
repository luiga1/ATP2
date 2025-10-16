/*Escreva um programa em C para criar um arquivo de texto e escrever uma mensagem nele.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;

    arq = fopen("arquivo1.txt","w");

    if(arq == NULL) perror("arquivo.txt:");

    fprintf(arq,"Hello world");

    fclose(arq);
return 0;
}
