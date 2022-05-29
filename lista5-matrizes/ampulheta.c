#include <stdio.h>

int main() {
    int mat[6][6];
    int linha, coluna;
    int soma=0, maior=-800; 
    
    for(linha=0; linha<6; linha++){
        for(coluna =0; coluna<6; coluna++){
            scanf("%d", &mat[linha][coluna]);
        }
    }
    
    for(linha=0; linha<6; linha++){

        for(coluna=0; coluna<6; coluna++){
            soma = 0;
            if(linha<=3 && coluna<=3){
                soma = mat[linha][coluna] + mat[linha][coluna+1] + mat[linha][coluna+2] + mat[linha+1][coluna+1] + mat[linha+2][coluna] + mat[linha+2][coluna+1] + mat[linha+2][coluna+2];
                if(soma >= maior){
                    maior = soma;
                }
            }
        }
    }

    printf("%d\n", maior);
    /*
        a b c
          d      
        e f g

        linha,coluna     linha, coluna+1     linha, coluna+2
                        linha+1, coluna+1
        linha+2,coluna   linha+2, coluna+1    linha+2, coluna+2

    */
    return 0;
}