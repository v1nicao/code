#include <stdio.h>
#define v_max 1000

int main() {
    int n, i, j, v[1000] = {0};
    int soma = 0, pro_soma = 0;
    float media = 0;

    scanf("%d", &n);

    if(n >= 5){
        scanf("%d", &v[i]);
        
        for(i = 0; i < v[1000]; i++){
            //printf("%d\n", n);
            soma = soma + i;

            /*while(n%2 == 0){         
                if(n/2 < soma){
                    printf("PRIMEIRA PARTE\n");
            }   if(n/2 > soma){
                    printf("SEGUNDA PARTE\n");
            }   if(n/2 == soma){
                    printf("EMPATE\n");
            }        
        }
            while(n%2 != 0){
                if(v[5] < soma){
                    printf("PRIMEIRA PARTE\n");
                } if(v[5] > soma){
                    printf("SEGUNDA PARTE\n");
                } if(v[5] == soma){
                    printf("EMPATE\n");
                }
            }*/
        }
        media = soma / n;
        printf("%d\n", soma);
            
        printf("%.2f\n", media);  

    } else printf("QUANTIDADE DE ELEMENTOS INVALIDOS!\n");
    //printf("%.2f\n", media = soma / n);
    
    return 0;
}