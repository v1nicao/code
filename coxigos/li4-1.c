#include <stdio.h>
#include <stdlib.h>

int main() {
    //int i, k, matriz[2][2];
    double a, b, c, d;
    double det;

    //scanf("%d", &n);
    /*for(i = 0; i <= 2; i++){
        for(k = 0; k <= 2; k++){
             det = (a*d) - (b*c);
            printf("%d", det, matriz[i][k]);
            //printf("(%d, %d)\n", i, k, matriz[i][k]);
        }
    }
    */
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);

    det = (a*d) - (b*c);
    printf("%.2lf", det);



    return 0;
}