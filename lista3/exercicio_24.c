/*Resolva um problema de cadastro de funcionarios utilizando estruturas.*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct {
    char nome[50];
    int registro;
    float salario;
} Funcionario;

void scanFuncionario(Funcionario* entrada);
void printAluno(Funcionario* saida);

int main(){
    Funcionario funcionario1;
    Funcionario* ptr;

    ptr = &funcionario1;

    scanFuncionario(ptr);

    printAluno(ptr);

return 0;
}

void scanFuncionario(Funcionario* entrada){

    printf("Digite o nome: ");
    scanf("%s",entrada->nome);

    printf("Digite o registro: ");
    scanf("%d",&entrada->registro);

    printf("Digite o salario: ");
    scanf("%f",&entrada->salario);

}

void printAluno(Funcionario* saida){

    printf("Nome: %s \nRegistro: %d \nSalario: %f\n"
           ,saida->nome ,saida->registro ,saida->salario);

}
