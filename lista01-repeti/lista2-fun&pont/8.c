#include <stdio.h>
#include <math.h>
 
int next_power(int * n, int * p){
    int a, b, c;
    int i, k, j;
    int x, y;
 
    a = 0;
    b = 0;
    c = 0;
    i = 0;
    k = 0;
    j = 0;
    x = 0;
    y = 0;
 
    if (*n>0){
        while(a < *n){
            c++;
            a = pow(c,*p);
            if (a < *n){
                b = a;
            }
        }
        k = *n - b;
        i = pow(c,*p);
        j = i - *n;
        if (k < j){
            y = b;
            x = c-1;
        }
        if (j < k){
            y = i;
            x = c;
        }
    }
    if (*n == 0){
        x = 0;
        y = 1;
    }
    if (*n < 0){
        return 0;
    }
    
    printf("%d -> %d^%d = %d\n", *n, x, *p, y);
 
    return 0;
}
 
int main(){
    int base, exp;
 
    scanf("%d %d", &base, &exp);
 
    next_power(&base, &exp);
 
    return 0;
}