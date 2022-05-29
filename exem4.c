#include <stdio.h>
#include <string.h>

int copy_str(char * dest, char const * src){
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    } 
    *dest = '\0';
}
void copy_vetchar(char * dest,  int tdest, char const * src, int tsrc){
    if (tsrc > tdest){
        printf("origem é maior que o destino\n";)
        return -1;
    }
    for (i=0; i<tsrc;i++) dest[1] = src[i];
    return tsrc;
}
int main() {
    char msg[32] = "ola mundo";
    char tmp[64];

    //copy_vetchar(tmp, 64, msg, 32);
    //copy_str(tmp, msg);
    strcpy(tmp, msg); //elemento do string.h

    printf("%s\n", tmp);

    return 0;
}

