/*Escreva um programa em C para atualizar um registro em um arquivo binario.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int ra;
    char nome[30];
    float nota;
}Aluno;

void fscanAluno(FILE* arq);
Aluno scanAluno(void);
void trocaAluno(FILE* arq);
int compAluno(char* nome, Aluno entrada);
void printArq(FILE *arq);

int main(){
    FILE *arq;
    Aluno entrada;
    int i=-1;

    arq = fopen("arquivob4.bin","r+b");

    while(i!=0){

        printf("Digite sua escolha\n1- Criar arquivo\n2- Trocar aluno\n3- mostrar arquivo\n0- Sair\n");
        scanf("%d",&i);
        if(i == 1) fscanAluno(arq);
        else if(i == 2) trocaAluno(arq);
        else if(i==3) printArq(arq);

    }

    fclose(arq);

return 0;
}

void printArq(FILE *arq){

    Aluno temp;

    fseek(arq,0,SEEK_SET);

    while(fread(&temp,sizeof(Aluno),1,arq) ==1 ){

        printf("Ra: %d\nAluno: %s\nNota: %f\n", temp.ra, temp.nome, temp.nota);
    }

    fseek(arq,0,SEEK_SET);
}

void fscanAluno(FILE* arq){
    int i=0,n=0;
    Aluno entrada;

    printf("Digite quantos alunos serao cadastrados ");
    scanf("%d",&n);

    while(i<n){
        printf("Digite o ra ");
        scanf("%d",&entrada.ra);
        getc(stdin);
        printf("Digite o nome ");
        scanf("%s",entrada.nome);

        printf("Digite a nota ");
        scanf("%f",&entrada.nota);

        fwrite(&entrada,sizeof(Aluno),1,arq);

        i++;
    }
    //reseta o ponteiro do arquivo para a proxima função
    fseek(arq,0,SEEK_SET);
}

 Aluno scanAluno(void){
    Aluno entrada;

    printf("Digite o ra ");
    scanf("%d",&entrada.ra);
    getc(stdin);
    printf("Digite o nome ");
    scanf("%s",entrada.nome);

    printf("Digite a nota ");
    scanf("%f",&entrada.nota);

    return entrada;
 }

int compAluno(char* nome,Aluno entrada){
    return strcmp(entrada.nome,nome);
}


void trocaAluno(FILE* arq){
    const int s = sizeof(Aluno);
    char nome[30];
    Aluno novo;
    Aluno temp;

    printf("digite o nome do aluno que vai ser trocado ");
    scanf("%s",nome);

    printf("Digite as novas entradas\n");
    novo = scanAluno();

    while(fread(&temp,s,1,arq) == 1){
        if(compAluno(nome,temp)== 0){
            //trocar as infos
            fseek(arq,-s,SEEK_CUR);
            fwrite(&novo,s,1,arq);
        }
    }

    //reseta o ponteiro do arquivo para a proxima função
    fseek(arq,0,SEEK_SET);
}
