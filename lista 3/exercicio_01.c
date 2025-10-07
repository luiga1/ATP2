/*Declare e inicialize uma estrutura para armazenar as informacoes de um livro (titulo, autor, ano de publicacao) e imprima seus valores.*/
#include <stdio.h>

typedef struct Livro{
    char titulo[50];
    char autor[50];
    int ano;
} Livro;

int main(){
    struct Livro l;

    printf("Digite o nome do livro ");
    scanf("%s", &l.titulo);

    printf("\nDigite o autor ");
    scanf("%s",&l.autor);

    printf("\ndigite o ano de lançamento ");
    scanf("%d",&l.ano);

    printf("\n titulo: %s \n autor: %s \n ano: %d\n", l.titulo, l.autor, l.ano); 

return 0;
}