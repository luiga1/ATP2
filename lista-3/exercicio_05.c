/*Acesse os componentes de uma estrutura de aluno (nome, matricula, nota) utilizando o operador “->” e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[75];
    int matricula;
    float nota;
} Aluno;

int main(){
    Aluno aluno;
    Aluno *ptr;

    ptr = &aluno;

    printf("digite o nome ");
    scanf("%s",ptr->nome);
    printf("\ndigite a matricula ");
    scanf("%d",&ptr->matricula);
    printf("\ndigite a nota ");
    scanf("%f",&ptr->nota);

    printf("O nome é %s\n matricula %d\n e nota %.2f\n",ptr->nome,ptr->matricula, ptr->nota);

return 0;
}
