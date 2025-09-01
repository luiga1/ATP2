/*Desenvolva uma funcao recursiva para imprimir todos os numeros primos ate N.*/
#include <stdio.h>

void primo(int n, int divisor, int contador);

int main(){
  int numero;
  
  printf("digite um numero ");
  scanf("%d",&numero);
    primo(2, 2, numero);
   
return 0;
}

void primo(int n, int divisor, int contador){
/*
- menor ou igual a dois
 n que vai ser comparada com um divisor até chegar n == divisor e almenta 1 no contador
 se n % divisor == 0 não é primo, e pula para o proximo n;
*/
  if(contador == 0) return;
  if(n == divisor){
    printf(" %d ",n);
    contador--;
    n++;
     return primo(n, 2, contador); // divisor reseta acada novo numero

}
  if(n%divisor != 0) {
    divisor++;
     return primo(n, divisor, contador);
  }
  else{
    n++;
    return primo(n, 2, contador);
  } 
}
