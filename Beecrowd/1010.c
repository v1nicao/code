#include <stdio.h>

int main() {
    int num1, num2, cod1, cod2, i, k;
    float valor1, valor2;
    double soma, soma2, somatotal;

    scanf("%d %d %f", &cod1, &num1, &valor1);
    scanf("%d %d %f", &cod2, &num2, &valor2);

    for(i=0; i<num1; i++){
        soma = num1 + i;
        soma++;
    }
    for(k=0; k<num2; k++){
        soma2 = num2 + k;
        soma2++;
    }
    somatotal = soma + soma2;
    printf("%.2lf\n", somatotal);


    return 0;
}