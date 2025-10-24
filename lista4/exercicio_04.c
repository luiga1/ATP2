/*Escreva um programa em C para copiar o conteudo de um arquivo de texto para outro arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq, *cop;
    char c;

    arq = fopen("arquivo3.txt","r");
    cop = fopen("arquivo4.txt","w");

    //verificações
    if(arq == NULL){
        perror("arquivo3.txt");
        return 1;
    }
    if(cop == NULL){
        perror("arquivo4.txt");
        return 1;
    }

    //copia e escreve cada caractere no outra aquivo
    while(fscanf(arq,"%c",&c) != EOF){
        fprintf(cop,"%c",c);
        printf("%c",c);
    }

    printf("\narquivos copiados!");

    fclose(arq);
    fclose(cop);

return 0;
}
