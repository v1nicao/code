#include<stdio.h>
#include<stdlib.h>

/**
* Converte a string str para o valor real correspondente.
* @param str string contendo um número real
* @return o número inteiro correspondente
*/
double string2double( const char * str );

int main()
{
// double n;
 char str[128];

while(scanf("%s", str) != EOF){
	
	double n = atof(str);
	
	printf("%.3lf %.3lf\n", n, n+n);
}

 
 return 0;
}