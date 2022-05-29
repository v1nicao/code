#include <stdio.h>
 
int main(){
        
    int n, x=0, y=0, i=0, m;
        
    scanf("%d", &m);
    scanf("%d", &n);
           
    
    for(x=2; x<=m; x++){
        for(y=1; y<=n; y++){
            if(x != y && x > y){
                if(x == y + 1 || y == n) printf("(%d,%d)\n", x, y);
                else printf("(%d,%d)-", x, y);    
            }
        }
    }
       
        
    return 0;
}