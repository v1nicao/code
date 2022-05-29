#include <stdio.h>

void print_byte(unsigned char x) {
    int p = 128;

    while(p>0) {
        if ( x/p > 0) printf("1");
        else printf("0");
        x = x%p;
        p = p/2;
    }
}

void full_print( unsigned char * pbyte, int t) {
    int i;
    for (i=0; i<t; i++) {
        print_byte(*pbyte);
        printf(" ");
        pbyte++;
    }
    printf("\n");
}

int main() {
    double n;
    unsigned char ch;
    unsigned short sh;
    unsigned int i;
    float f;
    
    scanf("%lf", &n);
    ch = (unsigned char)n;
    sh = (unsigned short)n;
    i = (unsigned int)n;
    f = (float)n;

    full_print( &ch, sizeof(char) );
    full_print( (unsigned char *) &sh, sizeof(short) );
    full_print( (unsigned char *) &i, sizeof(int) );
    full_print( (unsigned char *) &f, sizeof(float) );
    full_print( (unsigned char *) &n, sizeof(double) );
    return 0;
}