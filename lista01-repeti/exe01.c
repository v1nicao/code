#include <stdio.h>
 
int main () {
 
  int n, i;
  double F, C;
 
  scanf("%d", &n);
 
  for(i = 0; i < n; i++){
    scanf("%lf", &F);
 
    C = 5*(F-32)/9;
 
    printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F,C);
 
  }
    return 0;
}