#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    double price;
}market;

typedef struct {
    char name[50];
    int quantidade;
}order;

int main() {
    int ida, quanprodu, produ; //leitura respectivamente do num de idas, quantidadedade de produtos e produtos
    market *itens;
    order *itens2;
    int i, j, k;
    double cost;

    scanf("%d", &ida);

    for(i=0; i<ida; i++){

        scanf("%d", &quanprodu);
        itens = malloc(quanprodu *sizeof(market));

        for(j=0; j<quanprodu; j++){
            scanf("%*c %s %lf", &itens[j].name, &itens[j].price);
        }
        scanf("%d", &produ);
        itens2 = malloc(produ * sizeof(market));

        for(j=0; j<produ; j++){
            scanf("%*c %s %d", &itens2[j].name, &itens2[j].quantidade);
        }

        for(j=0; j<produ; j++){
            for(k=0; k<quanprodu; k++){
                if(strcmp(itens2[j].name, itens[j].name) == 0){

                    cost += itens2[j].quantidade * itens[k].price;

                }
            }
        }
        printf("R$ %.2lf\n", cost);
        cost = 0;
        free(itens);
        free(itens2);
    }
    return 0;
}