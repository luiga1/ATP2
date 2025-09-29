/*Acesse os componentes de uma estrutura de aluno (nome, matricula, nota) utilizando o operador ponto ‘.’ e imprima seus valores.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota;
} Aluno;

Aluno scanAluno(void);
void printAluno(Aluno entrada);

int main(){
    Aluno a;

    a = scanAluno();

    printAluno(a);
}


Aluno scanAluno(void){
    Aluno saida;

    printf("Digite o nome do aluno  ");
    scanf("%s",&saida.nome);

    printf("Digite o numero da matricula  ");
    scanf("%d",&saida.matricula);

    printf("Digite a nota  ");
    scanf("%f",&saida.nota);

    return saida;
}


void printAluno(Aluno entrada){

    printf("\n%s \n%d \n%.2f",entrada.nome, entrada.matricula, entrada.nota);
}
