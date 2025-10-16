/*Escreva um programa em C para ler e exibir o conteudo de um arquivo de texto.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[50];
    int idade;
} Pessoa;

int main(){
    FILE *arq;
    Pessoa lista[1];
    int i=0;

    arq = fopen("arquivo2.txt","r");

    if(arq == NULL){
            perror("arquivo2.txt:");
        return 1;
    }

    while(fscanf(arq,"%s%d",lista[i].nome,&lista[i].idade) != EOF);
    {
        printf("\n %s %d",lista[i].nome,lista[i].idade);
        i++;
    }


    fclose(arq);
return 0;
}
