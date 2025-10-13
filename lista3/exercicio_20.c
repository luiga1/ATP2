/*Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 3 livros
(t ́ıtulo, autor, ano de publica ̧c ̃ao) e imprima seus valores.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct Livro{
    char titulo[50];
    char autor[50];
    int ano;
} Livro;

void scanLivro(Livro* l){
    printf("Digite o nome do livro ");
    scanf("%s", l->titulo);

    printf("\nDigite o autor ");
    scanf("%s",l->autor);

    printf("\ndigite o ano de lançamento ");
    scanf("%d",&l->ano);
}

void printLivro(Livro* l){
    printf("\n titulo: %s \n autor: %s \n ano: %d\n", l->titulo, l->autor, l->ano);
}

int main(){
    Livro* estante[MAX];
    int i;

    for(i=0;i<MAX;i++) estante[i] = malloc(sizeof(Livro));

    for(i=0;i<MAX;i++) scanLivro(estante[i]);

    for(i=0;i<MAX;i++) printLivro(estante[i]);

    for(i=0;i<MAX;i++) free(estante[i]);

return 0;
}
