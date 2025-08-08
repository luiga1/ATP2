/*Funcao recursiva para calcular o MDC de dois numeros*/
#include <stdio.h>

/*inicia dois numeros , verifica um divisor comum, e divide eles e salva o divisor
depois procura novamente outro divisor comum, e multiplica ele pelo divisor anterior
até que não tenha mais um divisor entre eles*/

int Mdc(int primeiro_numero, int segundo_numero, int divisor);

int main(){
    int numero1, numero2, divisor;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);
    divisor = Mdc(numero1,numero2,2);
    printf("o MDC é %d\n",divisor);
    

return 0;
}

int Mdc(int primeiro_numero, int segundo_numero, int divisor){
    for(int i = divisor; i>primeiro_numero|| i>segundo_numero; i++){ //procura o proximo divisor até o menor numero
        printf("pass");
        if((primeiro_numero%divisor ==0) && (segundo_numero%divisor ==0)){
            primeiro_numero = primeiro_numero / divisor;
            segundo_numero = segundo_numero / divisor;
        return divisor * (primeiro_numero, segundo_numero,2); // multiplicar os menores divisores
    }else{
        divisor++;
        printf("divisor++");
    }
}
return 1;
}