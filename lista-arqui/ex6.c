#include <stdio.h>

typedef struct {
    double f;
    double e;
}Complex;

Complex complexRead(void){
    Complex a;

    scanf("%lf %lf", &a.f, &a.e);
    return a;
}

int main(void){
    FILE * arq = NULL;
    Complex X, Y, Z;

    X = complexRead();
    Y = complexRead();
    Z = complexRead();

    arq = fopen("Complex", "wb");
    if(arq == NULL){
        return 1;
    }
    fwrite(&X, sizeof(Complex), 1, arq);
    fwrite(&Y, sizeof(Complex), 1, arq);
    fwrite(&Z, sizeof(Complex), 1, arq);

    fclose(arq);
    return 0;
}