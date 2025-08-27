/*receba uma string como argumento na linha de comando e conte o numeros de caracteres dessa string.*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int tamanho;
    tamanho =strlen(argv[1]);
    printf("O tamanho do argumento é %d",tamanho);

return 0;
}
