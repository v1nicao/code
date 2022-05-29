#include <stdio.h>

int main() {
    int x;
    float y, media;

    scanf("%d %f", &x, &y);

    media = x / y;

    printf("%.3f km/l", media);


    return 0;
}