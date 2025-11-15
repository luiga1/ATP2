/*Escreva um programa em C para criar um arquivo binario contendo dados estruturados e implementar uma funcao de busca eficiente.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char nome[40];
    float nota;
}   Aluno;

/*cria um arquivo com as estruturas(ordenado)*/
void cria_arquivo(FILE* arq);

/*puxar as info da busca*/
Aluno busca(FILE*arq);

/*buscar no arquivo pelo id */
int buscabin(FILE* arq, int busca);

/*contar a quantidade de registros que possue no arquivo*/
int contar_registros(FILE *arq);


int main(){
    FILE* arq;
    Aluno out;

    arq = fopen("arquivob8.bin","w+b");

    if(arq == NULL){
        perror("arquivob8.bin");
        return 1;
    }

    cria_arquivo(arq);

    out = busca(arq);

    printf("O aluno é\nID: %d\nNome: %s\nNota: %.2f",out.id,out.nome,out.nota);

    fclose(arq);

return 0;
}

Aluno busca(FILE*arq){
    int busca, ptr;
    Aluno init;

    printf("Digite qual id deseja procurar ");
    scanf("%d",&busca);

    ptr = buscabin(arq, busca);

    if(ptr == -1){
        printf("Nao existe esse id registrado");
        exit(EXIT_FAILURE);
    }

    fseek(arq,ptr,SEEK_SET);

    fread(&init,sizeof(Aluno),1,arq);

    return init;

}   

int buscabin(FILE* arq, int busca){
    const int size = sizeof(Aluno);
    Aluno temp;
    int registros = contar_registros(arq),
        init=0,
        end = registros,
        mid;

    fseek(arq,0,SEEK_SET);

    while(init<=end){
        mid = (init + end) / 2;

        fseek(arq,mid*size,SEEK_SET);

        fread(&temp,size,1,arq);    

        if(temp.id > busca){
            end = mid-1;
        }
        if(temp.id < busca){
            init = mid+1;
        }
        if(temp.id == busca){
            return mid;
        }
    }
    return -1;
}

int contar_registros(FILE *arq){
    if (fseek(arq, 0, SEEK_END) != 0) return -1;
    int sz = ftell(arq);
    if (sz < 0) return -1;
    return sz / (int)sizeof(Aluno);
}

void cria_arquivo(FILE* arq){
    Aluno exemplo[] = {
        {(int)1,  "Pedro Costa", 5.9},
        {(int)3,  "Carlos Souza", 9.4},
        {(int)8,  "Rafael Gomes", 6.6},
        {(int)10, "Daniel Rocha", 4.1},
        {(int)12, "Gustavo Nunes", 7.9},
        {(int)17, "Caio Gabriel", 7.0},
        {(int)20, "Pedro Pinto", 7.0},
        {(int)27, "Beatriz Lima", 7.2},
        {(int)45, "Ana Silva", 2.8},
        {(int)50, "Luiza Pereira", 3.7},
        {(int)67, "Júlia Fernandes", 7.0},
        {(int)99, "Mariana Alves", 8.0},
    };

    for(int i=0;i<12;i++){
        fwrite(&exemplo[i],sizeof(Aluno),1,arq);
    }
    fseek(arq,0,SEEK_SET);
}