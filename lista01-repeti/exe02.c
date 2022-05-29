#include <stdio.h>
#include <math.h>

int main () {

    int n, y;
    int i = 2;

    scanf("%d", &n);
    
    if(n%2 == 0){
    
        for(i <= n; n-2; i++){
        y = pow(n,i);
        printf("%d^2 = %d\n", n, y);
        }
      
           
    } else printf("impar\n");

    return 0;
}