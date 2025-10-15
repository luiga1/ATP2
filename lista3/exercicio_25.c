/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um aluno
(nome, matr ́ıcula, nota) e imprima seus valores.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_ALUNO 5

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int ra;
    char nome[50];
    int cpf;
    Data aniversario;
} Aluno;

Data scanData(void);
Aluno scanAluno(void);
void printAluno(Aluno aluno);

int main(){
    Aluno lista_aluno[MAX_ALUNO];
    int num;

    printf("Digite quantos alunos vao ser inclusios (max: 5) ");
    scanf("%d",&num);

    for(int i=0;i<num;i++) lista_aluno[i] = scanAluno();

    for(int i=0;i<num;i++) printAluno(lista_aluno[i]);

return 0;
}

Data scanData(void){
    Data saida;

    printf("Digite o dia: ");
    scanf("%d",&saida.dia);

    printf("Digite o numero do mes: ");
    scanf("%d",&saida.mes);

    printf("Digite o ano: ");
    scanf("%d",&saida.ano);

    return saida;
}

Aluno scanAluno(void){
    Aluno saida;

    printf("Digite o ra: ");
    scanf("%d",&saida.ra);

    printf("Digite o nome: ");
    scanf("%s",saida.nome);

    printf("Digite o cpf: ");
    scanf("%d",&saida.cpf);

    printf("digite o aniversario:\n");
    saida.aniversario = scanData();

    return saida;

}

void printAluno(Aluno aluno){
    printf("Ra: %d \nNome: %s \nCpf: %d\nAniversario: %d/%d/%d\n",aluno.ra ,aluno.nome ,aluno.cpf ,aluno.aniversario.dia ,aluno.aniversario.mes ,aluno.aniversario.ano);
}
