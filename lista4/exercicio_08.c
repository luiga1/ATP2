/*Escreva um programa em C para ler e exibir o conte ́udo de um arquivo binario.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* arq;
    char palavra[100];

    arq = fopen("arquivob1.bin","rb");

    if(arq == NULL){
        perror("arquivob1.bin");
    }

    fread(palavra,sizeof(char),100,arq);

    printf("palavra armazenada: %s\n",palavra);

return 0;
}