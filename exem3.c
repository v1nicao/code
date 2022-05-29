#include <stdio.h>

int main() {
    int i;
    int x[4];


    x[0] = 10;
    x[1] = 20;
    x[2] = 30;
    x[3] = 40;

    for (i=0;i<4;i++){
        printf("%d, ", x[i]);
    }


}