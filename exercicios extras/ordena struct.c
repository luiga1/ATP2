/*ordernar por nome ou por salario*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct{
    char nome[20];
    int salario;
}Func;

void printfunc(Func *cabeca, int n);
void ordenasalario(Func *cabeca, int n);
void ordenarnome(Func *cabeca, int n);

int main(){
    int escolha;
    int qnt = 4;
    Func cabeca[MAX] = {{"nomec",1233},{"cotozika",15000},{"alguemsla",1456},{"luis",1442}};

    printf("Digite qual vc quer ordernar\n1-salario\n2-Nome\n");
    scanf("%d",&escolha);

    if(escolha == 1) ordenasalario(cabeca,qnt);
    if(escolha == 2) ordenarnome(cabeca,qnt);

return 0;
}

void printfunc(Func *cabeca, int n){
    for(int i=0;i<n;i++){
        printf("Nome: %s\nSalario %d\n",cabeca[i].nome,cabeca[i].salario);
    }
}

void ordenasalario(Func *cabeca, int n){
    Func temp;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(cabeca[i].salario > cabeca[j].salario){
                temp = cabeca[i];
                cabeca[i] = cabeca[j];
                cabeca[j] = temp;
            }
        }
    }
    printfunc(cabeca,n);
}


void ordenarnome(Func *cabeca, int n){
    Func temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(cabeca[i].nome, cabeca[j].nome)>0){
                temp = cabeca[i];
                cabeca[i] = cabeca[j];
                cabeca[j] = temp;
            }
        }
    }
    printfunc(cabeca,n);
}
