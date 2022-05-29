#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double f;   //vero real
    double e;   //vero imaginario
}Complex;

void complexPrint(Complex d){
    if(d.f != 0){
        printf("%.2lf", d.f);
    } if(d.f != 0 && d.e != 0){
        printf("%+.2lfi", d.e);
    } if(d.f == 0 && d.e != 0){
        printf("%.2lfi", d.e);
    }if(d.f == 0 && d.e == 0){
        printf("0");
    }
}

int main(void){
    FILE * arq = NULL;
    Complex vet[3];
    int k, v;

    arq = fopen("Complex", "rb");
    if(arq == NULL){
        return 1;
    }
    v = fread(vet, sizeof(Complex), 3, arq);

    fclose(arq);

    for(k=0; k<v; i++){
        complexPrint(v[k]);
        printf("\n");
    }
    return 0;
}