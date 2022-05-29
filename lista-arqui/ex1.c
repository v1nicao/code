#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int i, x1, x2, bigger, smaller; //um contador, dois números e dois valores q armazena maior e menor

    if(argc != 3){
        printf("Usage: ./command <n1> <n2>\n");
        return 1;
    }
    x1 = atoi(argv[1]);
    x2 = atoi(argv[2]);

    if(x1 < x2){
        smaller = x1;
        bigger = x2;

        for(i = smaller; i <= bigger; i++){
            printf("%d\n", i);
        }
    } else if(x1 > x2){
        smaller = x2;
        bigger = x1;

        for(i = smaller; i <= bigger; i++){
            printf("%d\n", i);
        }
    }
    return 0;
}