#include <stdio.h>

typedef struct {
    double f;
    double e;
}complex;

int main(void){
    FILE * arq = NULL;
    char a;

    arq = fopen("abc", "rb"); //abre o arquivo gerado no exercicio anterior

    if(arq == NULL){
        return 1; //se não tiver criado, ele retorna um valor 1 e nem chega a abrir
    }
    for(a = fgetc(arq); a != EOF; a = fgetc(arq)){
        printf("(%d): %c\n", (int)a, a); //para cada item no arquivo, ele imprime
    }
    fclose(arq);
    return 0;
}
