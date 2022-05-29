#include <stdio.h>

int main() {
    int num, hr;
    float baseSala, sala;

    scanf("%d %d", &num, &hr);
    scanf("%f", &baseSala);

    sala = hr * baseSala;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sala);

    return 0;
}