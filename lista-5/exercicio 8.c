/*Funcao recursiva para calcular o MDC de dois numeros*/
#include <stdio.h>

/*inicia dois numeros , verifica um divisor comum, e divide eles e salva o divisor
depois procura novamente outro divisor comum, e multiplica ele pelo divisor anterior
até que não tenha mais um divisor entre eles*/

int Mdc(int primeiro_numero, int segundo_numero, int divisor, int n){ 
  if(primeiro_numero == 1 || segundo_numero == 1) return n;
    for(;divisor<= primeiro_numero|| divisor<= segundo_numero; divisor++){ //procura o proximo divisor até o menor numero
        if((primeiro_numero%divisor ==0) && (segundo_numero%divisor ==0)){
            primeiro_numero = primeiro_numero / divisor;
            segundo_numero = segundo_numero / divisor;
            n = n * divisor;
         return n = Mdc(primeiro_numero, segundo_numero,2,n); // multiplicar os menores divisores
    }
    }
  return n;
}

int main(){
    int numero1, numero2,
     divisor;

  numero1 = 24;
  numero2 = 120;

    divisor = Mdc(numero1,numero2,2,1);
    printf("o MDC é %d\n",divisor);

return 0;
}
