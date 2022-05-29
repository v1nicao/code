#include <stdio.h>

int main() {
    // char name[20];
    // scanf("%s", name);       //leitura do char com scanf sem o "&"

    // printf("vc escreveu %s\n", name);
    char name[64];
    fgets(name, sizeof(name), stdin);   //leitura do char usando fgets
    
    printf("nome digitado: ");
    puts(name);



    return 0;
}