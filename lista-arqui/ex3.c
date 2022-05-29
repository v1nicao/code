//este código imprime em um arquivo em binário os números de 1 a 100
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * arq;
    int k;

    arq = fopen("dados_binarios", "wb"); //abre o arquivo e escreve em binário
    if(arq == NULL){
        return 1;
    }
    for(k = 1; k <= 100; k++){
        fwrite(&k, sizeof(int), 1, arq);
    }
    fclose(arq); //fecha o arquivo

    return 0;
}