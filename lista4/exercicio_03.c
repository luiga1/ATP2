/*Escreva um programa em C para contar o n ́umero de linhas em um arquivo de texto.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    char c;
    int linha=1;

    arq = fopen("arquivo3.txt","r");

    if(arq == NULL){
            perror("arquivo3.txt");
        return 1;
    }

    while(fscanf(arq,"%c",&c) != EOF){
        if(c == '\n') linha++;
        printf("%c",c);
    }

    printf("\nO arquivo tem %d linhas",linha);

    fclose(arq);
return 0;
}