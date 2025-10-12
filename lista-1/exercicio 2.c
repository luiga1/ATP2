/*declare um array de 5 caracteres e imprima eles*/

#include <stdio.h>
#define MAX 5

int main(){
    char array[MAX] ={'a', 'b', 'c', 'd', 'e'};

    for(int i=0;i<MAX;i++) printf("%c \t",array[i]);

return 0;
}
