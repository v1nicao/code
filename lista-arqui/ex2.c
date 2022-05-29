//este código imprime em um arquivo .txt os números de 1 a 100 em linha
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * arq;
    int i;

    arq = fopen("dados.txt", "w"); //abertura do arquivo e o tipo que irá escrever
    if(arq == NULL){
        return 1; //retorna um valor 1
    }
    for(i = 1; i <= 100; i++){
        fprintf(arq, "%d\n", i);
    }
    fclose(arq); //fecha o arquivo

    return 0;
}