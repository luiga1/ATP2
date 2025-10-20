/*Declare e inicialize uma estrutura aninhada para armazenar as informacoes de
um ponto (x, y, z) e imprima seus valores.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float x;
    float y;
    float z;
}Ponto;

Ponto scanPonto(void){
    Ponto saida;

    printf("Digite o x ");
    scanf("%f",&saida.x);

    printf("Digite o y ");
    scanf("%f",&saida.y);

    printf("Digite o z ");
    scanf("%f",&saida.z);

    return saida;
}

printPonto(Ponto p){
    printf("X: %.2f\nY: %.2f\nZ: %.2f",p.x,p.y,p.z);
}

int main(){

    Ponto p;

    p = scanPonto();
    printPonto(p);

return 0;
}
