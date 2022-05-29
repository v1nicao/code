#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaVogal(char word[]){
    char vogais[] = "aeiouAEIOU";
    int nvogais = 0, i, k;

    //palavra n posição i até o seu fim"\0", mas isso é o tamanho da string
    for(i = 0; word[i] != '\0'; i++){
    //vai armazenar letra por letra e conferir as vogais
        for(k = 0; vogais[i] != '\0'; k++){
            if(vogais[k] == word[i]){
                nvogais++;
                break;
            }
        }
    }
    return nvogais;
}

int contaConsoant(char word[]){
    char consoant[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int nconsoant = 0, i, k;

    for(i = 0; word[i] != '\0'; i++){
        for(k = 0; consoant[k] != '\0'; k++){
            if(consoant[k] == word[i]){
                nconsoant++;
                break;
            }
        }
    }
    return nconsoant;
}

int main(){
    int n, voga = 0, leter = 0, consoa = 0;
    char i, v[10000];
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%c", &v[i]);
        (gets(v));

        voga = contaVogal(v);
        consoa = contaConsoant(v);
        leter = voga + consoa;

        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", leter, voga, consoa);
    }
    return  0;
}