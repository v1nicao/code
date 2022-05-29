#include <stdio.h>
 
/*Função que calcula a raiz quadrada de n.
@param n um numero real qualquer
@param p precisão do cálculos
@return a raiz quadrada de n
*/

double root(double num, double R)
{
  double k;
  k = (R + (num / R)) / 2;
  return k;
}
/**
* Valor absoluto de um numero qualquer
* @param n um número real qualquer
* @return o valor absoluto de n
*/ 
double absoluto(double R, double num)
{
  double r;
  r = (R * R) - num;
  return r;
}
 
int main()
{
 
  double num, err, res = 1, x, y;
  scanf("%lf %lf", &num, &err);
  y = root(num, res);
  res = y;
  x = absoluto(y, num);
  printf("r: %.9lf, err: %.9lf\n", y, x);
  while (x > err)
  {
    y = root(num, res);
    res = y;
    x = absoluto(y, num);
    printf("r: %.9lf, err: %.9lf\n", y, x);
  }
  return 0;
}
