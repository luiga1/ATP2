/*Função recursiva para encontrar o ultimo elemento de um array*/

#include <stdio.h>


int qnt_caracteres(char *string, int n){
    if(n > 299) return 300;
    if(string[n] != '\0'){
        return qnt_caracteres(string,n+1);
    }else{
        return n-1;
    }
}

int main(){
    int qnt_car,a;
    char entrada[300];

    printf("Digite uma frase: ");
    fgets(entrada,300,stdin);
    qnt_car = qnt_caracteres(entrada,0);
    printf("existem %d caracteres",qnt_car);

return 0;
}
