#include <stdio.h>

//este programa deve ler um número n e mostar o resultado da forma fatorial

int main() {
    int n;      //número n que vai ser fatorado
    int a;      //o resultado da fatoração
    
    scanf("%d", &n);
    
    //cálculo da fatoração em loop
    for(a = 1; n > 1; n = n-1){
        a=a*n;
    } printf("%d! = %d\n", n, a);



    return 0;
}