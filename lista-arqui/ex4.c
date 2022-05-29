#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * arq;
    int i, n1, n2, n3;

    arq = fopen("abc", "wb");
    if(arq == NULL){
        return 1;
    }
    n1 = 1629495328;
    n2 = 1629495329;
    n3 = 1629495330;

    fwrite(&n1, sizeof(int), 1, arq);
    fwrite(&n2, sizeof(int), 1, arq);
    fwrite(&n3, sizeof(int), 1, arq);

    fclose(arq);

    return 0;
}