#include <stdio.h>

int main() {

    char seq[13000];    // vetor com quantidade que vai ser lida
    int n, i, e; //quantidade de vezes q vai se repetir

    scanf("%d", &n);    //leitura de quantidade que vai ser lida
    for(i=0; i<=n; i++){
        fgets(seq, sizeof(seq), stdin);
        i++;
        // for(e=0; e<=i; e++){
        //     fgets(seq, sizeof(seq), stdin);
        //     e--;
        // }
    }
    puts(seq);

    


    return 0;
}