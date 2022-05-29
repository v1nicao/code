#include <stdio.h>

/*
* Funcao que calcula o fatorial de um numero n
* @param n um numero inteiro positivo
* @return o fatorial de n
*/
unsigned long int fat( unsigned int n){
    int fat;
    fat = n*(n-1);
    return(fat);
}



int main() {

    int n, fatoral;

    scanf("%d", &n);

    fatoral = fat(n);

    printf("%d! = %d\n", fatoral);


    return 0;
}