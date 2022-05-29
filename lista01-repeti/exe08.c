#include <stdio.h>

int main() {
    int n, numtime, numtime2, cont = 0;

    scanf("%d", &n);

    if(n>1){
        numtime = 1;
        numtime2 = 1;
        cont = 0;
        
        for(numtime=1; numtime<=n; numtime++){
            for(numtime2=1; numtime2<=n; numtime2++){
                if(numtime<numtime2){
                    cont++;

                    printf("final %d: Time%d X Time%d\n", cont, numtime, numtime2);
                }
            }
        }
    } else printf("Campeonato invalido!");
    return 0;
}