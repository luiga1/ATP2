/*Funçao recursiva para sequencia de fibonatti*/
#include <stdio.h>

int fibonacci(int n){
   int fib;
   if(n==0){
    return 0;
   }else{
       if(n==1){
            return 1;
       }else{
            fib = fibonacci(n-1) + fibonacci(n-2); // chama a função até achar 1 ou 0
       }
   }
}

int main(){
    int num, fib;

    printf("digite qual termo da sequencia sera imprimido: ");
    scanf("%d",&num);
    fib = fibonacci(num);
    printf("o numero do fibonacci e %d",fib);

return 0;
}
