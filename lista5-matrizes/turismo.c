#include <stdio.h>

int main(void){

    int cidades, caminho[100];
    int mat[6][6] = {0, 63, 210, 190, 1000, 190,
                    63, 0, 160, 150, 95, 10, 
                    210, 160, 0, 10, 1, 10,
                    190, 150, 10, 0, 10, 20,
                    10, 95, 7, 21, 0, 80, 
                    190, 2, 1000, 41, 80, 0};
    int cont, ind;
    int distancia=0;
    int confirma=0;
    scanf("%d", &cidades);

    for(cont=0; cont<cidades; cont++){
        scanf("%d", &caminho[cont]);
    }


    for(cont=0; cont<=cidades-2; cont++){
        if(mat[caminho[cont]][caminho[cont+1]] == 1000){
            confirma = 1;
        }
        distancia = distancia + mat[caminho[cont]][caminho[cont+1]];
    }

    if(confirma>0){
        printf("rota invalida!\n");
    }else{
        printf("%d\n", distancia);
    }

    return 0;
}
