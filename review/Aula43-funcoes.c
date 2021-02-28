#include <stdio.h>
#include <stdlib.h>

/*
 * tipo nomeFuncao (parametros)  { Conjunto de delcaracoes e comandos }
 * 
 */

int quadrado(int a); //prototipo 1
int quadrado(int);   //prototipo 2 - opcional, caso nao queira passar o nome dos parametros

// float raiz(float r);
// int soma(int x, int y);

int fatorial(int n)
{
  int i, f = 1;

  for (i = 1; i <= n; i++)
  {
    f *= i;
  }

  return f;
}

int main()
{
  // int x, y;
  // printf("digite x: \n");
  // scanf("%d", &x);

  // y = quadrado(x);
  // printf("y = %d\n", y);

  int n = 10;
  printf("Fatorial de 10..: %d\n", fatorial(n));

  return 0;
}

int quadrado(int a)
{
  return a * a;
}