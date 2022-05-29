#include <stdio.h>

/**
* Imprime os bits dos n bytes endereçados por end_byte.
* @param end_byte endereço do primeiro byte a ser impresso
* @param quantidade de bytes a serem impressos
*/
void print_bytes( const void * end_byte, int n ){
    int p = 128;
    int x;
    while(p>0){
        if(x/p > 0) printf("1");
        else printf("0");
        x = x%p;
        p = p/2;
    }
}

void full_print(unsigned char * pbytes, int t){
    int i;
    for(i=0; i<t; i++){
        print_bytes( *pbytes);
        printf(" ");
        pbytes++;
    } printf("\n");
}

int main() {
    double n;
    unsigned char ch;
    unsigned short sh;
    unsigned int i;
    float f;

    scanf("%lf", n);

    ch = (unsigned char)n;
    sh = (unsigned short)n;
    i = (unsigned int)n;
    f = (float)n;

    full_print( &ch, sizeof(char));
    full_print((unsigned char *) &sh, sizeof(short));
    full_print((unsigned char *) &i, sizeof(int));
    full_print((unsigned char *) &f, sizeof(float));
    full_print((unsigned char *) &n, sizeof(double));


    return 0;
}