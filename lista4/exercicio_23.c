/*Escreva um programa em C para encontrar a posicao de um registro em um arquivo binario usando a funcao fgetpos()*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[30];
    double pontos
}Jogador;

void cria_arquivo(const char *arqn) {
    FILE *fp = fopen(arqn, "wb");
    if (fp == NULL) {
        perror("arquivo de teste");
        exit(1);
    }

    Jogador time[] = {
        {101, "Alice", 95.5},
        {102, "Bob", 88.0},
        {103, "Charlie", 76.2},
        {104, "David", 99.1}
    };

    fwrite(time, sizeof(Jogador), 4, fp);
    fclose(fp);
    printf("Arquivo '%s' criado com 4 registros.\n", arqn);
}

int main(){
    FILE* arq;
    fpos_t posicao;
    Jogador temp;
    char buffer[80];
    const char *arqn = "arquivob6.bin";
    int index = 2;
    long offset = index * sizeof(Jogador);


    cria_arquivo(arqn);

    arq = fopen(arqn,"rb");

    if(arq == NULL){
        perror("arquivob6.bin");
        return 1;
    }

        // move o ponteiro para o inicio

    if(fseek(arq,offset,SEEK_SET) != 0){
        perror("erro ao usar fseek");
        fclose(arq);
        return 1;
    }

    fgetpos(arq,&posicao);

    if(fread(&temp,sizeof(Jogador),1,arq) == 1){
        printf("Id: %d\nNome:%s\nPontos:%.1f",temp.id,temp.nome,temp.pontos);
    }


return 0;
}
