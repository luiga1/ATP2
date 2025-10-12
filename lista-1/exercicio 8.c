/*leia 8 caracteres e verifique quantos sao vogais.*/

#include <stdio.h>
#define MAX 8

int main(){
    char array[MAX],c;
    int i, vogal=0;

    for(i=0;i<MAX;i++){
         printf("Digite a %d letra ",i+1);
         scanf("%c",&c);
         gets(stdin);
         array[i] = c;
    }

    for(i=0;i<MAX;i++){
    if(array[i] == 'a') vogal++;
    if(array[i] == 'e') vogal++;
    if(array[i] == 'i') vogal++;
    if(array[i] == 'o') vogal++;
    if(array[i] == 'u') vogal++;
    }

    printf("%d",vogal);

return 0;
}
