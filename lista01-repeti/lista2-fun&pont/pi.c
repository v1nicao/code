#include <stdio.h>

/**
* Função que calcula o valor de pi usando a série proposta por John Wallis
* @param n quantidade de termos da série
* @return o valor aproximado da constante pi
*/
double compute_pi( int n ){
    double p = 1;
    int i = 1;
    int n1 = 2;
    int n2 = 1;
    for (i=1;i<=n;i++){
        p *= n1/(double)n2;
        if (i%2 == 0) n1+=2;
        else n2+=2;
    }
    return p*2;
}
int main(){
    int n;
    scanf("")



}