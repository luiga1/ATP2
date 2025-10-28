/*Escreva um programa em C para buscar e exibir um determinado caractere em um arquivo de texto.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    int letra =0;
    char c;
    char find;

    //inicializa o arquivo
    arq = fopen("arquivo3.txt","r");

    //verifica erro
    if(arq == NULL){
        perror("arquivo3.txt");
        return 1;
    }

    // pergunta qual letra sera buscada
    printf("Digite a letra que quer buscar no arquivo ");
    scanf("%c",&find);

    //procura
    while(fscanf(arq,"%c",&c) != EOF){
        //procurar se as letras sao exatamenta a mesma coisa
        if(find == c){
            letra++;
        }
        //procurar se estiver em maiousculo ou minusculo '32'
        if(find == c + 32 || find == c - 32){
            letra++;
        }
    }

    printf("Existem %d letras %c no arquivo",letra, find);

    fclose(arq);

return 0;
}
