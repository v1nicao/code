#include <stdio.h>
#include <stdlib.h>

struct equivale {
    double x, y;
    double resul;
};
typedef struct equivale fracao; 


int main() {
    int num, k, l;
    int i, tamanho;
    fracao vet[50];
    int tt = 0;

    scanf("%d", &num);

    for(i = 0; i < num; i++){
        
        
        
        
        scanf("%d", &tamanho);

        for(k = 0; k < tamanho; k++){
            scanf("%lf/%lf", &vet[k].x, &vet[k].y);
            vet[k].resul = vet[k].x / vet[k].y;

        }
        printf("Caso de teste %d\n", i+1);
        for(k = 0; k < tamanho; k++){
            for(l = k+1; l < tamanho; l++){
                if(vet[k].resul == vet[l].resul){
                    tt++;
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", vet[k].x, vet[k].y, vet[l].x, vet[l].y);
                }
            }
        }
        if(tt == 0){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }




        tt = 0;
    }
    

    return 0;
}