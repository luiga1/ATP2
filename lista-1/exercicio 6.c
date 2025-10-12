/*leia 10 valores inteiros e calcule a soma de todos os elementos do array.*/

#include <stdio.h>
#define MAX 10

int main(){
    int array[MAX], i, n, soma=0;

    for(i=0;i<MAX;i++){
         printf("Digite o %d numero ",i+1);
         scanf("%d",&n);
         array[i] = n;
    }

    for(i=0;i<MAX;i++) soma = soma + array[i];

    printf("Soma = %d",soma);


return 0;
}
