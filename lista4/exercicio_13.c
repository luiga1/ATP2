/*Escreva um programa em C para ordenar registros em um arquivo binario com base em um campo especıfico.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { 
    int idade;
    char nome[20];
}Pessoa;
   
void printfunc(FILE* arq);
void ordenaFile(FILE* arq, int n);

int main(){
    FILE *arq;
    int escolha = -1;

    arq = fopen("arquivob3.bin","r+b");
    while(escolha != 0){
        printf("Digite qual vc quer ordernar\n1-Idade\n2-Nome\n3-Imprime o arquivo\n0-sair");
        scanf("%d",&escolha);

        if(escolha == 1) ordenaFile(arq,1);
        if(escolha == 2) ordenaFile(arq,2);
        if(escolha == 3) printfunc(arq);
}

fclose(arq);
return 0;
}

/*Print de um struct*/
void printfunc(FILE* arq){
    Pessoa p1;

    fseek(arq,0,SEEK_SET);

    while (fread(&p1,sizeof(Pessoa),1,arq)){

        printf("Nome: %s\nIdade: %d\n",p1.nome,p1.idade);

    }

}

void ordenaFile(FILE* arq ,int n){
    int nump = ftell(arq)/sizeof(Pessoa);

    for(int i=0;i<nump-1;i++){
        for(int j = i;j < nump;j++){
            Pessoa p1, p2;

            // lendo as pessoas

            fseek(arq,i*sizeof(Pessoa),SEEK_SET);
            fread(&p1,sizeof(Pessoa),1,arq);

            fseek(arq,j*sizeof(Pessoa),SEEK_SET);
            fread(&p2,sizeof(Pessoa),1,arq);

            // ordenar por idade
            if(n == 1) {
                if(p1.idade > p2.idade){

                    // reescreve os structs ordenados
                    fseek(arq,i*sizeof(Pessoa),SEEK_SET);
                    fwrite(&p2,sizeof(Pessoa),1,arq);

                    fseek(arq,j*sizeof(Pessoa),SEEK_SET);
                    fread(&p1,sizeof(Pessoa),1,arq);
                }
            }

            // ordena por nome
            if(n==2){
                if(strcmp(p1.nome,p2.nome) > 0){
                    fseek(arq,i*sizeof(Pessoa),SEEK_SET);
                    fwrite(&p2,sizeof(Pessoa),1,arq);

                    fseek(arq,j*sizeof(Pessoa),SEEK_SET);
                    fread(&p1,sizeof(Pessoa),1,arq);
                }
            }

        }
    }


}
