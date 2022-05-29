#include <stdio.h>

//este programa lê a maior sequência crescente de um múmero

int main() {
    int n, k;
    int num, numant;    

    int numax, natual;        //variavel que guarda o o maior numero e o atual

    scanf("%d", &n);

    scanf("%d", &num);
    natual = 1;
    numax = natual;

    for(k=1; k <= n; k++){
        numant = num;
        scanf("%d", &num);

        if(num > numant){
            natual++;
            if(natual > numax){
                numax = natual;
            }
        } else {
            natual = 1;
        }
    } printf("O comprimento do segmento crescente maximo e: %d\n", numax);



    return 0;
}