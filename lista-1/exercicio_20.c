/*declare um array de 12 caracteres e use aritimetica de ponteiros para inverter a ordem dos caracteres no array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 12

int main(){
    char array[MAX] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'},
     *ptr;
     int i;

    ptr = array;

    for(i=MAX-1;i>=0;i--){
        printf("%c ", *(ptr +i));
    }

return 0;}
