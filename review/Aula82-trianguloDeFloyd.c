#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que dado um numero inteiro positivo N, imprima N linhas do chamado Triangulo de Floyd:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 11 12 13 14 15
 * 16 17 18 19 20 21
 */

int main()
{
  int N = 6;
  int i, j, c = 0;

  for (i = 1; i <= N; i++)
  {
    for (j = 1; j <= i; j++)
    {
      c++;
      printf("%d ", c);
    }
    printf("\n");
  }

  return 0;
}