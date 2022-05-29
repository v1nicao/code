#include <stdio.h>

int main(void){
    double a, b, c;

    scanf("%lf %lf", &a, &b);
    c = a / b;

    printf("%.2lf", c);

    return 0;
}