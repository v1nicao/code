#include <stdio.h>

int x, y;



int main() {
    int k;
    int i = 2;
    k = i;

    scanf("%d%d", &x, &y);
    if(x%2 != 0){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    } else while (k<=y)
    {
        if(k%2==0) printf("%d\n", x + 2);
        k++;
    }
    
    







    return 0;
}