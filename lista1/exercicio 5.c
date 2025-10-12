/*leia 5 valores inteiros, armazene-os em um array e depois imprima os valores na ordem inversa.*/

#include <stdio.h>
#define MAX 5

int main(){
    int array[MAX], n;

    for(int i=0;i<MAX;i++){
        printf("digite o %d numero: ",i+1);
        scanf("%d",&n);
        array[i] = n;
    }
    printf("inverso:\n");
    for(int j=MAX-1;j>=0;j--) printf("%d ",array[j]);

return 0;
}
