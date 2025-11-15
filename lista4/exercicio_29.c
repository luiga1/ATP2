/*Escreva um programa em C para criar um arquivo de texto com conteudo criptografado e depois descriptografar.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAVE 15

void encrip(FILE* arq);
void descrip(FILE* arq);

int main(){
    FILE* arq;
    int escolha = -1;

    arq = fopen("arquivo11.txt","w+");

    if(arq == NULL){
        perror("arquivo11.txt");
        return 1;
    }

    while(escolha != 0){
        printf("Digite\n0-sair\n1-Escrever e criptografar\n2-Descriptografar\n");
        scanf("%d",&escolha);
        if(escolha == 1) encrip(arq);
        if(escolha == 2) descrip(arq);
    }

    fclose(arq);

    return 0;
}

void encrip(FILE* arq){
    char msg[150];
    char temp;
    int size;

    fseek(arq,0,SEEK_SET);

    printf("Digite a mesagem ");
    scanf("%s",msg);

    size = strlen(msg);

    for(int i=0;i<size ;i++){
        temp = msg[i] + CHAVE;
        fprintf(arq,"%c",temp);
    }

}

void descrip(FILE* arq){
    char temp, msg[150];
    int i=0;

    
    fseek(arq,0,SEEK_SET);

    while(fscanf(arq,"%c",&temp) == 1){
        msg[i++] = temp - CHAVE;
    }
    
    msg[i] = '\0';

    printf("A mensagem e\n%s\n",msg);
}