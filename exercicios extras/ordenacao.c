/** Algoritimos de ordenações - 
 *      bobble short , selection insertion 
 *          Quick sort, Merge short 
 * 
 *  Painel com as escolhas das ordenações
 *  e tipos de arrays que podem ser usados
 *
 *  arrays de 20 inteiros
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 20

/** funções - gerais */

/*Painel de escolhas inciais*/
int Selectuser(void);
/*troca de variavel*/
void swap(int *a, int *b);

/*Apresenta e chama as funções de ordenação baseado em seus numeros e seus estilos 
    1- bobble, 2- selection, 3-Quick, 4-Merge
    1-aleatorios, 2-array usuario*/
void Apresenta(int function, int style);



/** Funções de arrays*/

/*Print a string*/
void Printstring(int *array,int size);

/*funcao de alocar array*/
int* Alocastring(int size);

/*funcao de liberar array*/
void Liberastring(int *string);

/*Randstring - cria um array aleatoria de 20 numeros entre 1 e 50 e retorna seu ponteiro*/
void Randstring(int *string, int size);

/*Userstring - coleta um array digitada pelo usuario e retorna seu ponteiro*/
int* Userstring(int *string, int size);



/**Funções de ordenação - retornam os ponteiros */

/*Bobble*/
void Bobble(int *array, int size);

/*Selection insertion*/
void Selection(int*, int size);



/** Função main */
int main(){
    int option=0;
    /*painel de escolhas*/

    do{
       option = Selectuser();
    }while((option) = 0);


    switch (option%10){
        /*chama as funções escolhidas pelo usuario
         a primeira opcao na casa das unidades e a segunda na das dezenas*/
    
    case 1:
        //Bobble e strings aleatorias
        if(option/10 == 1) Apresenta(1,1);

        //Bobble e string do usuario
        if(option/10 == 2) Apresenta(1,2);

        break;
    
    }

return 0;
}


int Selectuser(void){
    int option, option1;
    printf("\n Algoritimos de Ordenação\n\n");
    printf("Digite uma opção\n\n 1- Bobble short\n 2- Selection insertion\n 3- Quick sort\n 4- Merge short\n 5- sair");
    scanf("%d",&option);

    if(0 > option) return 0;
    if(option>=5) return 0;

    printf("\nEscolha o que sera ordenado\n\n 1-Array aleatorio\n 2- Digitar array\n 3- Voltar menu");
    scanf("%d",&option1);

    if(0 > option1) return 0;
    if(option>=3) return 0;

    return option + 10*option1;
}


void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b ;
    *b = temp;
}


int* Alocastring(int size){
    int *array;

    array = malloc(sizeof(int) * size);
    /*verificação erros*/
    if(array == NULL) return NULL;

    return array;
}

void Liberastring(int *string){
    free(string);
}


void Randstring(int *string, int size){
    srand(time(NULL));

    for(int i=0;i<size;i++) string[i] = (rand()%50) +1;

}


int* Userstring(int *string, int size){

    for(int i=0;i<size;i++){
        printf("Digite o %d nuemro do array", i+1);
        scanf("%d",string[i]);
    }

    return string;
}


void Printstring(int *array,int size){
    for(int i=0 ;i<size;i++){
        if(i==0) printf("%d",array[i]);
        if(i+1 == size) printf("%d \n",array[i]);
        printf(" %d,", array[i]);
    }
}


void Apresenta(int function, int style){
    int *array;

    array = Alocastring(MAX_SIZE);

    switch (function){
        /*função bobble*/
    case 1:
        /*aleatorio*/
        if(style == 1){
            Randstring(array,MAX_SIZE);
            printf("A atring original é\n");
            Printstring(array,MAX_SIZE);
            Bobble(array,MAX_SIZE);
        }
        /*usuario*/
        if(style == 2){
            Userstring(array,MAX_SIZE);
            printf("A atring original é\n");
            Printstring(array,MAX_SIZE);
            Bobble(array,MAX_SIZE);
        }
        break;
    
    }

    printf("A atring ordenada é\n");
    Printstring(array,MAX_SIZE);
}


void Bobble(int *array, int size){
    for(int i=0; i<size;i++){ // esse vai percorrer o array e comparar 
        for(int j=i; j<size-i-1;j++){
            if(array[i] < array[j]) swap((array +i), (array +j));
        }
    }
}