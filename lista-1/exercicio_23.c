/*determine se um array de 10 inteiros e simetrico (um palindromo).*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
    int *ptr, i, palin;
    ptr = malloc(sizeof(int)* 10);

    for(i=0;i<MAX;i++){
        printf("Digite o numero %d ", i+1);
        scanf("%d", &*(ptr +i));
    }

    i=-1;
    do{
        i++;
        if(*(ptr +i) == *(ptr + 10 -i)) palin =1;
        else palin =0;
        printf("%d",i);
    }while(palin && i<MAX);

    if(palin) printf("é palindromo");
    else printf("nao e palindromo");
return 0;
}
