/*leia 6 valores de ponto flutuante e calcule a media dos valores.*/

#include <stdio.h>
#define MAX 6

int main(){
    float array[MAX], n, media=0;
    int i;

    for(i=0;i<MAX;i++){
         printf("Digite o %d numero ",i+1);
         scanf("%f",&n);
         array[i] = n;
    }

    for(i=0;i<MAX;i++) media = (media + array[i]) * 0.5;

    printf("Media = %3.f",media);


return 0;
}
