/*Fun��o recursiva para imprimir os elementos de um array na ordem inversa*/
#include <stdio.h>
#include <string.h>
void inverter(int tamanho, char *array){
    if(tamanho < 0) return'/0';
    printf("%d",array[tamanho-1]);
    tamanho--;
    inverter(tamanho, array);

}

int main(){
    int tamanho;
    char entrada[500], saida[500];

    printf("digite um array");
    fgets(entrada,500,stdin);
    tamanho = strlen(entrada);
    printf("o arary invertido �");
    *saida = inverter(tamanho, entrada);


return 0;
}
