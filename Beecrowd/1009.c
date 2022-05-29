#include <stdio.h>

int main() {
    double safixo, ven, bonus, soma;
    //int temp;
    char nome [128];

    scanf("%s%lf%lf", &nome, &safixo, &ven);
    //scanf("%lf %lf", &safixo, &ven);

    //temp = nome;
    bonus = (0.15 * ven);
    soma = bonus + safixo;

    printf("TOTAL = R$ %.2lf\n", soma);

    return 0;
}