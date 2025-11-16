/*Escreva um programa em C para armazenar informacoes de uma lista de
contatos em um arquivo de texto e implementar funcoes para adicionar,
excluir e buscar contatos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int numero;
} Contato;

void add_excude(FILE* arq);
void add(FILE* arq);
FILE* exclude(FILE* arq); // como o arquivo vai ser trocado precisa retornar o ponteiro do novo arquivo

void busca_contato(FILE* arq);

int main(){
    FILE* arq;
    int escolha = -1;

    arq = fopen("Contatos.txt","w+");

    while(escolha != 0){
        printf("\nDigite\n0-Sair\n1-Adiconar/excluir contato\n2-Buscar contato\n");
        scanf("%d",&escolha);
        if(escolha == 1) add_excude(arq);
        if(escolha == 2) busca_contato(arq);
    }

    fclose(arq);

return 0;
}

void add_excude(FILE* arq){
    int escolha = -1;

    while(escolha != 0){
        printf("\nDigite\n0-Voltar\n1-Criar novo contato\n2-Excluir contato\n");
        scanf("%d",&escolha);
        if(escolha == 1) add(arq);
        if(escolha == 2) arq = exclude(arq);
    }

}

void add(FILE* arq){
    Contato init;

    fseek(arq,0,SEEK_END);

    printf("Digite o nome ");
    scanf("%s",init.nome);

    printf("Digite o numero ");
    scanf("%d",&init.numero);

    fprintf(arq,"%s %d \n",init.nome,init.numero);

}

FILE* exclude(FILE* arq){
    Contato temp;
    char nome[30];
    int i;

    printf("\nDigite o nome do contato para excluir");
    scanf("%s",nome);

    FILE *tempArq = fopen("temp.txt", "w");
    if (!tempArq) {
        printf("Erro ao criar arquivo temporário.\n");
        return NULL;
    }

    fseek(arq, 0, SEEK_SET);

    while (fscanf(arq, "%29s %d", temp.nome, &temp.numero) == 2) {
        i = strcmp(nome, temp.nome);
        if ( i == 0) {
         // não guarda no arquivo
            continue;
        }
        fprintf(tempArq, "%s %d\n", temp.nome, temp.numero);
    }

    fclose(arq);
    fclose(tempArq);

    // Substitui original pelo temporário
    remove("contatos.txt");           // nome do arquivo original
    rename("temp.txt", "contatos.txt");

    arq = fopen("contatos.txt", "w+");

    return arq;
}

void busca_contato(FILE* arq){
    Contato temp;
    char nome[30];
    int i=0;

    printf("\nDigite o nome que quer procurar ");
    scanf("%s",nome);

    fseek(arq,0,SEEK_SET);

    while (fscanf(arq, "%29s %d", temp.nome, &temp.numero) == 2) {
        if (strcmp(nome, temp.nome) == 0) {
            printf("\nNome:%s\nNumero:%d\n",temp.nome,temp.numero);
            i++;
        }
    }

    if(i==0) printf("\nNão existe um contato com o nome %s\n",nome);

}