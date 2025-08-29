/*encontrar o maior divisor comum de um array de numeros.*/
#include <stdio.h>
#include <stdlib.h>

int mdc(int primeiro_numero, int segundo_numero, int divisor, int n);
int array_mdc(int *array, int size, int mdctot, int i);

int main(){
    int *array, tamanho, mdc, i=0;

    printf("Digite o tamanho do array  ");
    scanf("%d",&tamanho);
    array = malloc(sizeof(int) * tamanho);

    for(int j=0;j<tamanho;j++){
        printf("Digite um numero  ");
        scanf("%d",array+j);
    }

    mdc = array_mdc(array, tamanho, 1, i);
    printf("%d",mdc);


return 0;
}

array_mdc(int* array, int size, int mdctot, int i){
    if(i == size) return mdctot;
    mdctot = mdc(*(array +(i++)), *(array+(i++)), 2 , 1);
    return mdctot;
}

int mdc(int primeiro_numero, int segundo_numero, int divisor, int n){
  if(primeiro_numero == 1 || segundo_numero == 1) return n;
    for(;divisor<= primeiro_numero|| divisor<= segundo_numero; divisor++){ //procura o proximo divisor até o menor numero
        if((primeiro_numero%divisor ==0) && (segundo_numero%divisor ==0)){
            primeiro_numero = primeiro_numero / divisor;
            segundo_numero = segundo_numero / divisor;
            n = n * divisor;
         return n = mdc(primeiro_numero, segundo_numero,2,n); // multiplicar os menores divisores
        }
    }
  return n;
}
