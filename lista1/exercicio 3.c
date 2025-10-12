/*declare um array com os 7 primeiros primos e imprima eles*/

#include <stdio.h>
#define MAX 7

int main(){
    int array[MAX] ={2,3,5,7,11,13,17};

    for(int i=0;i<MAX;i++) printf("%d \t",array[i]);

return 0;
}
