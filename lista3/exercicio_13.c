/*Declare e inicialize uma estrutura para armazenar as informacoes de um fun-
cionario (nome, salario, departamento) e imprima seus valores.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_FUNCIONARIO 3

typedef struct{
    char nome[50];
    float salario;
    int departamento;
} Funcionario;

Funcionario scanFuncionario(void);

void printFuncionario(Funcionario entrada);

int main(){

    Funcionario empresa[MAX_FUNCIONARIO];

    for(int i=0;i<MAX_FUNCIONARIO;i++) empresa[i] = scanFuncionario();

    for(int i=0;i<MAX_FUNCIONARIO;i++) printFuncionario(empresa[i]);

return 0;
}

Funcionario scanFuncionario(void){
    Funcionario saida;

    printf("Digite o nome ");
    scanf("%s",saida.nome);

    printf("Digite o salario ");
    scanf("%f",&saida.salario);

    printf("Digite o departamento");
    scanf("%d",&saida.departamento);

    return saida;
}

void printFuncionario(Funcionario entrada){

    printf("Nome: %s\nSalario: %.2f\nDepartamento: %d\n",entrada.nome, entrada.salario, entrada.departamento);

}
