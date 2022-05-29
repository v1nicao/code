#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Dimensao
{

  double c1, c2, c3, c4, square;
};
typedef struct Dimensao dim;

void trade(dim *x, dim *y)
{
  dim temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

void ordened(dim vet[], int n)
{
  int i, j;

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (vet[i].square > vet[j].square)
      {
        trade(&vet[i], &vet[j]);
      }
    }
  }
}

int main()
{

  int N;
  dim *A;
  int i;
  double sum;

  scanf("%d", &N);
  A = malloc(N * sizeof(dim));
  if (2 <= N && N <= 1000)
  {
    for (i = 0; i < N; i++)
    {
      scanf("%lf", &A[i].c1);
      scanf("%lf", &A[i].c2);
      scanf("%lf", &A[i].c3);
      scanf("%lf", &A[i].c4);
      sum = pow(A[i].c1, 2) + pow(A[i].c2, 2) + pow(A[i].c3, 2) + pow(A[i].c4, 2);
      A[i].square = sqrt(sum);
    }

    ordened(A, N);

    for (i = 0; i < N; i++)
    {

      printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", A[i].c1, A[i].c2, A[i].c3, A[i].c4, A[i].square);
    }
  }

  free(A);
  return 0;
}