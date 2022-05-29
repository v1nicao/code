#include <stdio.h>
#define n_max 100000

int main(){
    int v[n_max];
    int t, b, i, n, k;

    scanf("%d", &t);
    scanf("%d", &b);
    for(i=0; i<t; i++){
        scanf("%d", &v[i]);
    }

    for(i=0; i<b; i++){
        scanf("%d", &n);
        for(k=0; k<t; k++){
            if(n == v[k]) break;
        }

        if(k<t) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
        
    }
 return 0;
}