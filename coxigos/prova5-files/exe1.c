#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define cadastrar 1
// #define listar 2
#define sair 0

struct ItemEstoque {
    float valor; // valor de 1 unidade do produto
    char nomeItem[50]; //nome do produto
    int quantidade; //qunatidade em estoque;
    //int qtd = 0;
};
typedef struct ItemEstoque stok;

static int qtd = 0;
stok point;
FILE *arq;




void cadastro(void){
    int i = 0;
    int retorna;

    printf("digite o nome do item:");
    fflush(stdin);
    fscanf(point.nomeItem);

    printf("\ndigite o valor do item:");
    fflush(stdin);
    gets(point.valor);

    printf("\ndigite a quantidade do item a ser adicionado:");
    fflush(stdin);
    gets(point.quantidade);

    retorna = fwrite(&point, sizeof(stok), 1, arq);

    i++;
    qtd++;
}

void lista(void){
    int i, ler;

    arq = fopen("estoque.bin", "r");
    ler = fread(&point, sizeof(stok), 1, arq);
    
    while(ler == 1){

        printf("Item %d ----------", qtd);
        printf("valor: %lf", point.valor);
        printf("nomeItem: %s", point.nomeItem);
        printf("quantidade: %d", point.quantidade);
        i++;
        ler = fread(&point, sizeof(stok), 1, arq);
    }
    printf("pressione qualquer tecla para sair\n");
    getc(0);
    fclose(arq);
    
}



void menu(void){
    int op;
    FILE *arq = NULL;

    arq = fopen("estoque.bin", "wb");
    
    //op = getc();
    scanf("%d", &op);

        if(op == 1){
            cadastro();
        } else if(op == 2){
            lista();
        }else return menu();

        fclose(arq);
        
    
    //while(op);
}


int main(void){
    printf("selecione uma das opções:\n");
    printf("1 - cadastrar itens\n2 - listar itens\n3 - sair\n");
    

    menu();

    return 0;
}