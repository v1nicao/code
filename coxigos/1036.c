#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delt, x, x2, x1;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0){
        printf("Impossivel calcular\n");
    }

    while(a != 0){
        delt = (b*b) - (4*a*c);

        x1 = ((-b) + sqrt(delt)) / (2*a);
        x2 = ((-b) - sqrt(delt)) / (2*a);

        if(delt == 0 || delt < 0){
            printf("Impossivel calcular\n");
            break;
        }
        else {
        printf("x1 = %.5lf\n", x1);
        printf("x2 = %.5lf\n", x2);
        break;
        }
    }
    return 0;
}