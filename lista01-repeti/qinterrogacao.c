#include <stdio.h>

int inv(int n){
    int cen, dez, uni;
    cen = n/100;
    dez = n%100/10;
    uni = n%10;
    return uni*100+dez*10+cen;
}

int main() {
    int n;
    int a, b;
    scanf("%d", &n);

    while(n>0){
        scanf("%d %d", &a, &b);
        a = inv(a);
        b = inv(b);
        if(a<b) printf("%d\n", b);
        else printf("%d\n", a);
        n--;
    }



    return 0;
}