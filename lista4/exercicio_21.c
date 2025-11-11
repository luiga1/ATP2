/*Escreva um programa em C para verificar se um numero especıfico esta presente em um arquivo binario contendo numeros inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* arq;
    int num,i;
    int cont =0;

    arq = fopen("arquivob5.bin", "rb");

    printf("Digite qual numero quer procurar:");
    scanf("%d",&num);

    while(!feof(arq)){
        fread(&i,sizeof(int),1,arq);
        if(i == num) cont++;
    }

    if(cont) printf("o arquivo possuem %d numeros procurados",cont);
    else printf("o arquivo não possue o numero procurado");

    fclose(arq);

return 0;
}
