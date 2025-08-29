/*Escreva uma funcao recursiva para inverter uma string.*/
#include <stdio.h>
#include <string.h>
#define SIZE 50

void inverte_string(char string[], int size){
    if(size < 0) return;
    printf("%c",string[size-1]);
    size--;
    inverte_string(string,size);
}

int main(){
    char string[SIZE];
    int tamanho;

    printf("Digite uma string ");
    gets(string);
    tamanho = strlen(string);
    printf("a string invertida é \n");
    inverte_string(string, tamanho);

return 0;
}
