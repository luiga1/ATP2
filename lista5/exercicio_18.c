/*Implemente uma funcao recursiva para resolver o problema da Torre de Hanoi.*/
#include <stdio.h>

void hanoi(int discos, char poste_i, char poste_aux, char poste_f);

int main(){
    int qnt = 0;

    printf("digite quantos discos tera a torre de hanoi ");
    scanf("%d", &qnt);
    hanoi(qnt, 'A', 'B', 'C');

return 0;
}

void hanoi(int discos, char poste_i, char poste_aux, char poste_f){
    if(discos == 0){ // quando todos os discos sairam da torre inicial
        return;
    }

    hanoi(discos-1, poste_i, poste_f, poste_aux);

    /* a troca de torre ocorre de acordo com o menor disco, já que não podemos colocar um maior disco em cima.
     e como o menor disco está na 3 torre, ela vira auxiliar */

    printf("o disco %d foi movido de %c para %c \n",discos,poste_i, poste_f);

    hanoi(discos-1, poste_aux, poste_i, poste_f); //roda mais uma vez as torrer final e inicial para o disco mais em baixo possa sair.
}
