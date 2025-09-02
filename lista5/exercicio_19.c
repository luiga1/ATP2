/*Crie uma funcao recursiva para calcular o coeficiente binomial C(n, k).*/
#include<stdio.h>

int binomial(int n, int k); // relação de pascal C(n, k) = C(n-1, k-1) + C(n-1, k);

int main(){
    int n, k;

    printf("digite o coeficiente binomial n ");
    scanf("%d",&n);
    printf("digite o coeficiente binomial k ");
    scanf("%d",&k);

    printf("o binomial de %d por %d é %d", n, k, binomial(n,k));

return 0;
}

int binomial(int n, int k){
    if(k == 0 || k == n){
        return 1;
    }
    return binomial(n-1, k-1) + binomial(n-1, k);
}
