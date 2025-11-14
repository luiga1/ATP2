/*Escreva um programa em C para criar um arquivo de texto com uma estrutura de dados complexa e salvar no formato adequado.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char nome[20];
} Pessoa;

void escreve_struct(FILE* arq, Pessoa entrada);
Pessoa cria_struct(void);
int escolha(void);

int main(){
    FILE* arq;
    int esc=0;

    arq = fopen("arquivo9.txt","w");

    if(arq == NULL){
        perror("arquivo9.txt");
        return 1;
    }
    esc = escolha();

    while(esc){
        Pessoa entrada = cria_struct();
        escreve_struct(arq, entrada);
        esc = escolha();
    }

    fclose(arq);

return 0;
}

int escolha(void){
    int out;
    printf("Digite\n1-Inserir uma estrutura\n0-Sair\n");
    scanf("%d",&out);
    return out;
}

Pessoa cria_struct(void){
    Pessoa out;

    printf("Digite o id ");
    scanf("%d",&out.id);

    printf("Digite o nome[20] ");
    scanf("%19s",out.nome);

    return out;
}

void escreve_struct(FILE* arq, Pessoa entrada){
    fprintf(arq,"%d %s\n",entrada.id,entrada.nome);
}
