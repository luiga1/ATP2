#include <stdio.h>
#include <stdlib.h>

void subconjuntos(int* array, int i, int size, int *subc, int sub_len);

int main(){
    int tamanho, sub,
     *conjunto, *subconj;

    printf("digite o tamanho do conjunto ");
    scanf("%d",&tamanho);

    conjunto = malloc(sizeof(int) * tamanho);
    subconj = malloc(sizeof(int) * tamanho);

    for(int i=0;i<tamanho;i++) *(conjunto +i) = i+1;

    subconjuntos(conjunto, 0, tamanho, subconj, sub);

}

void subconjuntos(int* array, int i, int size, int *subc, int sub_len){
    if(i == size){
        printf("{");

        for(int j=0; j<sub_len;j++){
            if(j== sub_len -1){
                printf("%d", *(subc +j));
            }else{
                printf("%d ,",*(subc+j));
            }
        }
        printf("}\n");
        return;
    }
    *(subc + sub_len) = *(array + i);

    subconjuntos(array, i+1, size, subc, sub_len +1 );

    subconjuntos(array, i+1, size, subc, sub_len);

}
