#include <stdio.h>

int n;

int main() {

    scanf("%d", &n);

    if(n >= 1){
        
        double soma;
        int k;


        for(k = 1, soma = 0; k <= n; k++){
            soma += (double)1/(double)k;
            }  
        printf("%.6lf", soma);
    
    } else printf("Numero invalido!\n");





    return 0;
}