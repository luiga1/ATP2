/*leia uma string e substitua todas as ocorrencias de um caractere por outro.*/
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(){
    int tamanho=0, i, palindromo;
    char palavra[SIZE];

    printf("DIgite uma palavra ");
    scanf("%s",palavra);

     tamanho = strlen(palavra);
     for(i=0;i<tamanho;i++){
        if(palavra[i] == 'a'){
            palavra[i] = 'x';
        }
     }

    printf(" subistituindo: %s",palavra);
return 0;}

