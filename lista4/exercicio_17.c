/*Escreva um programa em C para calcular a soma de todos os numeros em um arquivo de texto contendo numeros inteiros.*/
#include <stdio.h>
#include <stdlib.h>

int eh_numero(char c);
int soma_arquivo(FILE* arq);

int main(){
    FILE* arq;
    int soma;

    arq = fopen("arquivo10.txt","r");

    if(arq == NULL) {
        perror("arquivo10.txt");
        return 1;
    }

    soma = soma_arquivo(arq);

    printf("A soma é %d",soma);

    fclose(arq);

    return 0;
}

int soma_arquivo(FILE* arq){
    char temp;
    char artemp[100];
    int i=0, num, soma=0;

    fseek(arq,0,SEEK_SET);

    while (fscanf(arq,"%c",&temp) == 1)
    {
        if(eh_numero(temp) == 1){
            artemp[i++] = temp;
        }
        else{
            if(i>0){
            artemp[i] = '\0';
            num = atoi(artemp);
            soma += num;
            i=0;
            }
            else i=0;
        }
    }

    return soma;
}

int eh_numero(char c){
    // tabela ascii 0 => 48 9=>57
    if(c >= '0' && c <= '9'){
        return 1;
    }
    else return 0;
}
