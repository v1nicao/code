#include <stdio.h>
#include <stdlib.h>
#define n_max 1000

int main(){
    int n, i, k;
    int matriz[n_max][n_max];
    int diago;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(k = 0; k < n; k++){
            scanf("%d", &matriz[i][k]);
        }
    }
    printf("\n");
    diago = n - 1;

    for(i = 0; i < n; i++){
        for(k = 0; k < n; k++){
            if(k == diago){
                printf("%d\n", matriz[i][k]);
                break;
            }
        } diago--;
    }
    return 0;
}