#include <stdio.h>

/*
* Funcao que calcula o fatorial de um numero n
* @param n um numero inteiro positivo
* @return o fatorial de n
*/
unsigned long int fat( unsigned int n){
    unsigned long int f = 1;
    while (n>1)
    {
        f = f*n;
        n--;
    } return f;
    
}

int main () {
    int n;
    unsigned long int f;
    scanf("%d", &n);

    f = fat(n);

    printf("%d! = %lu", n, f);

    return 0;
}