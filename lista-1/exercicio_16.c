/*declare um array de 10 caracteres e use um ponteiro para contar quantos desses caracteres sao letras Maiusculas.*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(){
    char vetor[SIZE] = { 'A' , 'B' , 'f' , 'G' , 'd' , 'E' ,'E' , 'o' , 'P' ,'\0'}, *ponteiro;
    int maiuscula =0, i;

    ponteiro = vetor;

    for(i=0;*(ponteiro+i) != '\0';i++){
        if(*(ponteiro+i) >= 'A' && *(ponteiro+i) <= 'Z'){
            maiuscula++;
        }
    }
    printf("%d letras maiusculas", maiuscula);

return 0;}
