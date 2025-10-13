/*Acesse os componentes de uma estrutura de filme (t ́ıtulo, diretor, ano de lan ̧camento)
utilizando o operador ponto ‘.’ e imprima seus valores.*/
#include <stdio.h>

typedef struct {
    char titulo[50];
    char diretor[50];
    int anol;
} Filme;

void scanFilme(Filme* saida){

    printf("Digite o titulo ");
    scanf("%s",saida->titulo);

    printf("Digite o diretor ");
    scanf("%s",saida->diretor);

    printf("Digite o ano de lançamento ");
    scanf("%d",&saida->anol);

}

void printfilme(Filme* entrada){

    printf("Titulo: %s\nDiretor: %s\nAno: %d\n",entrada->titulo, entrada->diretor, entrada->anol);
}


int main(){
    Filme* filme1;

    filme1 = malloc(sizeof(Filme));

    scanFilme(filme1);

    printfilme(filme1);

    free(filme1);
return 0;
}
