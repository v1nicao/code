#include <stdio.h>

int main(void){

    int linhas, colunas;
    int mat[100][100];
    int cont, ind, maior=-10 , menor=200, qtt1=0, qtt2=0;
    double freq1, freq2;

    scanf("%d %d", &linhas, &colunas);
    
    
    for(cont=0; cont<linhas; cont++){
        for(ind=0; ind<colunas; ind++){
            scanf("%d", &mat[cont][ind]);
        }

    }

    for(cont=0; cont<linhas; cont++){
        for(ind=0; ind<colunas; ind++){
            if(mat[cont][ind] >=maior){
                maior = mat[cont][ind];
            }else if(mat[cont][ind] <= menor){
                menor = mat[cont][ind];
            }
        }
    }

    for(cont=0; cont<linhas; cont++){
        for(ind=0; ind<colunas; ind++){
            if(mat[cont][ind] == maior){
                qtt1 = qtt1 + 1;
            }else if(mat[cont][ind] == menor){
                qtt2 = qtt2 + 1;
            }
        }
    }

    freq1 = qtt1/(double)(linhas*colunas);
    freq2 = qtt2/(double)(linhas*colunas);
    
    
    printf("%d %.2lf%%\n",menor, freq2*100);
    printf("%d %.2lf%%\n",maior, freq1*100);

    return 0;


}