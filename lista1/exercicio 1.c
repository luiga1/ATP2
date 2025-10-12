/*declare um array de 10 inteiros e imprima eles*/

#include <stdio.h>
#define MAX 10

int main(){
    int array[MAX] ={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i=0;i<MAX;i++) printf("%d \t",array[i]);

return 0;
}
