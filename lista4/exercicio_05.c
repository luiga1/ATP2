/*Escreva um programa em C para concatenar dois arquivos de texto em um terceiro arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq1, *arq2, *cop;
    char c;
    char line = '\n';

    //abre os aquivos
    arq1 = fopen("arquivo3.txt","r");
    arq2 = fopen("arquivo4.txt","r");
    cop = fopen("arquivo5.txt","w");

    //verificação erro
    if(arq1 == NULL){
        perror("arquivo3.txt");
        return 1;
    }
    if(arq2 == NULL){
        perror("arquivo4.txt");
        return 1;
    }
    if(cop == NULL){
        perror("arquivo5.txt");
        return 1;
    }

    //copia o primeiro arquivo
    while(fscanf(arq1,"%c",&c) != EOF){
        fprintf(cop,"%c",c);
    }
    printf("primeiro arquivo concatenado\n");

    //apenas para pular a linha de um arquivo no outro
    fprintf(cop,"%c",line);

    //copia o segundo arquivo
    while(fscanf(arq2,"%c",&c) != EOF){
        fprintf(cop,"%c",c);
    }
    printf("concatenado o segundo arquivo\nfim do processo");

    fclose(arq1);
    fclose(arq2);
    fclose(cop);

return 0;
}
