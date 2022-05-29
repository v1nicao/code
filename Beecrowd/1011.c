#include <stdio.h>
#define PI 3.14159

int main() {
    int R;
    double resul;

    scanf("%d", &R);

    resul = 4.0/3*PI*(R*R*R);

    printf("VOLUME = %.3lf", resul);


    return 0;
}