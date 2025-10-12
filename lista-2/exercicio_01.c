/*declare e inicialize uma matriz 3x3 e imprima seus elementos.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3
int main(){
    int matriz[SIZE][SIZE], i, j;
    srand(time(0));
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            matriz[i][j] = rand()%10;
        }
    }

    printf("a matriz é");
    for(i=0;i<SIZE;i++){
            printf("\n");
        for(j=0;j<SIZE;j++){
            printf (" %d", matriz[i][j]);
        }
    }

return 0;}
