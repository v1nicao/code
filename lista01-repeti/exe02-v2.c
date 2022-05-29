#include <stdio.h>
#include <math.h>

int n, y;

int main () {

    int k;
    
    scanf("%d", &n);
    
    for(k=1; k<=n; k++){
        if(k%2 == 0)
        printf("%d^2 = %d\n", k, k*k);
    }
        
    return 0;
}