/*leia uma string e verifique se ela e um palindromo*/
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
        if(palavra[i] != palavra[tamanho -i]){
            palindromo = 0;
        }else palindromo = 1;
     }

    if(palindromo == 1) printf("palindromo");
    else printf("não é palindromo");
return 0;}
