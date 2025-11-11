/*Escreva um programa em C para ler e exibir um registro especifico em umarquivo binario.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    char nome[20];
}Pessoa;

void scanpessoa(FILE*arq);

int main(){
    FILE *arq;
    const int size = sizeof(Pessoa);
    int num;
    Pessoa saida;

    arq = fopen("arquivob3.bin","wb");

    scanpessoa(arq);

    fclose(arq);
    // fecha o arquivo para poder ler ele
    arq = fopen("arquivob3.bin","rb");

    printf("Digite qual pessoa quer ascessar");
    scanf("%d",&num);

    fseek(arq,(num * size) ,SEEK_SET);
    fread(&saida,size,1,arq);

    printf("Pessoa: %s , %d anos",saida.nome,saida.idade);

    fclose(arq);
    
}

void scanpessoa(FILE*arq){
    Pessoa entrada;
    int loc;

    printf("digite quantas pessoas serao registradas ");
    scanf("%d",&loc);

    for(int i=0;i<loc;i++){
        printf("Digite a idade\n");
        scanf("%d",&entrada.idade);

        printf("Digite o nome[20]\n");
        scanf("%s",entrada.nome);

        fwrite(&entrada,sizeof(Pessoa),1,arq);
    }
}

