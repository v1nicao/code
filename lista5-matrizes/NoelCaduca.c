#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    char em [200];
 
    while(scanf("%s", em) != EOF){
        if(strcmp(em, "brasil")==0 || strcmp(em, "portugal")==0){
            printf("Feliz Natal!\n");
        }
        else if(strcmp(em, "alemanha")==0){
            printf("Frohliche Weihnachten!\n");
        }
        else if(strcmp(em, "austria")==0){
            printf("Frohe Weihnacht!\n");
        }
        else if(strcmp(em, "coreia")==0){
            printf("Chuk Sung Tan!\n");
        }
        else if(strcmp(em, "espanha")==0){
            printf("Feliz Navidad!\n");
        }
        else if(strcmp(em, "grecia")==0){
            printf("Kala Christougena\n");
        }
        else if(strcmp(em, "estados-unidos")==0 || strcmp(em, "inglaterra")==0 || strcmp(em, "australia")==0){
            printf("Merry Christmas!\n");
        }
        else if(strcmp(em, "suecia")==0){
            printf("God Jul!\n");
        }
        else if(strcmp(em, "turquia")==0){
            printf("Mutlu Noeller\n");
        }
        else if(strcmp(em, "argentina")==0 || strcmp(em, "chile")==0 || strcmp(em, "mexico")==0){
            printf("Feliz Navidad!");
        }
        else if(strcmp(em, "antardida")==0 || strcmp(em, "canada")==0){
            printf("Merry Christmas!\n");
        }
        else if(strcmp(em, "irlanda")==0){
            printf("Nollaig Shona Dhuit!\n");
        }
        else if(strcmp(em, "belgica")==0){
            printf("Zalig Kerstfeest!\n");
        }
        else if(strcmp(em, "italia")==0 || strcmp(em, "libia")==0){
            printf("Buon Natale!\n");
        }
        else if(strcmp(em, "siria")==0 || strcmp(em, "marrocos")==0){
            printf("Milad Mubarak!\n");
        }
        else if(strcmp(em, "japao")==0){
            printf("Merii Kurisumasu!\n");
        }
        else printf("-- NOT FOUND --\n");
    }
 
    return 0;
}