/*que leia duas strings e concatene-as. Imprima a string resultante.*/
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(){
    char palavra1[2*SIZE+1], palavra2[SIZE];

    printf("digite uma palavra \n");
    gets(palavra1);
    printf("digite outra palavra \n");
    fgets(palavra2,SIZE,stdin);

    strcat(palavra1,palavra2);
    printf("%s\n",palavra1);

return 0;}
