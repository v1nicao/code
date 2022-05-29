#include <stdio.h>
#include <stdlib.h>
#define max 10

int main(){
    int n, m , i, k, z;
    int matriz[max][max];

    while(n <= 0 || n >= 11){
        scanf("%d", &n);
    }
    while(m <= 0 || m >= 11){
        scanf("%d", &m);
    }
    //scanf("%d", &z);
    
    for(i = 0; i < n; i++){
        //printf("linha: %d", i);
        for(k = 0; k < m; k++){
            scanf("%d", &matriz[i][k]);   
            //scanf("%d", &z);
            //printf("Linha %d: %d,%d\n", i, matriz[i][k]);
        }
    }
    for(i = 0; i < n; i++){
        printf("linha %d: ", i + 1);
        for(k = 0; k < m; k++){
            if(k == m-1)
                printf("%d", matriz[i][k]);
            else {
                printf("%d,", matriz[i][k]);
            }
        }
        printf("\n");
    }


    
    return 0;
}