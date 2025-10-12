/*Crie uma funcao que recebe uma estrutura de aluno (nome, matricula, nota)
como parametro e imprima seus valores.*/
#include <stdio.h>


typedef struct {
    char* nome;
    int matricula;
    float nota;
} Aluno;

Aluno scanAluno(char nome[], int matricula, float nota);
void printAluno(Aluno entrada);

int main(){
    Aluno a;
    char nome = 'nome';

    a = scanAluno(&nome, 123, 98);

    printAluno(a);
}


Aluno scanAluno(char* nome, int matricula, float nota){
    Aluno saida;

    saida.nome = nome;

    saida.matricula = matricula;

    saida.nota = nota;

    return saida;
}


void printAluno(Aluno entrada){

    printf("\n%s \n%d \n%.2f",entrada.nome, entrada.matricula, entrada.nota);
}
