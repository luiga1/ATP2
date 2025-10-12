/*Funçao recursiva para encontrar o ultimo elemento de um array*/
#include <stdio.h>
#define TAM_MAX 300


int qnt_caracteres(char *string, int n){
    if(n > TAM_MAX -1) return TAM_MAX; //limita o tamanho da leitura
    if(string[n] != '\0'){
        return qnt_caracteres(string,n+1); //caminha para o proximo espaço de memoria
    }else{
        return n-1; // compensaçao do inicio da leitura em 0
    }
}

int main(){
    int qnt_car,a;
    char entrada[TAM_MAX];

    printf("Digite uma frase: ");
    fgets(entrada,TAM_MAX,stdin);
    qnt_car = qnt_caracteres(entrada,0); 
    printf("existem %d caracteres",qnt_car);

return 0;
}
