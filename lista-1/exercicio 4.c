/*declare um array com os 8 primeiros numeros de fibonacci e imprima eles*/

#include <stdio.h>
#define MAX 8

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
    int array[MAX], fib;

    for(int i=0;i<MAX;i++){
        array[i] = fibonacci(i+1);
    }

    for(int i=0;i<MAX;i++) printf("%d \t",array[i]);

return 0;
}
