/*Escreva um programa em C para substituir uma palavra por outra em um arquivo de texto.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * procurar a palavra, quando achar chama a funçao que troca e quando trocar ele retorna a procurar até o fim do arquivo 
 */

void trocaPalavra(char * arq_path, char * palavra, char * troca, int pntr);

void substituir(char* arq_path, char*palavra, char* troca){
    FILE * arq;
    int palavra_tamanho = strlen(palavra);
    int carac_iguais = 0;
    int i=0;
    char c;
    char anterior;
    char prox;

    arq = fopen("arquivo7.txt","r");

    if(arq == NULL){
        perror(arq_path);
        return;
    }

    while(fscanf(arq,"%c",&c) != EOF){
        // procura caractere até achar a palavra
        if(palavra[carac_iguais] == c) carac_iguais++;
        else {
            carac_iguais = 0;
            anterior = c;
        }
        i++;
        if(carac_iguais == palavra_tamanho){
            // quando encotra a palavra verifica antes e depois para nao substituir no meio da palavra

            // pega o proximo caractere pra verificação e devolve ele
            prox = fgetc(arq);
            ungetc(prox, arq);

            if(!isalnum(anterior)){
                // quando acha a palavra e é subtituivel 
                trocaPalavra(arq_path,palavra,troca, (i  - palavra_tamanho)); // indica aonde que esta o começa da palavra 
            } 
        }
        
    }
    // arquivo foi todo lido 
    // nada foi trocado ja que toda vez que o arquivo acha a palavra a ser trocad ele reabre com a copia e o ponteiro zera

    printf("troca realizada");

}

void trocaPalavra(char * arq_path, char * palavra, char * troca, int pntr){
    FILE* copy, *arq;
    char c;
    char q[100];
    int i=0;

    copy = fopen("new.txt","w");
    arq = fopen(arq_path,"r");

    if(arq == NULL){
        perror(arq_path);
        return;
    }

    if(copy == NULL){
        perror("new.txt");
        return;
    }


    // copia todo o arquivo antes de 
    while(i < pntr){
        fscanf(arq,"%c",&c);
        fprintf(copy,"%c",c);
        i++;
    }

    //insere a palavra nova
    fprintf(copy,"%s",troca);
    fgets(q,strlen(palavra),arq);

    // termina de copiar o arquivo
    while (fscanf(arq,"%c",&c) != EOF){
        fprintf(copy,"%c",c);
    }
    

    fclose(arq);
    fclose(copy);

    // remove(arq_path);
    // rename("new.txt",arq_path);

}

int main(){
    char palavra[100];
    char troca[100];
    printf("Digite a palavra que deseja trocar\n");
    fgets(palavra,100,stdin);
    printf("Digite qual paravra sera colocada no lugar\n");
    fgets(troca,100,stdin);

    substituir("arquivo7.txt", palavra, troca);
    
return 0;
}
