/*Merge sort*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

/*ideia é separar o vetor até sobrar um numero e voltando intercalando eles*/

void intercalar(int* vetor, int ini,int meio, int fim){
    int auxiliar[MAX];
    int i=ini, j=meio+1, k=0;

    while(i<= meio && j<= fim){
        if(vetor[i] <= vetor[j]) auxiliar[k++] = vetor[i++];
        else auxiliar[k++] = vetor[j++];
    }

    //copia o resto do vetor
    while(i<= meio) auxiliar[k++] = vetor[i++];
    while(j<= fim) auxiliar[k++] = vetor[j++];

    //copia de auxilixar para vetor
    for(i = ini, k=0;i<=fim;i++, k++) vetor[i] = auxiliar[k];

}

void ordena_interc(int* vetor, int ini, int fim){
    int meio;

    if(ini<fim){
        meio = (ini + fim) /2;
        ordena_interc(vetor,ini,meio);
        ordena_interc(vetor,meio+1,fim);
        intercalar(vetor,ini,meio,fim);
    }
}

int main(){
    int i;
    int vetor[MAX] = {4, 5, 1, 0, 7, 6, 3, 2};

    ordena_interc(vetor,0,7);

    for(int i=0; i<8;i++) printf("%d ", vetor[i]);

    return 0;
}
