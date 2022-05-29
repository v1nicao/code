#include <stdio.h>

int main() {
    int n;
    double somapar = 0, somaimp = 0, aumentpar = 0, aumentimp = 0;
    double medpar = 0, medimp = 0;

    do {
        scanf("%d", &n);
        if (n != 0){
            if(n%2 == 0){
                somapar += n;
                aumentpar++;
            } else {
                somaimp += n;
                aumentimp++;
            }
        } else {
            break;
        }
    } while (n != 0);
    
    if(aumentpar > 0){
        medpar = somapar / aumentpar;
    } else {
        medpar = 0;
    }
    if(aumentimp > 0){
        medimp = somaimp / aumentimp;
    } else {
        medimp = 0;
    }
    
    printf("MEDIA PAR: %.6lf\n", medpar);
    printf("MEDIA IMPAR: %.6lf\n", medimp);
    

    return 0;
}